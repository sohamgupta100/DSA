class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr + n);
    	sort(dep, dep + n);
    	
    	int platforms_occupied=1, total_platforms=1;
    	
    	int i=1, j=0;
    	
    	while(i<n && j<n)
    	{
    	    if(arr[i] <= dep[j])
    	    {
    	        platforms_occupied++;
    	        i++;
    	    }
    	    
    	    else if(arr[i] > dep[j])
    	    {
    	        platforms_occupied--;
    	        j++;
    	    }
    	    
    	   // total_platforms = max(total_platforms, platforms_occupied);
    	   if(platforms_occupied > total_platforms)
    	   {
    	       total_platforms = platforms_occupied;
    	   }
    	    
    	}
    	
    	return total_platforms;
    }
};
