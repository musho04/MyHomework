#include <iostream>
using namespace std;
#define MAX 400

int multiply(int q, int res[], int size)
{
	int carry = 0;

	for (int i =0; i < size; i++){
		int prod = res[i] * q + carry;
		res[i] = prod % 10;
		carry = prod / 10;
	}

	while (carry){
		res[size] = carry % 10;
		carry = carry / 10;
		size++;
	}
	return size;
}

void factorial(int n) {
	int res[MAX];
	
	res[0] = 1;
	int size = 1;

	for(int i = 2; i <= n; i++){
		size = multiply(i, res, size);
	}

	for(int j = size - 1; j >= 0; j--){
		cout << res[j];
	}
}



int main () {
	int num;
	cout << "Enter number: " << endl;
	cin >> num;
	factorial(num);

	return 0;
}
