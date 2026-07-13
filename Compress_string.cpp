#include<iostream>
using namespace std;



int main(){

    string s = "aaabbbccd";

    int i = 0;
    int n = 9;
    while( i < n){
        int j = i;
        int count = 0;
        while(j<0 or s[i]==s[j]){
            j++;
            count++;
        }

        if(count == 1){
            cout<<s[i];
        }
        else{
            cout<<s[i]<<count;
        }
        i = j;
    }
    return 0;
}