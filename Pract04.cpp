#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));

    int N;

    int prev = 0;

    cout << "Enter array size: ";
    cin >> N;

    int* Arr = new int[N];

    cout << "Array: ";
    for (int i = 0; i < N; i++)
    {
        Arr[i] = rand() % 100 + prev;
        prev = Arr[i];

        cout << Arr[i] << "\n";
    }

    int req;

    cout << "\n\nEnter required number: ";
    cin >> req;

    int min = 0;
    int max = N - 1;

    while (min <= max)
    {
        int med = min + (max - 1) / 2;

        if (Arr[med] == req)
        {
            cout << "Required index: " << med << "\nRequired Number: " << Arr[med];
            delete[] Arr;
            return 0;
        }
        else if (Arr[med] < req)
        {
            min = med + 1;
        }
        else if (Arr[med] > req)
            max = med - 1;
    }

    cout << "There is no required number :(";

    delete[] Arr;
}