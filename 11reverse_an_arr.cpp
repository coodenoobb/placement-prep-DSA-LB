#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {10, 20, 5, -9, 60, 2};
    int brr[5] = {3, 5, 80, 90, -6};

    printArray(arr, 6);

    printArray(brr, 5);

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}