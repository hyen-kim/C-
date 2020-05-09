// cpp������ ������

#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() {
    radius = 1;
    cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
    this->radius = radius;
    cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
    cout << "�Ҹ��� ���� radius = " << radius << endl;
}

// �Ϲ� ��� �Լ�
double Circle::getArea() {
    return 3.14 * radius * radius;
}
int Circle::getRadius() {
    return radius;
}
void Circle::setRadius(int radius) {
    this->radius = radius;
}
