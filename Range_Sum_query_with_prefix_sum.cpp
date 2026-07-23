#include<iostream>
using namespace std;



int main(){

    int arr[] = {1,2,3,4,5};

    int p[5];
    int sum = 0 ;
    for(int i = 0 ; i < 5;i++){
        sum = sum + arr[i];
        p[i] = sum;
    }


    for(int i = 0 ; i < 5;i++){
        cout<<p[i]<<" ";
    }
    return 0 ;
}