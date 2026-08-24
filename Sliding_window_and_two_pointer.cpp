#include<iostream>
using namespace std;



int main(){
    // first apporoch the sovel th problem of sum of sub array
    for(int i = 0 ; i < 8;i++){
        for(int j = i; j< 8;j++){
            for(int k = i; k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

      // second apporoch the sovel th problem of sum of sub array
      // prefix sum method
      for(int i = 0 ; i < 8;i++){
        for(int j = i; j< 8;j++){
            int sum = 0;
            for(int k = i; k<=j;k++){
                sum+=arr[k];
            }
            cout<<sum<<endl;
        }
    for(int i = 0 ; i < 8;i++){
        for(int j = i; j< 8;j++){
            // prefix sum method
            if(l == 0){
                cout<<p[r]<<endl;
            }else{
                cout<<p[r]-p[l-1]<<endl;    

            cout<<endl;
        }
    }



    // carry forward techinque
     for(int i = 0 ; i < 8;i++){
        int sum = 0;
        for(int j = i; j< 8;j++){
            sum += arr[j];
            cout<<sum<<endl;
        }
    }

}}

