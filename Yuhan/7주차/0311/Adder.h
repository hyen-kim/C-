#ifndef ADDER_H
#define ADDER_H

class Adder {	// ���� ��� Ŭ����
	double op1, op2;
public:
	Adder();
	Adder(double a, double b);
	void set(double a, double b);
	double process();
};

#endif 
