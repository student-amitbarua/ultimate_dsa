#include <bits/stdc++.h>
using namespace std;

int armstongNumber(int num){

    int k = to_string(num).length();

    int sum=0;

    while(num>0){
        int lastDigit = num%10;
        // floating issue solved by using int and adding 0.5 
        sum += (int) (pow(lastDigit, k)+0.5);
        num = num/10;
    }
    return sum;

}

int main(){

    int num;
    cin>>num;

    int duplicate = num;

    int result = armstongNumber(num);

    if(result == duplicate) cout<<"armstrong"<<endl;

    else cout<<"not armstrong"<< endl;

    return 0;
}