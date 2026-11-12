
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;

    *ptr = 50;

    cout << "Value: " << *ptr << endl;
    cout << "Memory Address: " << ptr << endl;

    delete ptr;
    ptr = NULL;

    cout << "\nMemory released successfully.";

    cout << "\n\nPress Enter to exit...";
    cin.get();

    return 0;
}

