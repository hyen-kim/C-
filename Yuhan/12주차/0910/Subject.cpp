#include <iostream>
using namespace std;
#include "Subject.h"

void Subject::subjectwname() {
	cout << "< SubjectName >" << endl;
}

Subject::Subject() {		// ������
	next = NULL;
}

Subject::~Subject() {		// �Ҹ���
}

void Subject::paint() {		// ���
	subjectwname();
}

Subject* Subject::add(Subject* p) {
	this->next = p;
	return p;
}

Subject* Subject::getNext() {		// ���� ���� ����Ű�� �κ�
	return next;
}