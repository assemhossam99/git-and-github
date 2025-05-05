#include<iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}

int multiply(int a, int b){
	return a * b;
}

int subtract(int a, int b) {
	return a - b;
}

int divide(int a, int b) {
	if (b == 0) {
		cout << "Invalid division" << endl;
		return 0;
	}
	return a / b;
}

int main() {
	cout << add(2, 4) << endl;
	cout << add(5, 2) << endl;
	return 0;
}
