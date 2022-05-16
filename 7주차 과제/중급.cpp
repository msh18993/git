#include<iostream>
using namespace std;

void ChangeDouble(int* p);

int main() {
	int num;
	double a;
	cout << "숫자를 입력하세요. :";
	cin >> a;
	while (true) {
		if (a - (int)a != 0) {
			cout << "정수를 입력하세요. :";
			cin >> a;
		}
		else
			break;
	}
	num = a;
	int* ptr = &num;
	ChangeDouble(ptr);
	cout << num;
}
void ChangeDouble(int* p) {
	*p = *p * 2;
}