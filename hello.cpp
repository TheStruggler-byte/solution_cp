

// // // // int main(){
// // // //     int n;
// // // //     cin >> n;
// // // //     char arr[n];
// // // //     for(int i = 0; i < n; i++){
// // // //         cin >> arr[i];
// // // //     }
// // // //     int count = 0;
// // // //     for(int i = 0; i < n; i++){
// // // //         if(arr[i]=='a' ||arr[i]=='e' ||arr[i]=='i' ||arr[i]=='o' ||arr[i]=='u' ||arr[i]=='A' ||arr[i]=='E' ||arr[i]=='I' ||arr[i]=='O' ||arr[i]=='U' ){
// // // //             continue;
// // // //         }else{
// // // //             count++;
// // // //         }
// // // //     }
// // // //     cout << count;
// // // //     return 0;
// // // // }

// // // // #include<iostream>
// // // // using namespace std;

// // // // void swap(int& a, int& b){
// // // //     int temp = a;
// // // //     a = b;
// // // //     b= temp;
// // // // }

// // // // int main(){
// // // //     int size, time, num;
// // // //     cin>>size>>time>>num;
// // // //     int arr[size];
// // // //     for(int i=0; i<size; i++){
// // // //         arr[i] = i+1;
// // // //     }
// // // //     while(time--){
// // // //         int a,b;
// // // //         cin>>a>>b;
// // // //         int start = a-1;
// // // //         int end = b-1;
// // // //         while(end>start){
// // // //             swap(arr[start], arr[end]);
// // // //             start++;
// // // //             end--;
// // // //         }
// // // //     }
// // // //     cout<<arr[num-1];
// // // //     return 0;
// // // // }
// // // #include<iostream>
// // // #include<algorithm>

// // // using namespace std;

// // // // int getPosWk(int arr[], int n ){
// // // //     int max_mod = 0,tot_sum = 0, rest_sum;
// // // //     for(int i = 0; i < n; i++){
// // // //         tot_sum += arr[i];
// // // //         if(arr[i] > max_mod)
// // // //             max_mod = arr[i];
// // // //     }
// // // //     rest_sum = tot_sum - max_mod;
// // // //     return rest_sum+min(max_mod,rest_sum+1);
// // // // }
// // // int main(){
// // //     // int n;
// // //     // cin >> n;
// // //     // int arr[n];
// // //     // for(int i = 0; i < n; i++){
// // //     //     cin >> arr[i];
// // //     // }
// // //     // cout << getPosWk(arr,n);
// // //     //static char x[7] = "1234";
// // //     //cout << sizeof('x');
// // //     int a = 5, b= 10,c,d;
// // //     c = a&&b;
// // //     d = a&b;
// // //     cout <<c<<","<<d;
// // // }


// // #include<bits/stdc++.h>

// // using namespace std;

// // int main(){
// //     string c,temp;
// //     getline(cin, c);
// //     vector<string> line;
// //     stringstream ssin(c);
// //     while(ssin.good()){
// //         ssin>>temp;
// //         line.push_back(temp);
// //     }
// //     int count=0;
// //     int arr[line.size()]={0};
// //     for(int i =0; i<line.size(); i++){
// //         for(int j=0; j<line.size(); j++){
// //             if(line[i]==line[j]){
// //                 arr[i]+=1;
// //             }
// //         }
// //     }
// //     for(int i=0; i<line.size(); i++){
// //        if(arr[i]==1){
// //            count++;
// //        }
// //     }
// //     cout<<count<<endl;
// //     return 0;
// // }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int max=0;
//     int max2 = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]>max){
//             max2 = max;
//             max = arr[i];
//         }
//     }
//     cout<<max+max2;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int steps;
//     cin>>steps;
//     int count = 0;
//     while(steps!=0){
//         if(steps%2==0){
//             steps = steps/2;
//             count++;
//         }else{
//             steps = steps -1;
//             count++;
//         }
//     }
//     cout << count;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0; i<n; i++){
//         cin>>arr[i];
//     }
//     int count =0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if((arr[i]+arr[j])%3==0){
//                 count++;
//             }
//         }
//     }
//     for(int i=0; i<n ;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k= j+1; k<n; k++){
//                 if((arr[i]+arr[j]+arr[k])%3==0){
//                     count++;
//                 }
//             }

//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void swap(int& a, int& b){
//     int temp = a;
//     a = b;
//     b= temp;
// }
// int main(){
//     int num;
//     cin>>num;
//     string s = to_string(num);
//     if(s.length()%2==0){
//         for(int i=0; i<s.length(); i=i+2){
//             swap(s[i],s[i+1]);
//         }
//     }else{
//         for(int i=0; i<s.length()-1; i=i+2){
//             swap(s[i],s[i+1]);
//         }
//     }
//     int sum = stoi(s);
//     cout<<sum<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    char arr1[10]={'a','b','c','d','e','f','g','h','i','j'};
    string s="";
    while(num!=0){
        int temp = num%10;
        s = arr1[temp]+s;
        num= num/10;
    }
    cout<<s<<endl;
    return 0;
}
