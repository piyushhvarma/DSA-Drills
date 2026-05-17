#include<bits/stdc++.h>
using namespace std;

int getProduct(vector<int> &arr){
    int product = 1;

    for(int i = 0; i < arr.size(); i++){
        product *= arr[i];
    }

    return product;
}

int main(){
    int n;
    cout << "Enter the size of array - ";
    cin >> n;

    vector<int> arr;

    cout << "Enter array elements - ";

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int answer = getProduct(arr);
    
    cout << answer;
}