#include<iostream>
using namespace std;

int main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int arrv2[6] = { 1,2,3,4,5,6 };
	int* ptr1 = &arr[0];
	int* ptr2 = &arrv2[5];
	for (int i = 0; i <= 5; i++) {
		*(ptr1 + i) = *(ptr2 - i);
	}
}