#include <iostream>
using  namespace std;

int main()
{
    int pairs = 0;
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            pairs++;
    }

    cout << "\nPaired numbers: " << pairs;

    int req;
    cout << "\nEnter required number";
    cin >> req;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == req)
        {
            cout << "Requied number index: " << i;
            return 0;
        }
    }

    cout << "There is no number with the same number as required";
}
