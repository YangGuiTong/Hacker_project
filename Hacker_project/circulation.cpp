#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	string name;
	string password;
	int count = 2;

	while (1) {
		cout << "�������˺ţ�";
		cin >> name;
		cout << "���������룺";
		cin >> password;

		if (count == 0) {
			cout << "��ĵ�½�����Ѿ����꣡" << endl;
			system("pause");
			return -1;
		}
		if (name == "54hk" && password == "123456") {
			system("cls");
			break;
		} else {
			cout << "�˺Ż����������!����������" << endl;
			cout << "�㻹ʣЩ" << count << "�ε�½����" << endl;
			count--;
			system("pause");
			system("cls");
		}
	}

	cout << "1.***" << endl;
	cout << "2.***" << endl;
	cout << "3.***" << endl;
	cout << "4.***" << endl;

	system("pause");
	return 0;
}