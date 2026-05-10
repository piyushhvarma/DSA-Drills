#include<bits/stdc++.h>
using namespace std;

int main(){
    // create an empty vector 
    vector<int> emptyVector = {5,10,15,20};
    // print using 1. normal for loop 
    for (int i = 0; i < emptyVector.size(); i++){
        cout << emptyVector[i] << " ";
    }
    cout << endl;

    //2. using range method
    for ( int j : emptyVector){
        cout << j << " ";
    }
    cout << endl; 
}