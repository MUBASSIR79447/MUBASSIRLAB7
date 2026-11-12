
#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[5];

    cout << "Enter 5 integers:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray Elements:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    arr = NULL;

    cout << "\n\nMemory released successfully.";

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}

