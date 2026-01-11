# include <bits/stdc++.h>
using namespace std;

int printSumNumber(int n){

    if(n==1) return 1;

   return n + printSumNumber(n-1);

}

int main ()
{
    int n;
    cin>>n;


    cout<<printSumNumber(n);

    return 0;
}