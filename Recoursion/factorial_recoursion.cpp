# include <bits/stdc++.h>
using namespace std;

int printFactNumber(int n){

    if(n==0) return 1;

return n * printFactNumber(n-1);

}

int main ()
{
    int n;
    cin>>n;


    cout<<printFactNumber(n);

    return 0;
}