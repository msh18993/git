#include <iostream>
using namespace std;

int main() {
	int array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 <<"번째 요소는?: ";
		cin >> array[i];
	}
	cout << array[4] << array[3] << array[2] << array[1] << array[0];
}