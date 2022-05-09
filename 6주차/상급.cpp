#include <iostream>
using namespace std;

int to_binary(int n);

int main() {
	cout << "자연수 N의 값은?: ";
	int a, b;
	cin >> a;
	b = to_binary(a);
	cout << a << "은/는 " << b << "자리 이진수입니다.";
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