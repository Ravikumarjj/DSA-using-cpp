class Solution{
	public:
	int getPow(int mid, int n, int m){
	        long long ans = 1;
	        for(int i =0;i<n;i++){
	            ans= ans*mid;
	            if(ans > m) return 0;// help to prevent the overflow of value and break when it exceed the m
	        }
	        if(ans==m) return 1;
	        else return 2;//ans<m
	        
	    }
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low = 1;
	    int high = m;
	    while(low<=high){
	        int mid = low+(high-low)/2;
	        if(getPow(mid,n,m)==1)return mid;
	        else if(getPow(mid,n,m)==2) low=mid+1;
	        else high=mid-1;
	    }
	    return -1;
	    
	    
	}  
};