#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr;

    cout << "Enter the elements of array: ";

    int sum = 0; 

    for ( int i = 0; i < n; i++){
        int x; 
        cin >> x;
        arr.push_back(x);
        sum += arr[i];
    }

    // for ( int j : arr){
    //     cout << j;
    // }

    cout << sum; 
}