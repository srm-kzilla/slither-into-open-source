#include <bits/stdc++.h>

using namespace std;

int prefixSum(int arr[] ,int n){
    if (n=0) return 0;
    return prefixSum(arr,n-2)+arr[n];

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<prefixSum(arr,n-1);
    return 0;
}
