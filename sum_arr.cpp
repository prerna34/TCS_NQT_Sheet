#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<int> arr = {8, 7, 1, 6, 5, 9};
    int n=arr.size();
    int sum=0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    cout<<sum;

}