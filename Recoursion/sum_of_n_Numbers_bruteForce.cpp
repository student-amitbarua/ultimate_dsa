# include <bits/stdc++.h>
using namespace std;

void printNumber(int n){

    int sum=0;

    for(int i =1; i<=n; i++){
         sum += i;
    }

    cout<<sum; 
}

int main ()
{
    int n;
    cin>>n;


    printNumber(n);

    return 0;
}