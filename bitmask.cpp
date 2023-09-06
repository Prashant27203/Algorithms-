#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0;cin>>n;cin>>k;int cnt=0;
    for(int i =1;i<=n;i++){
        if(i & (1<<k)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}