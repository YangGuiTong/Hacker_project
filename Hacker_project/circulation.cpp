#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	string name;
	string password;
	int count = 2;

	while (1) {
		cout << "请输入账号：";
		cin >> name;
		cout << "请输入密码：";
		cin >> password;

		if (count == 0) {
			cout << "你的登陆机会已经用完！" << endl;
			system("pause");
			return -1;
		}
		if (name == "54hk" && password == "123456") {
			system("cls");
			break;
		} else {
			cout << "账号或者密码错误!请重新输入" << endl;
			cout << "你还剩些" << count << "次登陆机会" << endl;
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