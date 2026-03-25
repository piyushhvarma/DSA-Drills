#include<bits/stdc++.h>
using namespace std;

int number = 1;

void Freq(int number, int arr[], int n){

    int cnt = 1;
    for (int i = 0; i<n; i++){
        if (arr[i] == number) cnt++;
    }
    cout << cnt;
}

int main(){
    int arr[];
    cin >> arr[];

    Freq();
}