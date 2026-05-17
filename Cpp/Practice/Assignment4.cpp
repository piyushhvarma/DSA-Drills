#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array = ";
    cin >> n;

    vector<int> arr;
    int max_element = INT_MIN; // fix 
    cout << "Enter the array elements = ";

    for (int i= 0; i < n; i++){
        int x = 0;
        cin >> x;
        arr.push_back(x);
        if (max_element < x){
            max_element = x;
        }
    }
cout << "Max element is: " << max_element;
}