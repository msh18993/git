#include <iostream>
using namespace std;

int main() {

	int user_floor;
	cout << "¸îÃþ? :";
	cin >> user_floor;
	int floor = 1;
	while (floor <= user_floor)
	{
		for (int i = 0; i < user_floor - floor; i++) {
			cout << " ";
		}
		for (int j = 0; j < floor * 2 - 1; j++) {
			cout << "*";
		}
		for (int i = 0; i < user_floor - floor; i++) {
			cout << " ";
		}
		cout << "\n";
		floor = floor + 1;
	}
		



}