//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int s=0,e=n-1;
        int ans=INT_MAX;
        int index;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid]>=arr[s]){
                if(arr[s]<ans){
                    ans=arr[s];
                    index=s;
                }
                s=mid+1;
            }
            else{
                if(arr[mid]<ans){
                    ans=arr[mid];
                    index=mid;
                }
                e=mid-1;
            }
        }
        return index;
	}

};