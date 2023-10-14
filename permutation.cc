#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>&ans,vector<int>nums,vector<int>&temp,set<int>&st)
{
    if(temp.size()==nums.size())
    {
        ans.emplace_back(temp);
        return ;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(st.find(nums[i])==st.end())
        {
            temp.emplace_back(nums[i]);
            st.insert(nums[i]);
            solve(ans,nums,temp,st);
            st.erase(nums[i]);
            temp.pop_back();
        }
    }
}
int main()
{
    int n =0;
    printf("Enter the Number of Elements \n");
    scanf("%d",&n);
    printf("Enter the Array Elements\n");
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<vector<int>>ans;
    vector<int>temp;
    set<int>st;
    solve(ans,v,temp,st);
    for(auto it:ans)
    {
        for(auto it1:it)
        {
            cout<<it1<<"-";
        }
        cout<<endl;
    }
    return 0;
}