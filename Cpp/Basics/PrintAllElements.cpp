#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    int arr[n];
    cout<<"Enter the array elements : ";
    for (int i = 0; i<n ; i++){
        cin >> arr[i];
    }


    cout << "these are the inputted elements: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
return 0;
}