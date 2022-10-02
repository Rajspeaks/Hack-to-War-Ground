//Ayush Tiwari
#include<bits/stdc++.h>
using namespace std;

/* 
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part. 
Values from the unsorted part are picked and placed at the correct position in the sorted part.
*/

// To sort an array of size n in ascending order: 
void insertionSort(int arr[], int size){

    // 1: Iterate from arr[1] to arr[n] over the array.
    for(int i=1;i<size;i++){
        // 2: Compare the current element (key) to its predecessor.
        int key = arr[i];
        int j = i-1;
        // 3: If the key element is smaller than its predecessor, compare it to the elements before. 
        // Move the greater elements one position up to make space for the swapped element.
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        //4: finally insert element in it's right position
        arr[j+1] = key;
    }
}

int main(){
    int array[] = {2, 5, 1, 20, 21, 15, 19}; //Taken any array 
    int n = sizeof(array)/sizeof(array[0]);  //calculate the size of array
    insertionSort(array, n);                 //call insertion sort function
    for(int i=0;i<n;i++){                    //display sorted array
        cout<<array[i]<<" ";
    }
    return 0;
}

/*OUTPUT*/
/* 1 2 5 15 19 20 21 */
