#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1(2,7);
        
    for (int x : arr1){
        cout << x << " ";
    }   
    cout << endl;


    vector<int> arr2 = {1,2,3,4,5};
    for (int y : arr2){
        cout << y << " ";
    }

    cout << endl; 

    // insert element 1. push_back

    vector<int> arr3 = {8,9,10,22};
    arr3.push_back(1); // push_back inserts element at the last position, takes O(1)
    
    for (int a = 0; a < arr3.size(); a++){ //normal for loop 
        cout << arr3[a] << " ";
    }   
    
    cout << endl; 

    for ( int b : arr3){ // ranged-based loop 
        cout << b << " "; 
    }
    cout << endl;

    // insert element 2. insert(position, value) it takes O(n) as it shifts elements to create space.

    vector<char> arr4 = {'a', 'b', 'c', 'd'}; 

    arr4.insert(arr4.begin() + 1, 'e'); // insert at position 3 i.e. after c

    for (char c : arr4){
        cout << c << " ";
    }
    cout << endl;


}