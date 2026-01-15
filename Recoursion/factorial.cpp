# include <bits/stdc++.h>
using namespace std;

int printFactNumber(int n){

    int fact = 1;

   for(int i=1; i<=n; i++)
   {
     fact = fact*i;
   }

   return fact;

}

int main ()
{
    int n;
    cin>>n;


    cout<<printFactNumber(n);

    return 0;
}