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
