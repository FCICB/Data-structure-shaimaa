#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right)
{
    int leftSize = mid - left + 1;
    int rightSize = right - mid ;
    int* leftArray = new int[leftSize], * rightArray = new int[rightSize];
    for (int i = 0; i < leftSize; i++)
        leftArray[i] = arr[left + i];
    for (auto j = 0; j < rightSize; j++)
        rightArray[j] = arr[mid + 1 + j];
    int indexOfLeftArray = 0, indexOfRightArray = 0, indexOfMeregeArray = left;
    while (indexOfLeftArray<leftSize &&indexOfRightArray<rightSize)
    {
        if (leftArray[indexOfLeftArray] <= rightArray[indexOfRightArray])
        {
            arr[indexOfMeregeArray] = leftArray[indexOfLeftArray];
            indexOfLeftArray++;

        }
        else
        {
            arr[indexOfMeregeArray] = rightArray[indexOfRightArray];
            indexOfRightArray++;
        }
        indexOfMeregeArray++;
    }
    while (indexOfLeftArray < leftSize)
    {
        arr[indexOfMeregeArray] = leftArray[indexOfLeftArray];
        indexOfLeftArray++;
        indexOfMeregeArray++;
    }
    while (indexOfRightArray < rightSize)
    {
        arr[indexOfMeregeArray] = rightArray[indexOfRightArray];
        indexOfRightArray++;
        indexOfMeregeArray++;
    }
    delete[] leftArray;
    delete[]rightArray;
}
void mergeSort(int arr[], int begin, int end)
{
    if(begin >= end)
        return;

    int mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}
int main()
{
    int arr[] = { 100,9,-5,-1,33,0,80 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "print array before sorted \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
    cout << "print array after sorted \n";
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;

}

