#include <iostream>
using namespace std;

int main() {
	int array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 <<"��° ��Ҵ�?: ";
		cin >> array[i];
	}
	cout << array[4] << array[3] << array[2] << array[1] << array[0];
}