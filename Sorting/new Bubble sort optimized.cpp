#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
   
    bubblesort(arr, 5);
   
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
