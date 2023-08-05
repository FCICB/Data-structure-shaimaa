#include <iostream>
using namespace std;
int partition(int arr[], int low, int high,int pivot)
{
    int PIndex = low;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[PIndex], arr[i]);
            PIndex++;
        }
    }
    PIndex--;

    return PIndex;
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];

     
        int PIndex = partition(arr, low, high, pivot);

        
        quickSort(arr, low, PIndex - 1);
        quickSort(arr, PIndex + 1, high);
    }
}

int main()
{
    int arr[] = { -1,9,0,66,2,44 };
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size-1);
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

