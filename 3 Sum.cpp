#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	set<vector<int>>s;

	for(int i=0; i<n; i++){

		if(i>0 and arr[i]==arr[i-1]) continue;

		int j=i+1;
		int k=n-1;

		while(j<k){
			int sum=arr[i] + arr[j] + arr[k];

			if(sum==K){
				vector<int>temp={arr[i],arr[j],arr[k]};
				sort(temp.begin(),temp.end());
				s.insert(temp);
				j++;
				k--;

				while(j<k and arr[j]==arr[j-1]) j++;
				while(j<k and arr[k]==arr[k+1]) k--;
			}

			else if(sum<K) j++;

			else k--;
		}

	}

	for(auto x : s){
		ans.push_back(x);
	}


	return ans;
}

// TC: nlogn + O(n*n)
// SC: O(1) -> No extra Space
// However, a list is used to return the answer.
// If considered, SC: O( number of unique triplets )
