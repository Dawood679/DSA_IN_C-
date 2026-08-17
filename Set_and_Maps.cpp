// to run the file
// g++ -std=c++20 Set_and_Maps.cpp -o app


// #include<iostream>

// using namespace std;



// int main(){
//     int arr[] = {1,2,3,3,4,4,5,5};

//     for(int i = 0 ; i < 8;i++){
//         for(int j = i+1; j< 8;j++){
//             if(arr[i] == arr[j]){
//                 cout<<"Duplicate mil gaya"<<" "<< arr[i]<<arr[j];
//                 break;
//             }
//         }
//     }





//     return 0;
// }


// frequncy in the array of elements
// #include<iostream>

// using namespace std;



// int main(){
//     int arr[] = {1,2,3,3,4,4,5,5};

//     for(int i = 0 ; i < 8;i++){
//         if(arr[i] == -1){
//             continue;
//         }
//         int count = 1;
//         for(int j = i+1; j< 8;j++){
//             if(arr[i] == arr[j]){
//                 count++;
//                 arr[j] = -1;
//             }
//         }
//         cout<<"Frquncy of:"<<arr[i]<<" "<<count<<endl;
//     }





//     return 0;
// }



// //Find duplicate in the arry with sets


// #include<iostream>
// #include <set>

// using namespace std;



// int main(){
//     int arr[] = {1,2,3,3,4,4,5,5};

//     set<int> use;
//     for(int i = 0 ; i < 8;i++){
//         if(use.contains(arr[i])){
//             break;
//         }
//         use.insert(arr[i]);
//     }
    

    

//     return 0;
// }


// //find the frequncy of the elements with maps


// #include<iostream>
// #include <map>

// using namespace std;



// int main(){
//     int arr[] = {1,2,3,3,4,4,5,5};

//     map<int,int> use;
//     for(int i = 0 ; i < 8;i++){
//         if(use.contains(arr[i])){
//             use[arr[i]]++;
//         }else{

//             use.insert({arr[i],1});
//         }
//     }
    
//     for (auto [key, value] : use) {
//     cout << key << " -> " << value << endl;
// }
    

//     return 0;
// }



//count distinct element


// #include<iostream>
// #include <set>

// using namespace std;



// int main(){
//     int arr[] = {1,2,3,3,4,4,5,5};

    
//     set<int> st;

//     for(int i= 0 ; i < 8;i++){
//         st.insert(arr[i]);
//     }
    
//     cout<<st.size();
    

//     return 0;
// }



//union of the two arrays

// #include<iostream>
// #include <set>

// using namespace std;



// int main(){
//     int arr[] = {1,2,3,3,4,4,5,5};
//     int arr2[] = {7,8,9,10,11};
//     set<int> st;
//     for(int i = 0 ; i< 8;i++){
//         st.insert(arr[i]);
//     }
//    for(int i = 0 ; i< 5;i++){
//         st.insert(arr2[i]);
//     }



//      for (int num : st) {
//         std::cout << num << " ";
//     }
    
    

//     return 0;
// }


// // two sum problem with sets
// #include<iostream>
// #include <set>

// using namespace std;



// int main(){
//     int arr[] = {1,4,5,6,7,3};
//     int target = 9;
//     set<int> st;
//     for(int i = 0 ; i< 6;i++){
//         int req  = target - arr[i];
//         if(st.contains(req)){
//             break;
//         }
//         st.insert(arr[i]);
//     }
   



//      for (int num : st) {
//         std::cout << num << " ";
//     }
    
    

//     return 0;
// }




// two sum problem with maps and also the count
#include <iostream>
#include <map>

using namespace std;

int main() {
    int arr[] = {1, 4, 5, 6, 7, 3};
    int target = 9;

    int ans = 0;
    map<int, int> mp;

    for (int i = 0; i < 6; i++) {

        int req = target - arr[i];

        // required number already exists?
        if (mp.contains(req)) {
            ans += mp[req];
        }

        // store current number
        mp[arr[i]]++;
    }

    cout << "Total pairs: " << ans << endl;

    return 0;
}