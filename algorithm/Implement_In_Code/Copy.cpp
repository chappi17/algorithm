#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int width;

    // �⺻ ������
    Box() : length(0), width(0) {}

    // �Ű� ���� �޴� ������
    Box(int l, int w) : length(l), width(w) {}

    //���� ������
    Box(const Box& other) : length(other.length), width(other.width) {
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    Box box1(10, 20);  
    Box box2 = box1;   // ���� ������ ��� (�׷��� ���� ���� �Ⱥ��ϰ�, ���������� ���� ���е�. (���� ����)
    // ���� ���� �����ڸ� ���� ���� ������, �����Ϸ��� �׳� ���� ������ ����µ�, �̶� ���� ���簡 �Ͼ��, �̴� ���� ���� �޸� ��ġ�� ����Ű�� ������, �ѹ� �����ϸ� 
    // �ٸ����� �������°ų� �ٸ�����.

    cout << "Box1 dimensions: " << box1.length << " x " << box1.width << endl;
    cout << "Box2 dimensions: " << box2.length << " x " << box2.width << endl;

    return 0;
}
