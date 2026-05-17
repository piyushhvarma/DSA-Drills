#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr){
    sort(arr.begin(), arr.end());

    return (arr[arr.size() - 2]);
}

int main(){
    int n;
    cout << "size- ";
    cin>> n;

    vector<int> arr;

    cout<< "elements of the array- ";

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int largest = secondLargest(arr);
    
    cout << "second largest value is - " << largest;
}