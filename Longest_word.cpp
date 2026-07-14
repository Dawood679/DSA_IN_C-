#include<iostream>
using namespace std;


int main(){


    string s = "improve yourself";
    int n = s.size();

    int ans = 0;
    int i = 0;

    while(i<n){
        if(s[i] == ' '){
            i++;
            continue;
        }


        int j = i;
        int count = 0;
        while(j<n and s[j] != ' '){
            j++;
            count++;
        }
        if(count>ans){
            ans = count;
        }
        i = j;
    }
    cout<<ans;
    return 0;
}