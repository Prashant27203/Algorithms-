#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>&ans,vector<int>&nums,vector<int>&temp,int ind)
{
    if(ind==nums.size())
    {
        ans.emplace_back(nums);
        return ;
    }
    for(int i =ind;i<nums.size();i++)
    {
        swap(nums[i],nums[ind]);
        solve(ans,nums,temp,ind+1);
        swap(nums[i], nums[ind]);
    }
}
int main()
{
    int n =0;
    cout<<"Enter the Number of the Elements "<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the Vector"<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<vector<int>>ans;
    vector<int>temp;
    solve(ans,v,temp,0);
    for(auto it:ans)
    {
        for(auto it1:it)
        {cout<<it1<<"--";}
        cout<<endl;
    }
    return 0;
}