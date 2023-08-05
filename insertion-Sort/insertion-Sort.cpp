

#include <iostream>
using namespace std;
void insertionSort(int arr[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j>=0&&arr[j]>key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;

        }
        arr[j + 1] = key;
    }
}
void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

int main()
{
    int arr[] = { 80,100,90,55,40,30 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "print array befor insertion sort \n";
    print(arr, size);
    insertionSort(arr, size);
    cout << "print array after insertion sort \n";
    print(arr, size);

}

