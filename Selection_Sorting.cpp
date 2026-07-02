#include<iostream>
using namespace std;




int main(){

    // Selection Sorting

    int arr[] = {5,4,3,2,1};
    int n = 5;
    for(int i = 0 ; i <n ; i++ ){
        int min = arr[i];
        int loc = i;
        for(int j = i+1;j< n ; j++){
            if(min>arr[j]){
                min = arr[j];
                loc = j;
            }
        }
        swap(arr[i],arr[loc]);
    }

    for(int i= 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}