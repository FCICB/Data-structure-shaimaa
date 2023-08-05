

#include <iostream>

using namespace std;
void selectionSort(int arr[], int lenght)
{
    int indexMin;
    for (int i = 0; i < lenght - 1; i++)
    {
        indexMin = i;
        for (int j = i + 1; j < lenght; j++)
        {
            if (arr[j] < arr[indexMin])
                indexMin = j;

        }
        swap(arr[indexMin], arr[i]);
    }
    cout << "Array after sorting:" << endl;

    for (int i = 0; i <= lenght - 1; i++) {
        
        cout << arr[i] << "\t";
    }
}

int main()
{
    int arr[] = { 55,48,3,77,9 };
    int lenght = 5;
    for (int i = 0; i < lenght; i++)
        cout << arr[i] << "\t";
    cout << endl;
    selectionSort(arr, lenght);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
