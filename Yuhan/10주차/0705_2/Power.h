#ifndef POWER_H
#define POWER_H

class Power {	// �������� ǥ���ϴ� �Ŀ� Ŭ����
	int kick;	// �߷� ������
	int punch;	// �ָ����� ġ�� ��
public:
	Power(int kick = 0, int punch = 0);
	void show();
	friend Power operator+ (Power op1, Power op2);	// ������ ����
};

#endif // !POWER_H