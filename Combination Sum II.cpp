#include<bits/stdc++.h>
void solve(vector<int> arr, vector<vector<int>>&ans,vector<int>output, int idx ,int target){
	
	 if(target==0){
                 ans.push_back(output);
                 return;
                }
                if(target<0){
            return ;
        }
	   
              for (int i = idx; i < arr.size(); i++) {
				   
				  if(i!=idx and arr[i]==arr[i-1]) continue;
				   if(arr[i]>target) break;
				  output.push_back(arr[i]);
				  solve(arr,ans,output,i+1,target-arr[i]);
				  output.pop_back();
              }
            
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int n, int target)
{   
	sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>output;
        int i=0;
        solve(candidates,ans,output,i,target);

        return ans;
}
