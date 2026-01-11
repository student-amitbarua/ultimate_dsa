# include <bits/stdc++.h>
using namespace std;

void printName(int n, int cnt, string name){

    if(cnt == n) return;
    
    cout<<name<<endl;

    printName(n, cnt+1, name);
}

int main ()
{
    int n;
    cin>>n;

    string name;


    cin>>name;

    printName(n,0,name);

    return 0;
}