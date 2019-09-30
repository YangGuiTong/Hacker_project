#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main1(void) {
	string name;
	string password;

	cout << "ÇëÊäÈëÕËºÅ£º";
	cin >> name;
	cout << "ÇëÊäÈëÃÜÂë£º";
	cin >> password;

	if (name == "54hk" && password == "123456") {
		cout << "1.***" << endl;
		cout << "2.***" << endl;
		cout << "3.***" << endl;
		cout << "4.***" << endl;
	} else {
		cout << "ÕËºÅ»òÕßÃÜÂë´íÎó!" << endl;
	}

	system("pause");
	return 0;
}