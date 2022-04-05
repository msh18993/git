#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "첫번째 숫자를 입력하세요 : ";
	cin >> a;
	cout << "두번째 숫자를 입력하세요 : ";
	cin >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / b << endl;
	cout << a << "%" << b << "=" << a % b << endl;
	return 0;
}