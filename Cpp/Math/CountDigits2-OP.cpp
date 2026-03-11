#include<bits/stdc++.h>
using namespace std;

void CountDigits(int n){
    
    int count = int(log10(n)) + 1;
    cout << count;

}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n ;

    CountDigits(n);
    return 0;
}