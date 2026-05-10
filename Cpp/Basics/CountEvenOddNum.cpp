#include<bits/stdc++.h>
using namespace std;

int findEven(vector<int> &arr){

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] % 2 == 0){
            cout << "Even numbers are : " << arr[i] << " ";
        } 
        else {
            cout << "Odd numbers are : " << arr[i] << " ";
        }
    }

    
}


int main(){
    int n;
    cout << "Enter the size of array ; ";
    cin >> n;

    vector<int> arr;

    cout << "Enter array elements - ";

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    findEven(arr);
    return 0;
}