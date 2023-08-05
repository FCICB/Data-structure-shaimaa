#include <iostream>
using namespace std;

void heapify(int arr[], int size, int node)
{
    int largest = node;
    int left = 2 * node + 1;
    int right = 2 * node + 2;
    if (left<size && arr[left]>arr[largest])
        largest = left;
    if (right<size && arr[right]>arr[largest])
        largest = right;
    if (largest != node) {
        swap(arr[node], arr[largest]);
        heapify(arr, size, largest);
    }
}
void heapSort(int arr[], int size)
{
    for (int i = size/ 2 - 1; i >= 0; i--)
        heapify(arr, size, i);
    for (int i = size - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }

}

int main()
{
    int arr[] = { 60 ,20 ,40 ,70, 30, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    cout << "After heapifying array is \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
    heapSort(arr, size);
    cout << "sorted array is \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

