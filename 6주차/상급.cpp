#include <iostream>
using namespace std;

int to_binary(int n);

int main() {
	cout << "�ڿ��� N�� ����?: ";
	int a, b;
	cin >> a;
	b = to_binary(a);
	cout << a << "��/�� " << b << "�ڸ� �������Դϴ�.";
}

int to_binary(int n) {
	int digits = 1;
	int result = n;
	while (result > 1)
	{
		result = result / 2;
		digits = digits + 1;
	}
	return digits;
}