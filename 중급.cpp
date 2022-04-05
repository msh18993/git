#include <iostream>
using namespace std;

int main() {
	char a;
	cout << "대문자를 입려해 주세요 :";
	cin >> a;
	int b = a + 32;
	char c = b;
	cout << "대문자" << a << "의 소문자는" << c << "입니다.";
	return 0;
}