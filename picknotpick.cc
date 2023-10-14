#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int ind, bool &flag, int target)
{
    if (!target)
    {
        flag = true;
        return;
    }
    if (target - nums[ind] >= 0)
    {
        solve(nums, ind, flag, target - nums[ind]);
    }
    solve(nums, ind + 1, flag, target);
}

int main()
{
    int n = 0;
    bool flag = false;

    printf("Enter the Number of Elements \n");
    scanf("%d", &n);

    vector<int> nums(n);

    printf("Enter the vector\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target Sum \n");
    int target = 0;
    scanf("%d", &target);

    solve(nums, 0, flag, target);

    if (!flag)
    {
        printf("Target Subsequence is not Present in the vector");
    }
    else
    {
        printf("The Target Sum is present in the vector\n");
    }

    return 0;
}
