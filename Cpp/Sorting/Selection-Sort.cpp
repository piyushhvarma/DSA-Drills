#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    // 1. traverse through the array and assume arr[0] as the minimum number
    
    for (int i = 0; i < n-1; i++){ // i < n-1 since array indexing
        int mini = i;

        for (int j = i+1; j < n; j++){ // j will traverse from the 1st index therefore, i+1
            if ( arr[j] < arr[mini]){
                mini = j; 
            }
        }

        // 3. now swap the values 

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    cout << "after selection sort :" << endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {12,19,1,8,2,9,2,10,3}; // initialize array
    int n = sizeof(arr)/sizeof(arr[0]); //declare n

    selection_sort(arr,n);

    return 0;
    
}