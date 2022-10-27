#include <bits/stdc++.h>

using namespace std;

int prefixSum(int arr[] ,int n){
    if (n==0) return 0; 
    if (n==1) return arr[0];
    
    return prefixSum(arr+1,n-1)+arr[0];

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<prefixSum(arr,n);
    return 0;
}
