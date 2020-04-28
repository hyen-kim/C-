// ������� ( ����, +, /, *, - )
#include "Calculator.h"
#include "Adder.h"
#include "Divider.h"
#include "Multiplier.h"
#include "Subtracter.h"

void Calculator::run() {
	string str1, str2, proc;
	int i;
	double r_val;

	str1 = str2 = proc = "";	// ""���� �ʱ�ȭ
	i = 0;

	Adder adder(0, 0);
	Divider divider(0, 0);
	Multiplier multiplier(0, 0);
	Subtracter subtracter(0, 0);

	while (i != -999)
	{
		i = r_val = 0;
		
		cout << "������ �Է��ϼ���. (ex : 10 + 3, z : ����) >> ";
		getline(cin, str1);	// ���� �Է¹޾Ƽ� str1�� ����

		istringstream s_buf(str1);	// ���ڿ��� �����ؼ� s_buf�� �־���

		while (s_buf >> str2)
		{
			i++;

			if (str2 == "z" || str2 == "Z")	// z�� Z�� �Է����� �� ���α׷� ����
			{
				cout << "����� �����մϴ�." << "\n\n";
				i = -999;
				break;
			}

			if ((i % 2) == 0)	
			{		// ��ȣ�� ���������� �Է��Ͽ��� �� ( +, -, *, / )
				if (str2 == "+" or "-" or "*" or "/") {	
					proc = str2;
				}
				else // ��ȣ�� �߸��Ǿ��� ��
				{
					cout << "�߸��� ��ȣ�Դϴ�." << "\n\n";
					i = -1;
					break;
				}
			}
			else   
			{		// ��ȣ�� ���������� �Է����� �ʾ��� ��
				if (atof(str2.c_str()) == 0 && str2 != "0") { // ���ڸ� �Է��Ͽ��� ��
					cout << "���ڸ� �Է��� �ּ���." << "\n\n";
					i = -1;
					break;
				}
				if (proc == "/" && atof(str2.c_str()) == 0)	// ���������� 0�� �Է��Ͽ��� ��
				{
					cout << "�������� 0���� ���� �� �����ϴ�." << "\n\n";
				}
			}

			if (i == 1)	
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
	}
}