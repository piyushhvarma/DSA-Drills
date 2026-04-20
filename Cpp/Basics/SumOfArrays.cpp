#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<< "Input size : ";
    cin >> n;

    int arr[n];
    cout<< "input array : ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    
    for (int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout << sum;
    return sum;
}