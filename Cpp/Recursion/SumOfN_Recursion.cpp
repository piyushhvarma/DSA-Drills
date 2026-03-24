#include<bits/stdc++.h>
using namespace std;

void Sum(int i, int n){
    if (i>n) return;

    Sum(i+i, n);

    cout << i << " ";
}

int main(){
    int n;
    cin >> n;

    Sum(1,n);
}