#include <iostream>
using namespace std;

int main() {
	/*������ ������ �ִ°� ������ (������� a=12, b=13, c=5�϶� a�� b�� �ִ������� 1�̰�
	c�� 1�� ����������Ƿ� �� ���α׷��� 12x + 13y = 5 ��� ���� �����ظ� �����ٰ� ����Ѵ�.)
	�׳� �䱸���״�� ���α׷��� �ۼ��Ͽ����ϴ�.*/
	int aVal, bVal, cVal;
	cout << "a�� ���� ? : ";
	cin >> aVal;
	cout << "b�� ���� ? : ";
	cin >> bVal;
	cout << "c�� ���� ? : ";
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
		cout << "������ " << aVal << "x + " << bVal << "y = " << cVal << "�� �����ش� �ֽ��ϴ�.";
	else
		cout << "������ " << aVal << "x + " << bVal << "y = " << cVal << "�� �����ش� �����ϴ�.";
}