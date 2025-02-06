#include<bits/stdc++.h>
using namespace std;

void rotateArr(vector<int> &arr,int n,int k){
    k=k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(), arr.begin()+n-k);
    reverse(arr.begin()+n-k,arr.end());
    
}

int main(){
    vector<int>arr ={1,2,3,4,5};
    int n=arr.size();
    int k=2;
     
    rotateArr(arr,n,k);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
