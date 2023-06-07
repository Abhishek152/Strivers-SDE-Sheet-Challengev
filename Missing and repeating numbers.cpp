#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int sum=0;
	int sum2=0;
	int sumn=(n*(n+1))/2;
	int sum2n=(n*(n+1)*(2*n+1))/6;
	
	for(auto x : arr){
		sum+=x;
		sum2+=x*x;
	}

	int val1=sumn-sum;  // x-y;
	int val2=sum2n-sum2;
	val2=val2/val1; // x+y
	
	int x=(val1+val2)/2;
	int y=x-val1;

	return{x,y};

}

// TC: O(n)
// SC: O(1)
