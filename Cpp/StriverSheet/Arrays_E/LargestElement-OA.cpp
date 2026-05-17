#include<bits/stdc++.h>
using namespace std;

int LargestElement(vector<int> arr){
    int max = arr[0];

    for (int i = 1; i < arr.size(); i++){
        if (max < arr[i]){
            max == arr[i];
        }
    }

    return max;

}

int main(){
    int n;
    cout << "size- ";
    cin >> n;

    vector<int> arr;

    cout << "elements - ";

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int largest = LargestElement(arr);
    cout << "largest element is : " << largest; 
}