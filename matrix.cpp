#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int A[6][5];
	int k, m, n;
	k = 5;
	m = 6;

	cout << "Lectura de matriz " << endl;
	cout << endl;
	int fs;
	for (int i = 0; i < k; ++i) {
		for (int j = 0; j < m; ++j)
		{
			cout << "Ingrese valor para A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}
	cout << "-------Matriz Impresa:----------\n";
	for (int i = 0; i < k; ++i)
	{
		fs = 0;
		for (int j = 0; j < m; ++j)
		{
			cout << A[i][j] << " ";
			
		}
		
		cout << endl;

	}
	cout << "-------Sumatoria de Filas:----------\n";
	for (int i = 0; i < k; ++i)
	{
		fs = 0;
		for (int j = 0; j < m; ++j)
		{
			
			fs = fs + A[i][j];
		}
		cout << "Fila " << i << ": " << fs;
		cout << endl;

	}
	cout << "-------Sumatoria de columnas:----------\n";
	for (int i = 0; i < m; ++i)
	{
		fs = 0;
		for (int j = 0; j < k; ++j)
		{
			
			fs = fs + A[j][i];
		}
		cout << "columna " << i << ": " << fs;
		cout << " | ";

	}
	cout << endl;
	system("pause");
	return 0;
}