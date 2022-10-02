#include <bits/stdc++.h>
using namespace std;
 
void merge(int arr1[], int arr2[], int n, int m)
{
    // two pointer to iterate
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        // if arr1[i] <= arr2[j] then both array is already
        // sorted
        if (arr1[i] <= arr2[j]) {
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            // if arr1[i]>arr2[j] then first we swap both
            // element so that arr1[i] become smaller means
            // arr1[] become sorted then we check that
            // arr2[j] is smaller then all other element in
            // right side of arr2[j] if arr2[] is not sorted
            // then we linearly do sorting
            // means while adjecent element are less than
            // new arr2[j] we do sorting like by chnaging
            // position of element by shifting one position
            // toward left
            swap(arr1[i], arr2[j]);
            i++;
            if (j < m - 1 && arr2[j + 1] < arr2[j]) {
                int temp = arr2[j];
                int tempj = j + 1;
                while (arr2[tempj] < temp && tempj < m) {
                    arr2[tempj - 1] = arr2[tempj];
                    tempj++;
                }
                arr2[tempj - 1] = temp;
            }
        }
    }
}
 
int main()
{
 
    int ar1[] = { 1, 5, 9, 10, 15, 20 };
    int ar2[] = { 2, 3, 8, 13 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge(ar1, ar2, m, n);
 
    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}


// Output
// After Merging 
// First Array: 1 2 3 5 8 9 
// Second Array: 10 13 15 20


// Program by Nayan Vishwakarma: @nayan1xyz 
