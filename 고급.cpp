#include <iostream>
using namespace std;

int main() {
	/*문제에 오류가 있는것 같지만 (예를들면 a=12, b=13, c=5일때 a와 b의 최대공약수는 1이고
	c는 1로 나누어떨어지므로 이 프로그램은 12x + 13y = 5 라는 식이 정수해를 가진다고 출력한다.)
	그냥 요구사항대로 프로그램을 작성하였습니다.*/
	int aVal, bVal, cVal;
	cout << "a의 값은 ? : ";
	cin >> aVal;
	cout << "b의 값은 ? : ";
	cin >> bVal;
	cout << "c의 값은 ? : ";
	cin >> cVal;
	int gcd;
	int count = aVal;
	while (true) {
		if (aVal % count == 0) {
			if (bVal % count == 0) {
				gcd = count;
				break;
			}
		}
		count = count - 1;
	}
	if (cVal % gcd == 0)
		cout << "방정식 " << aVal << "x + " << bVal << "y = " << cVal << "의 정수해는 있습니다.";
	else
		cout << "방정식 " << aVal << "x + " << bVal << "y = " << cVal << "의 정수해는 없습니다.";
}