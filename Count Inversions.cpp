#include <bits/stdc++.h> 
long long merge(long long *arr, int low, int mid, int high){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    long long c=0;

    while(left<=mid and right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        } 
        
        else {
            c+=mid-left+1;
          temp.push_back(arr[right]);
          right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return c;

}

 
long long ms(long long *arr, int low, int high){
    long long c=0;
    if (low >= high) return c;
    int mid = (low + high) / 2 ;
    c+=ms(arr, low, mid);  
    c+=ms(arr, mid + 1, high); 
    c+=merge(arr, low, mid, high);
    return c; 
}


long long getInversions(long long *arr, int n){
    return ms(arr,0,n-1);
    
}

// TC: O(nlogn)
// SC: O(n)
