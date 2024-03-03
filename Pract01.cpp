#include <iostream>
#include <time.h>
using namespace std;

void Ex1(int N);
void Ex2(int N);
void Ex3();
void Ex4();
void Ex5();
void Ex6();

int main()
{
	int N = 1;
	int exN;

	cout << "Chose exercise(1-6): ";
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
	case 5:
		Ex5();
		break;
	case 6:
		Ex6();
		break;
	default:
		cout << "Invalid exercise number value";
		break;
	}
}

void Ex1(int N)
{
	int numbers[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		cin >> numbers[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (numbers[i] >= 1 && numbers[i] <= N)
			cout << numbers[i] << "\t";
	}
}

void Ex2(int N)
{
	int numbers[3];

	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		cin >> numbers[i];

		if (numbers[i] < min)
			min = numbers[i];

		if (numbers[i] > max)
			max = numbers[i];
	}

	if (N % 2 == 0)
		cout << "Min: " << min;
	else
		cout << "Max: " << max;
}

void Ex3()
{
	int n;
	float val = 1;
	float sum = 0;

	cout << "Enter n: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << val << endl;
		sum += val;
		val *= (-0.5);
	}
	cout << "Sum: " << sum;
}

void Ex4()
{
	int n;
	int d = 2;

	cout << "Enter n: ";
	cin >> n;

	if (n < 2)
		return;

	while (n % d != 0)
	{
		d++;
	}

	cout << d;
}

void Ex5()
{

	int N;

	cout << "Enter N: ";
	cin >> N;

	int* arr = new int[N];

	arr[0] = 0;
	arr[1] = 1;

	cout << arr[0] << "\n" << arr[1] << "\n";
	for (int i = 2; i < N; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		cout << arr[i] << "\n";
	}

	delete[] arr;
}

void Ex6()
{
	srand(time(0));

	int att;
	int dif;

	int num = rand() % 20 + 1;
	int guess;

	cout << "Guess number from 1 to 20!; \n\n";
	cout << "Choose difficulty:\n1 - 10 att;\n2 - 5 att;\n3 - 3 att;\n";
	cin >> dif;

	switch (dif)
	{
	case 1:
		att = 10;
		break;
	case 2:
		att = 5;
		break;
	case 3:
		att = 3;
		break;
	case 2007:
		att = 99;
		cout << "Godmod activated" << endl;
		break;
	default:
		cout << "Invalid difficulty";
		return;
	}
	
	for (int i = att; i >= 0; i--)
	{
		cout << "Enter number: ";
		cin >> guess;

		if (guess < num)
			cout << "Inputed number is smaller than generated";
		else if (guess > num)
			cout << "Inputed number is bigger than generated";

		if (guess == num)
		{
			cout << "Congratulation, you guessed number with " << att - i << " attemps";
			break;
		}

		if (i == 0)
		{
			cout << "\nYou lose, generated number is: " << num;
			break;
		}

		cout << ", try again\nattepms left: " << i << endl;
	}
}