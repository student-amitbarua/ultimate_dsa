#include <bits/stdc++.h>
using namespace std;

int countDigits1( int n){
    int cnt =0;
    while(n>0){
        // int last_digit = n%10;
        cnt++;

        n=n/10;
    }
    return cnt;

}

// optimal solution

int countDigits2(int n){
    int cnt = (int) (log10(n)+1);
    return cnt;
}


int main(){

    int n;
    cin>>n;

    int result =countDigits2(n);

    cout<<result<<endl;

    return 0;
}