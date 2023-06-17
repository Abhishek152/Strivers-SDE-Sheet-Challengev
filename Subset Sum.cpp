#include <bits/stdc++.h> 

void solve(vector<int> num, vector<int>&ans, int sum, int i){
    if(i>=num.size()){
        ans.push_back(sum);

        return;
    }

    sum+=num[i];
    solve(num,ans,sum,i+1);
    sum-=num[i];
    solve(num,ans,sum,i+1);

}


vector<int> subsetSum(vector<int> &num)
{
    vector<int>ans;
    int sum=0;
    solve(num,ans,sum,0);
    sort(ans.begin(),ans.end());
    return ans;
}
