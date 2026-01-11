# include <bits/stdc++.h>
using namespace std;

void printNumber(int current_number){

    if(current_number<1) return;

    cout<<current_number<<endl;

    printNumber(current_number-1);
}

int main ()
{
    int n;
    cin>>n;


    printNumber(n);

    return 0;
}