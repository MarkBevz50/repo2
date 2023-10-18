#include <iostream>
using namespace std;

int main()                       //розмір n*n      // елементи діагоналі n(n+1)
{
	int p = 0;
	int n;
	cout << "Enter size of a matrix \n";
	cin >> n;

	double** Matrix = new double* [n];
	for (int i = 0; i < n; ++i)
		Matrix[i] = new double[n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == j) {
				Matrix[i][j] = (i+1) * (j + 2);
			}
			else {
				Matrix[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			(Matrix[i][j] >= 10) ? cout << Matrix[i][j] << "  " : cout << Matrix[i][j] << "   ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; ++i) {
		delete[] Matrix[i];
	}
	delete[] Matrix;

}

