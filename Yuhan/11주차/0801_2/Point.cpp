#include "Point.h"
#include <iostream>
using namespace std;


// ��������� private�̹Ƿ� ����Լ������� ���� ����
void Point::set(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::showPoint() {
    cout << "(" << x << "," << y << ")" << endl;
}



