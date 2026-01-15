# include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==0) 
    {
        cout<<0;
    }

else 
{

    int last = 1;
    int slast = 0;

    int current;

    for(int i = 2; i<=n; i++)
    {
    current = slast + last;
    slast = last;
    last = current;

    cout<<current<<" ";
    }


}

    return 0;
}