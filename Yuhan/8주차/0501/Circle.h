// ������Ͽ��� �����

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();

    // �Լ��� ����  
    double getArea();
    int getRadius();
    void setRadius(int radius);
};

#endif // !CIRCLE_H

