#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0;
    long long m=INT_MIN;

    for(int i=0; i<n; i++){
        sum+=arr[i];

        if(sum<0){
            sum=0;
        }

       if (sum>m){
            m=sum;

        }
    }

    return m;
}

//TC: O(n)
// n is the size of the array
//SC: O(1) Constant Space
