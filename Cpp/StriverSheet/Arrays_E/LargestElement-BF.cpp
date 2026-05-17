#include<bits/stdc++.h>
using namespace std;

int LargestElement(vector<int>& arr){
    sort(arr.begin(), arr.end());

    return (arr[arr.size() - 1]);

}

int main(){
    int n;
    cout << "Enter Array size - ";
    cin >> n;

    vector<int> arr;

    cout << "Enter Array Elements : ";

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
        
    }

    int largest = LargestElement(arr);

    cout << "the largest element : " << largest;


}

