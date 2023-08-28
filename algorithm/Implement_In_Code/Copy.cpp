#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int width;

    // 기본 생성자
    Box() : length(0), width(0) {}

    // 매개 변수 받는 생성자
    Box(int l, int w) : length(l), width(w) {}

    //복사 생성자
    Box(const Box& other) : length(other.length), width(other.width) {
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    Box box1(10, 20);  
    Box box2 = box1;   // 복사 생성자 사용 (그래서 원본 값이 안변하고, 복사했지만 둘이 구분됨. (깊은 복사)
    // 만약 복사 생성자를 정의 하지 않으면, 컴파일러가 그냥 복사 생성자 만드는데, 이때 얕은 복사가 일어나고, 이는 둘이 같은 메모리 위치를 가리키기 때문에, 한번 삭제하면 
    // 다른값도 없어지는거나 다름없다.

    cout << "Box1 dimensions: " << box1.length << " x " << box1.width << endl;
    cout << "Box2 dimensions: " << box2.length << " x " << box2.width << endl;

    return 0;
}
