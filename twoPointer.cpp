// #include<iostream>
// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int max = 0;
//     int sum =0 ,j=0;
//     for(int i=0; i<=n; i++){
//         if(i<k){
//             sum+= arr[i];
//             continue;
//         }
//         if(max<sum){
//             max = sum;
//             cout<<max<<" ";
//         }
//         sum += arr[i];
//         sum -= arr[j];
//         j++;

//     }
//     cout<<endl;
//     cout<<max<<endl;
//     return 0;
// }


//prefixSum methode

// #include<iostream>
// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;
//     int arr[n], pre[n];
//     for(int i=0;i<n; i++){
//         cin>>arr[i];
//         if(i==0){
//             pre[i] = arr[i];
//             continue;
//         }
//         pre[i] =pre[i-1]+arr[i];
        
//     }
//     for(int i=0; i<n; i++){
//         cout<<pre[i]<<" ";
//     }
//     cout<<endl;
//     int max = 0;
//     for(int i=0; i<=n-k; i++){
//         int s = i, e = i+k-1;
//         int sum = pre[e];
//         if(s-1>=0){
//             sum -= pre[s-1];
//         }
//         if(sum>max) max = sum;

//     }
//     cout<<max<<endl;
//     return 0;
// }



//two pointer methode sliding window

#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int l = 0;
    int r = k-1;
    int max = 0, sum =0;
    for(int i=l; i<=r; i++){
        sum+= arr[i];
    }
    max= sum;
    while(r<n-1){
        r++;
        sum += arr[r];
        sum-= arr[l];
        l++;
        if(max<sum) max= sum;
    }
    cout<<max<<endl;
    return 0;
}
