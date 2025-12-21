#include <bits/stdc++.h>
using namespace std;

vector<int>ls;


void divisor(int n){
    for(int i=1;i<=sqrt(n); i++){
        if(n%i==0)
        {
            ls.push_back(i);
        
        if(n/i != i)
        {
            ls.push_back(n/i);
        }
    }
}

   sort(ls.begin(), ls.end());
   for (auto it : ls) cout<<it<<endl;

}

int main(){

    int n;
    cin>>n;

    divisor(n);

    return 0;


}