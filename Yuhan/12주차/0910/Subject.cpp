#include <iostream>
using namespace std;
#include "Subject.h"

Subject::Subject() {		
	next = NULL;
}

Subject::~Subject() {		// ���� �Ҹ���
	
}

void Subject::paint() {		// ���
	subjectwname();			// ���������Լ� ȣ��
}

Subject* Subject::add(Subject* p) {
	this->next = p;
	return p;
}

Subject* Subject::getNext() {		// ���� ���� ����Ű�� �κ�
	return next;
}