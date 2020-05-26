#ifndef COLORPOINT_H
#define COLORPOINT_H

#include <string>
using namespace std;
#include "Point.h"  // ��� �޾ұ� ������ �ҽ��� �ʿ�

class ColorPoint : public Point {   // �θ��� ��� �Լ����� ���� ���� 
    // ��������� private�� ����
    // ����Լ������� ���� ����
    string color;
public: 
    void setColor(string color);
    void showColorPoint();
};

#endif // !COLORPOINT_H
