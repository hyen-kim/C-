#include <iostream>
#include "Circle.h" // Ŭ������ ����θ� ������
 
using namespace std;

// Ŭ������ ������
Circle::Circle() {  // Circle(); �ڵ�ȣ��
    radius = 1;     // int ��
    cout << "������ " << radius << "�� ����" << endl;
}
Circle::Circle(int r) { // Circle(30); �ڵ�ȣ��
    radius = r;
    cout << "������ " << radius << "�� ����" << endl;
}
double Circle::getArea() {
    return 3.14 * radius * radius;
}