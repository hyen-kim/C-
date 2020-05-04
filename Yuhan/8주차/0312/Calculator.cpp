// ������� ( ����, +, /, *, - )
#include "Calculator.h"
#include "Adder.h"
#include "Divider.h"
#include "Multiplier.h"
#include "Subtracter.h"

void Calculator::run() {
	string str1, str2, proc;
	// str1 : �� ��ü�� �Է¹޴� ����
	// str2 : ���� �ϳ��ϳ� �ְ� ���ϴ� ����
	// proc : �����ȣ�� ��� ����

	str1 = str2 = proc = "";
	int i = 0;
	// i : �ݺ����� ������ ����
	double r_val;

	// Ŭ������ �⺻ �����ڰ� 0���� �ʱ�ȭ�� ���ֱ� ������ ���� �ʾƵ� ������ ��
	Adder adder(0, 0);
	Divider divider(0, 0);
	Multiplier multiplier(0, 0);
	Subtracter subtracter(0, 0);

	while (i != -999)
	{
		i = r_val = 0;

		cout << "==========================================================\n";
		cout << "������ �Է��ϼ���. (ex : 10 + 3, z : ����) >> ";
		getline(cin, str1);	// ���� �Է¹޾Ƽ� str1�� ����

		istringstream s_buf(str1);	// �ʿ��� ���� ����

		while (s_buf >> str2)		//s_buf�� ���� str2�� �ϳ��� ����
		{
			i++;	// �� ���ǹ��� i = 1�� ����ؾ��ϹǷ� i�� 1����

			if (str2 == "z" || str2 == "Z")	// z�� Z�� �Է����� �� ���α׷� ����
			{
				cout << "����� �����մϴ�." << "\n\n";
				i = -999;	// ����  while���� i�� -999�� �Ǹ� ����Ǳ� ������ i�� -999�� �ٲ�
				break;
			}

			if ((i % 2) == 0)		// i�� ���� 2�� ������ �� 0�϶� 
			{						// i�� ¦���� �� ��ȣ Ȧ���϶��� �����̹Ƿ�
				if (str2 == "+" || str2 == "-" || str2 == "*" || str2 == "/") {
					proc = str2;	// proc�� ��ȣ�� �־��ش�.
				}
				else				// ���� if���� ��ȣ�� ���� �� (��ȣ�� �߸��Ǿ��� ��)
				{
					cout << "�߸��� ��ȣ�Դϴ�." << "\n\n";
					i = -1;			// �߸��� ��ȣ �̹Ƿ� ����� ���ϹǷ� ��� ����� ������� ����
					break;
				}
			}
			else				// i�� Ȧ���� �� ( ������ �� )
			{					// ��ȣ�� ���������� �Է����� �ʾ��� ��
				if (atof(str2.c_str()) == 0 && str2 != "0") { // ���ڸ� �Է��Ͽ��� �� : atof : ���ڿ��� double�� ������ �ٲ�
					cout << "���ڸ� �Է��� �ּ���." << "\n\n";
					i = -1;		// ���ڰ� �ԷµǾ� ����� ���ϹǷ� ��� ����� ������� ����
					break;
				}
				if (proc == "/" && atof(str2.c_str()) == 0)	// ���������� 0�� �Է��Ͽ��� ��
				{
					cout << "�������� 0���� ���� �� �����ϴ�." << "\n\n";
					i = -1;		// 0���� ������ ����� ���ϹǷ� ��� ����� ������� ����
					break;
				}
			}

			if (i == 1)		// ����ϴ°� �Ǽ����̹Ƿ� �Ǽ������� ��ȯ�ϴ� �κ�
			{
				r_val = stof(str2);
			}
			else
			{
				if ((i % 2) != 0)
				{
					if (proc == "+")		// �������� 
					{
						adder.set(r_val, stof(str2));
						r_val = adder.process();
					}
					else if (proc == "/") 	// ������ ����
					{
						divider.set(r_val, stof(str2));
						r_val = divider.process();
					}
					else if (proc == "*")	// ���� ����
					{
						multiplier.set(r_val, stof(str2));
						r_val = multiplier.process();
					}
					else if (proc == "-")	// ��������
					{
						subtracter.set(r_val, stof(str2));
						r_val = subtracter.process();
					}
				}
			}
		}

		if (i > 0)	// ����� ���
		{
			cout << str1 << " = " << r_val << "\n\n";
		}

		cout << "==========================================================\n";
		system("pause");	 // ������������ ��� ����� Ȯ���ϰ� �ϱ� ����
		system("cls");		// �ý��� ȭ�� ������
	}
}