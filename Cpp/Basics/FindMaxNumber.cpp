#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    

    int max = arr[0];

    for(int i = 0; i < n; i++){
        if (arr[0] <= arr[i]){
            max = arr[i] ;
        }
    }

    cout << "The largest element in this array is: " << max;
}