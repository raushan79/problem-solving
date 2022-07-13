// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
             int s=n+m;
	    int ans[s];
	    int left=0;
	    int right=0;
	    int curr=0;
	    while(left<n && right<m){
	        if(arr1[left]<arr2[right]){
	            ans[curr]=arr1[left];
	            left++;
	        }else{
	            ans[curr]=arr2[right];
	            right++;
	        }
	        curr++;
	    }
	    
	    //first array
	    while(left<n){
	        ans[curr]=arr1[left];
	        left++;
	        curr++;
	    }
	    
	    // second arr
	    while(right<m){
	        ans[curr]=arr2[right];
	        right++;
	        curr++;
	    }
	   // return ans[s];
	   int z=0;
	   for(int i=0;i<n;i++){
	       arr1[i]=ans[z];
	       z++;
	   }
	   
	    for(int i=0;i<m;i++){
	       arr2[i]=ans[z];
	       z++;
	   }
	}
};// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends