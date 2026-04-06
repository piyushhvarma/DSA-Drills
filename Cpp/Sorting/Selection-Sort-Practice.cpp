#include<bits/stdc++.h>
using namespace std;

// 1. we will need 2 loops, 1st i loop will traverse the array to n-1 and will consider the initial position "mini" as the minimum value
// 2. the second loop will iterate the array and will find out if there is any number smaller than the mini, if there exists a number we swap it using temp
// 3. swap the numbers arr[j], arr[mini], arr[i]
// write int main function

void selection_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int mini = i;

        for ( int j = i+1; j < n; j++){
            if (arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted array after applying selection sort is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {10,11,212,1,0,1,1,3,4,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before selection sort the array is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    selection_sort(arr,n);
    return 0;
}