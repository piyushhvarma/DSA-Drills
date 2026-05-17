//use function to find the sum of the array 

#include<bits/stdc++.h>
using namespace std;

int getSum(vector<int> &arr){
    int sum = 0;
    
    for(int i = 0; i < arr.size(); i++ ){
        sum += arr[i];
    }

    return sum;
}


int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr;

    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x;
        arr.push_back(x);
    }
    int answer = getSum(arr);

    cout << answer;

}