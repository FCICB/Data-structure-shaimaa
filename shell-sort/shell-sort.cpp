#include <iostream>
using namespace std;
void shellSort(int arr[], int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i++)
        {
            int temp = arr[i];
            int j;
            for ( j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
             arr[j]=temp;
        }
    }
}
int main()
{
    int arr[] = { 45,23,53,43,18,24,8,95,101 }, i;
     
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array to be sorted: \n";
    for (int i = 0; i <size; i++)
        cout << arr[i] << " ";

    shellSort(arr,size);

    cout << "\nArray after shell sort: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

}

