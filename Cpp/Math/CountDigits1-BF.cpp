#include<iostream>
using namespace std;

void CountDigits(int n){
    
    int count = 0;
    while (n>0){
        int lastdigit = n%10; // can also ignore this 
        cout<<lastdigit; // and this
        n = n/10;
        count++;
    }
    cout << "Count of digit is : " << count << endl;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n ;

    CountDigits(n);
    return 0;
}