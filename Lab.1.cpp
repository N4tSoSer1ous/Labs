#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

void PrintCommonElements(int* Array, int* Array1, int* Array2, const int n)
{
    int s = 0;
    cout << "The same elements: " << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (Array1[i] == Array2[j])
            {
                Array[s] = Array1[i];
                s++;
            }
    for (int i = 0; i < s; i++)
        cout << setw(10)<< setfill('*')  << Array[i];
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements in arrays:  " << endl;
    cout << "n=";
    cin >> n;
    int* Array1 = new int[n];
    int* Array2 = new int[n];
    int* Array = new int[n];
    cout << "Put elements of the first array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i + 1 << "]= ";
        cin >> Array1[i];
    }
    cout << "Put elements of the second array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "B[" << i + 1 << "]= ";
        cin >> Array2[i];
    }

    PrintCommonElements(Array, Array1, Array2, n);

    delete[] Array1;
    delete[] Array2;
    delete[] Array;
    system("pause");
}