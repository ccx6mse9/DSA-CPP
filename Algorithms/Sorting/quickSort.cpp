// implementation of quick sort

#include <iostream>
using namespace std;

void quicksort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int first = low;
    int last = high;
    int mid = (first + last) / 2;
    int pivot = arr[mid];

    while (first <= last)
    {
        while (pivot > arr[first])
        {
            first++;
        }
        while (pivot < arr[last])
        {
            last--;
        }

        if (first <= last)
        {
            // swap
            int temp = arr[first];
            arr[first] = arr[last];
        }
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 9, 23, 56, 3, 7, 1, 78};
    int len = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, len);

    return 0;
}
