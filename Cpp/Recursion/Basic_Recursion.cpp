#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void Recursion(){
    if (cnt == 4) return;
    cout << cnt;
    cnt++;

    Recursion();
}

int main(){
    Recursion();
}