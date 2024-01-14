#include <iostream>
#include <vector>

using namespace std;

enum class Color {red, green, blue};
enum class Size {small, medium, large};

struct Product
{
	string name;
	Color color;
	Size size;
};

struct ProductFilter
{
	vector<Product*> by_Color(vector<Product*> items,Color color )
	{
		vector<Product*> result;

		for (auto& i : items)
		{
			if (i->color == color)
			{
				result.push_back(i);
			}
		}
				return result;
	}

	vector<Product*> by_Size(vector<Product*> items, Size size)
	{
		vector<Product*> result;

		for (auto& i : items)
		{
			if (i->size == size)
			{
				result.push_back(i);
			}
		}
		return result;
	}
};

template <typename T> struct Specification
{
	virtual bool is_satisfied(T* item) = 0;
};

template <typename T> struct Filter
{
	virtual vector<T*> filter(vector<T*> items, Specification<T>& spec) = 0;
};

struct BetterFiler : Filter<Product>
{
	vector<Product*> filter(vector<Product*> itmes, Specification<Product>& spec) override
	{
		vector<Product*> result;
		for (auto& item : itmes)
			if (spec.is_satisfied(item))
				result.push_back(item);
		
		return result;
	}
};

template <typename T> struct AndSpecification : Specification<T>
{
	Specification<T>& first;
	Specification<T>& second;
	AndSpecification(Specification<T>& first, Specification<T>& second) : first(first), second(second) {}

	bool is_satisfied(T* item) override
	{
		return first.is_satisfied(item) && second.is_satisfied(item);
	}
};

struct ColorSpecification : Specification<Product>
{
	Color color;

	ColorSpecification(Color color) : color(color) {}

	bool is_satisfied(Product* item) override
	{
		return item->color == color;
	}
};

struct SizeSpecification : Specification<Product>
{
	Size size;

	SizeSpecification(Size size) : size(size) {}

	bool is_satisfied(Product* item) override
	{
		return item->size == size;
	}
};
// SOLID_2 
// 개방 -폐쇄 원칙
// 기존의 코드를 변경하지 않고도 새로운 기능을 추가할 수 있어야함
// 기존 코드의 안정성과 재사용성을 유지하기 위함

int main()
{
	Product apple{ "Apple",Color::green,Size::small };
	Product tree{ "Tree",Color::green,Size::large };
	Product house{ "House",Color::blue,Size::large };

	vector<Product*> items{ &apple,&tree,&house };

	//ProductFilter pf;
	//auto green_things = pf.by_Color(items, Color::green);
	//for (auto& item : green_things)
	//{
	//	cout << item->name << " is green" << "\n";
	//}

	BetterFiler bf;
	ColorSpecification green(Color::green);

	for (auto& item : bf.filter(items, green))
	cout << item->name << " is green" << "\n";

	SizeSpecification large(Size::large);
	AndSpecification<Product> green_and_large(green, large);

	for (auto& item : bf.filter(items, green_and_large))
		cout << item->name << " is green and large" << "\n";

	return 0;
}