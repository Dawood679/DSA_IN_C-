// #include<iostream>
// using namespace std;



// int main(){
//     // first apporoch the sovel th problem of sum of sub array
//     for(int i = 0 ; i < 8;i++){
//         for(int j = i; j< 8;j++){
//             for(int k = i; k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }

//       // second apporoch the sovel th problem of sum of sub array
//       // prefix sum method
//       for(int i = 0 ; i < 8;i++){
//         for(int j = i; j< 8;j++){
//             int sum = 0;
//             for(int k = i; k<=j;k++){
//                 sum+=arr[k];
//             }
//             cout<<sum<<endl;
//         }
//     for(int i = 0 ; i < 8;i++){
//         for(int j = i; j< 8;j++){
//             // prefix sum method
//             if(l == 0){
//                 cout<<p[r]<<endl;
//             }else{
//                 cout<<p[r]-p[l-1]<<endl;    

//             cout<<endl;
//         }
//     }



//     // carry forward techinque
//      for(int i = 0 ; i < 8;i++){
//         int sum = 0;
//         for(int j = i; j< 8;j++){
//             sum += arr[j];
//             cout<<sum<<endl;
//         }
//     }

// }}



// // carry forward technigque with sum of suba arry with size k = x

// #include<iostream>
// using namespace std;



// int main(){
//     int arr[] = {1,2,3,4,5};
//     int ans =-32232232;
//     int k = 3;
//     for(int l = 0 ; l < 5;l++){
//         int sum =0;
//         for(int r = l ; r < 5;r++){
//             sum += arr[r];
//             int len = r-l+1;
//             if(len == k){
//                 ans = max(ans,sum);
//             }
//         }
//     }
//     cout<<ans;

// }



// // carry forward technigque with sum of suba arry with size k = x with optimize solution

// #include<iostream>
// using namespace std;



// int main(){
//     int arr[] = {1,2,3,4,5};
//     int ans =-32232232;
//     int k = 3;
//     int sum =0;
//     //create a sum for first wind
//     for(int i = 0 ; i< k;i++){
//         sum +=arr[i];
//     }

//     //build the sol for next window
//     for(int i = k ; i < 5;i++){
//         sum += arr[i];
//         sum -= arr[i-k];
//         ans = max(ans,sum);
//     }
//     cout<<ans;
// }

// // maintain the count variable for substring with size of k 

// #include<iostream>
// #include<string.h>
// using namespace std;



// int main(){
//     string s = "abcdefijk";
//     int k = 4;
//     int count = 0;
//     for(int i = 0 ; i < k ;i++){
//         if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' ){
//             count++;
//         }
//     }
//     cout<<count<<" ";
//     for(int i = k ; i < s.size();i++){
//         if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
//             count++;
//         }
//         if(s[i-k] == 'a' or s[i-k] == 'e' or s[i-k] == 'i' or s[i-k] == 'o' or s[i-k] == 'u' ){
//             count--;
//         }
//         cout<<count<<" ";
//     }

    
// }


// count distinct element in every widow of size k 

#include<iostream>
#include<string.h>
#include<map>
using namespace std;



int main(){
   int arr[] = { 1,2,1,3,4,2,5,5,5};
   int k = 4;
    Map mp<int,int>;
   for( int i = 0 ; i < k ; i++){
        mp[arr[i]]++;
   }

   for(int i = k ; i < 9 ; i ++){
    mp[arr[i]]++;


    mp[arr[i-k]]--;
    // If frequency becomes 0, erase it
        if (mp[arr[i - k]] == 0) {
            mp.erase(arr[i - k]);
        }

        cout << "Distinct: " << mp.size() << endl;
   }

    
}