#include <bits/stdc++.h>
using namespace std;

bool temp;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        temp = false;
        for (j = 0; j < n - i -1 ; j++) {
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                temp = true;
            }
        }
        if (temp == false) break;
    }

}


void printArray(int arr[], int N)
{
    int i;
    for (i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = { 2,8,5,3,9,4,1};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
