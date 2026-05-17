#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cout << "size- ";
    cin >> n;

    if(n==0) cout << "invalid size";

    int arr[n];
    cout << "elements- ";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool ans = isSorted(arr,n);

    if (ans) cout << "True" << endl;
    else cout << "False" << endl; 

    return 0;
}