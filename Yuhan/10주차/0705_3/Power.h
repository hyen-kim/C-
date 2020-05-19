#ifndef POWER_H
#define POWER_H

class Power {
	int kick;
	int punch;

public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	friend Power& operator++ (Power& op);	// ���� ++ ������ �Լ� ������ ����
	friend Power operator++ (Power& op, int x);	// ���� ++ ������ �Լ� ������ ����
};

#endif // !POWER_H
