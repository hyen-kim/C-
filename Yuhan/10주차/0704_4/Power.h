#ifndef POWER_H
#define POWER_H

class Power {	// �������� ǥ���ϴ� �Ŀ� Ŭ����
	int kick;	// �߷� ������
	int punch;	// �ָ����� ġ�� ��
public:
	Power(int kick = 0, int punch = 0);
	void show();
	Power operator+ (Power& op2);
	Power operator- (Power& op2);
	bool operator== (Power& op2);
};


#endif // !POWER_H