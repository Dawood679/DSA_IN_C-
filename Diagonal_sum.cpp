#include<iostream>
using namespace std;



int main(){

    int arr[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int sum = 0;

    int i = 0;
    int j = 0;

    while(i <3 and j<3){
        cout<<arr[i][j];
        sum += arr[i][j];
        i++;
        j++;
    }

    cout<<sum;

    return 0;
}