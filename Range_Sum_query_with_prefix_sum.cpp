// #include<iostream>
// using namespace std;



// int main(){

//     int arr[] = {1,2,3,4,5};

//     int p[5];
//     int sum = 0 ;
//     for(int i = 0 ; i < 5;i++){
//         sum = sum + arr[i];
//         p[i] = sum;
//     }


//     for(int i = 0 ; i < 5;i++){
//         cout<<p[i]<<" ";
//     }
//     return 0 ;
// }


// #include <iostream>
// using namespace std;


// int main (){


//     string s = "abcdefghijkl";
//     int countvowelarr[12];
//     // create a array of when a vowel we store 1 and in other case we don't
//     for(int i = 0 ; i <12;i++){
//         if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' ){
            
//             countvowelarr[i] = 1;
//         }else{
            
//             countvowelarr[i] = 0;
//         }
//     }

//     // creating prefix sum array
//     int sum = 0;
//     int p[12] ;

//     for(int i = 0 ; i < 12;i++){
//         sum += countvowelarr[i];
//         p[i] = sum;
//     }

//     //quesryes
//     int q =0;
//     cin>>q;

//     for(int i = 0 ; i< q;i++){
//         int l,r;
//         cin>>l>>r;


//         if(l==0){
//             cout<<p[r];
//         }else{
//             cout<<p[r]-p[l-1];
//         }
//     }



//     // for(int i = 0 ; i < 12;i++){
//     //     cout<<p[i]<<" ";
//     // }
//     return 0;
// }


/// even sum quesry


// #include <iostream>
// using namespace std;


// int main (){


//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     //p          0,2,0,4,0,6
    
//     // create a array of when a vowel we store 1 and in other case we don't
//     for(int i = 0 ; i <12;i++){
//        if(i%2 == 0){
//         arr[i] = arr[i];
//        }else{
//         arr[i] = 0;
//        }
//     }

//     // creating prefix sum array
//     int sum = 0;
//     int p[12] ;

//     for(int i = 0 ; i < 12;i++){
//         sum += arr[i];
//         p[i] = sum;
//     }

//     // //quesryes
//     // int q =0;
//     // cin>>q;

//     // for(int i = 0 ; i< q;i++){
//     //     int l,r;
//     //     cin>>l>>r;


//     //     if(l==0){
//     //         cout<<p[r];
//     //     }else{
//     //         cout<<p[r]-p[l-1];
//     //     }
//     // }



//     for(int i = 0 ; i < 12;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// // sub arrays print logic 
// #include<iostream>
// using namespace std;


// int main(){


//     int arr[] = {1,2,3,4,5};

//     for(int l = 0 ; l < 5;l++){
//         for(int r= l ; r < 5 ; r++){
//             for(int i = l ; i<=r;i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return  0 ;
// }


// sum of sub arrays print logic 
#include<iostream>
using namespace std;


int main(){


    int arr[] = {1,2,3,4,5};

    for(int l = 0 ; l < 5;l++){
        for(int r= l ; r < 5 ; r++){
            int sum =0;
            for(int i = l ; i<=r;i++){
                sum += arr[i];
                cout<<arr[i]<<" ";
            }
            cout<<"Sum of sub arry: "<<sum<<endl;
            // cout<<endl;
        }
    }
    return  0 ;
}