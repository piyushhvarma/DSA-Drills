#include<bits/stdc++.h>
using namespace std;


void Name(int i,int n){
    if(i>n) return;
    cout << "PYT";
    Name(i+1,n);    
}


int main(){
    int n;
    cin >> n;
    Name(1,n);
}