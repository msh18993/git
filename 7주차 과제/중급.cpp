#include<iostream>
using namespace std;

void ChangeDouble(int* p);

int main() {
	int num;
	double a;
	cout << "���ڸ� �Է��ϼ���. :";
	cin >> a;
	while (true) {
		if (a - (int)a != 0) {
			cout << "������ �Է��ϼ���. :";
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