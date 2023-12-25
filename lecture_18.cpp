#include <iostream>
using namespace std;
// In this function, it will sort the element one-by-one with Rounds:
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
// Printing array after sorted:
int printingArray(int arr[], int size)
{
    cout << "Printing the array after sorted " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value of index " << i << " is: ";
        cout << arr[i] << endl;
    }
}
int main()
{
    // Insertion Sort:
    int size1;
    cout << "Enter the size of an array: ";
    cin >> size1;
    cout << "Printing the array before sorted " << endl;
    // Creating an array:
    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr1[i];
    }
    // Calling functions:
    insertionSort(arr1, size1);
    printingArray(arr1, size1);
}