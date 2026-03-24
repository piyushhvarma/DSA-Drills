#include<bits/stdc++.h>
using namespace std;

void Reverse(int i, int n){
    if (i>n) return;

    cout << n << " ";
    Reverse(i,n-1);
}

int main (){
    int n; 
    cin >> n;
    Reverse(1,n);
}