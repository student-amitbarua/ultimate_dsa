# include <bits/stdc++.h>
using namespace std;

bool palindromCheck(int i, string& s){

    if(i>= s.length()/2 ) return true;

    if(s[i] != s[s.length() - i - 1]) return false;

    palindromCheck(i+1, s);


}

int main ()
{

    string s;
    cin>>s;



    cout<<palindromCheck( 0, s); // Output 1 if palindrome, 0 if not

    return 0;
}