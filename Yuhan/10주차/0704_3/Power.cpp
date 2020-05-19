#include "Power.h"
#include <iostream>
using namespace std;

Power::Power(int kick, int punch) {	// ���⼭�� �Ű����� ����Ʈ���� ����� ǥ���ϸ� �ȵ�
	this->kick = kick;
	this->punch = punch;
}

void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}

Power Power::operator+ (Power& op2) {	// + ������ �Լ� �ڵ�
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

Power Power::operator- (Power& op2) {	// + ������ �Լ� �ڵ�
	Power tmp;
	tmp.kick = this->kick - op2.kick;
	tmp.punch = this->punch - op2.punch;
	return tmp;
}
