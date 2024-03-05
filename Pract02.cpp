#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

void Ex1(int N);
void Ex2(int N);
void Ex3();
void Ex4();


int main()
{
	int N = 1;
	int exN;

	cout << "Chose exercise(1-4): ";
	cin >> exN;

	switch (exN)
	{
	case 1:
		Ex1(N);
		break;
	case 2:
		Ex2(N);
		break;
	case 3:
		Ex3();
		break;
	case 4:
		Ex4();
		break;
	default:
		cout << "Invalid exercise number value";
		break;
	}
}

void Ex1(int N)
{
	srand(time(0));

	int Size = 10 + N;
	int Size2 = 0;

	int* X = new int[Size];

	int M = rand() % 51;
	cout << "M: " << M << endl;

	cout << "First array:\n";
	for (int i = 0; i < Size; i++)
	{
		X[i] = rand() % 101 - 50;
		cout << X[i] << "\n";

		if(abs(X[i]) > M)
			Size2++;
	}

	int* Y = new int[Size2];

	cout << "\nSecond array:\n";

	for (int i = 0; i < Size; i++)
	{
		int j = 0;

		if (abs(X[i]) > M)
		{
			Y[j] = X[i];
			cout << Y[j] << "\n";
			j++;
		}
	}
}

void Ex2(int N)
{
	srand(time(0));

	int Size = 10 + N;

	int* X = new int[Size];

	cout << "First array:\n";
	for (int i = 0; i < Size; i++)
	{
		X[i] = rand() % 101 - 50;
		cout << X[i] << "\n";
	}

	cout << "\nRedacted array:\n";

	for (int i = 0; i < Size; i++)
	{
		X[i] = abs(X[i]);
		cout << X[i] << "\n";
	}
}

void Ex3()
{
	int const bills = 10;
	int money;

	int billsDenom[bills] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int billsCount[bills] = {};

	cout << "Enter how much money you want to take: ";
	cin >> money;

	int k = 0;

	while (money > 0)
	{
		if (money >= billsDenom[k])
		{
			billsCount[k]++;
			money -= billsDenom[k];
		}
		else
			k++;
	}

	for (int i = 0; i < bills; i++)
	{
		if(billsCount[i] > 0)
			cout << billsDenom[i] << " bills:\t" << billsCount[i] << endl;
	}
}
void Ex4()
{
	srand(time(0));

	int const Size = 5;
	int buf;

	int A[Size];
	int B[Size];

	int AB[Size * 2];

	cout << "Array A:\n";
	for (int i = 0; i < Size; i++)
	{
		A[i] = rand() % 101;
		AB[i] = A[i];
		cout << A[i] << endl;
	}

	cout << "\nArray B:\n";
	for (int i = 0; i < Size; i++)
	{
		B[i] = rand() % 101;
		AB[i + Size] = B[i];
		cout << B[i] << endl;
	}

	for (int i = 0; i < (Size * 2) - 1; i++)
	{
		if (AB[i] > AB[i + 1])
		{
			buf = AB[i + 1];
			AB[i + 1] = AB[i];
			AB[i] = buf;

			i = -1;
		}
	}

	cout << "\nArray AB:\n";
	for (int i = 0; i < Size * 2; i++)
	{
		cout << AB[i] << endl;
	}
}