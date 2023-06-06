#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int el;
    int c=0;
   

    for(int i=0; i<n; i++){

        if(c==0){
            el=arr[i];
            c++;
        }

        else if(arr[i]==el) c++;
        else c--;
    }

    int c1=0;
	for(int i=0; i<n; i++){
		if(arr[i]==el) c1++;
	}
	
	if(c1>n/2) return el;
	else return -1;
}


// TC: 2*O(n)
// SC: O(1)
