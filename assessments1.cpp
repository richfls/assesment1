#include<iostream>
using namespace std;

int main() {
	srand(time(NULL));
	int big = 0;
	int small = 0;
	float avg = 0;
	float range = 0;
	//mild
	for (int i = 50; i <= 70; i += 2)
		cout << i << " ";
	cout << endl;

	for (int i = 100; i >= 50; i -= 5)
		cout << i << " ";
	cout << endl;

	for (int i = 2; i <= 2048; i *= 2)
		cout << i << " ";
	cout << endl;

	//medium
	for (int i = 0; i < 10; i += 1) {
		for (int j = 0; j < 6; j += 1) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i += 1) {
		for (int j = 1; j <= 4; j += 1) {
			cout << j;
			
		}
		cout <<endl;
	}
	cout << endl;
	//spicy
	float arr[8] = { rand() % 20,rand() % 20,rand() % 20,rand() % 20,rand() % 20,rand() % 20,rand() % 20,rand() % 20 };
	for (int f = 0; f <= 7; f++) {
		for (int k = 0; k <= 7; k++) {
			if (arr[k] > arr[f]) {
				big = arr[k];
			}
			if (arr[k] < arr[f]) {
				small = arr[k];
			}
		}
	}
	range = big - small;
	for (int i = 0; i <= 7; i++)
		avg = avg + arr[i];
	avg = avg / 8;
	for (int i = 0; i <= 7; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout <<"the biggest number is " << big << endl;
	cout << "the smallest number is " << small << endl;
	cout << "the range is is " << range << endl;
	cout << "the average is " << avg << endl;


}
