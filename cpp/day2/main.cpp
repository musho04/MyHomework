#include <iostream>

#define N 3

//rorare matrix
void rotate(int a[N][N])
{
	for (int i = 0; i < N / 2; i++) {
		for (int j = i; j < N - i - 1; j++) {
			// Swap elements
			int temp = a[i][j];
			a[i][j] = a[N - 1 - j][i];
			a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
			a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
			a[j][N - 1 - i] = temp;
		}
	}
}

// print matrix
void Matrix(int arr[N][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			std::cout << arr[i][j] << " ";
		std::cout << '\n';
	}
}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std:: cin >> n;
	int arr[N][N] = { { 1, 2, 3 },
					{ 4, 5, 6 },
					{ 7, 8, 9 } };
    for (int i = 0; i < n; i++){
        rotate(arr);
    }
	Matrix(arr);
	return 0;
}

