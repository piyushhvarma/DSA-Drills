#include<bits/stdc++.h>
using namespace std; 

// int main(){ 
//     int n ; 
//     cout << "Enter the size of array : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of array : "; 
    
//     for ( int i = 0; i < n ; i++){
//         cin >> arr[i]; 
//     }

//     vector<int> arr 
//     arr.push_back(i)
// }


// wap to take the size of the array from users and also take array elements and store them in a empty vector and then print the result 

// int main(){

//     int n ; 
//     cout << "Enter size of array; "; 
//     cin >> n;

//     vector<int> arr;

//     cout<< "Enter array elements; ";

//     for (int i = 0; i < n; i++){
//         int x; 
//         cin >> x; 
//         arr.push_back(x); 
//     }

//     for (int j : arr){
//         cout << j << " "; 
//     }

// }


int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin>> n;

    vector<int> arr;
    
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        arr.push_back(x);
    }

    for (int j : arr){
        cout << j << " "; 
    }
}