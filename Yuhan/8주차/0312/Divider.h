#ifndef DIVIDER_H
#define DIVIDER_H

class Divider {	// ������ ��� Ŭ����
	double op1, op2;
public:
	Divider();
	Divider(double a, double b);
	void set(double a, double b);
	double process();
};

#endif 
