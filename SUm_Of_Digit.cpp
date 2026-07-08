#include<iostream>
#include<string>
using namespace std;



int main(){
    // simple method
    int n = 123;
    int sum = 0 ;
    while(n!=0){
        sum += n%10;
        n = n/10;
    }

    // cout<<sum;


    string s = "123";
    int sum1 = 0;

    for(int i = 0 ; i<s.size();i++){
        sum1 += s[i] -48;
    }
    cout<<sum1;
    return 0 ;
}