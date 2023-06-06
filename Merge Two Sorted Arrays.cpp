#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int c=n;

	while(c>0){
		arr1.pop_back();
		c--;
	}

	int i=m-1;
	int j=0;

	while(i>=0 and j<n){
		if(arr1[i]>arr2[j]){
			swap(arr1[i],arr2[j]);
			i--;
			j++;
		}
		else break;
	}

	for (auto x : arr2){
		arr1.push_back(x);
	}

	sort(arr1.begin(),arr1.end());

	return arr1;
}
