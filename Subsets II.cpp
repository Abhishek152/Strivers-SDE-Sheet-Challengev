#include <bits/stdc++.h> 

 void solve(vector<int> nums,set<vector<int>>&ans,vector<int>output,int i){
        if(i>=nums.size()){
            sort(output.begin(),output.end());
            ans.insert(output);
            return;
        }

        output.push_back(nums[i]);
        solve(nums,ans,output,i+1);
        output.pop_back();
        solve(nums,ans,output,i+1);
    }
    
 vector<vector<int>> uniqueSubsets(int n, vector<int> &nums) {
   set<vector<int>>ans;
        vector<int>output;
        int i=0;
        solve(nums,ans,output,i);
        vector<vector<int>>res;

        for (auto x : ans) {
          res.push_back(x);
        }

        return res;
 }
