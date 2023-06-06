#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int el1;
    int el2;
    int c1=0;
    int c2=0;
    int n=arr.size();
    vector<int>ans;

    for(int i=0; i<n; i++){

        if(c1==0 and arr[i]!=el2){
            el1=arr[i];
            c1++;
        }

        else if(c2==0 and arr[i]!=el1){
            el2=arr[i];
            c2++;
        }

        else if(arr[i]==el1){
            c1++;
        }
        else if(arr[i]==el2){
            c2++;
        }
        else{
            c1--;
            c2--;
        }

    }

    c1=0;
	c2=0;
	for(int i=0; i<n; i++){
		if(arr[i]==el1) c1++;
		if(arr[i]==el2) c2++;
	}
	int min=(int)(n/3) + 1;
	
	if(c1>=min)ans.push_back(el1);
	if(c2>=min)ans.push_back(el2);

	sort(ans.begin(),ans.end());
	return ans;
}



// TC: 2*O(n)
// SC: O(1)
