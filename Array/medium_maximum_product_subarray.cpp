class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int left_max_prod = 0;
        int left_curr_prod = 1;
        
        if(nums.size() == 1)
        {
            return nums[0];
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                if(nums[i] > left_max_prod)
                {
                    left_max_prod = 0;
                }
                
                left_curr_prod = 1;
            }

            else
            {
                left_curr_prod = nums[i] * left_curr_prod;

                if(left_curr_prod > left_max_prod)
                {
                    left_max_prod = left_curr_prod;
                }
            }
        }

        int right_max_prod = 0;
        int right_curr_prod = 1;
        
        if(nums.size() == 1)
        {
            return nums[0];
        }

        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i] == 0)
            {
                if(nums[i] > right_max_prod)
                {
                    right_max_prod = 0;
                }
                
                right_curr_prod = 1;
            }

            else
            {
                right_curr_prod = nums[i] * right_curr_prod;

                if(right_curr_prod > right_max_prod)
                {
                    right_max_prod = right_curr_prod;
                }
            }
        }

        if(left_max_prod > right_max_prod)
        {
            return left_max_prod;
        }

        return right_max_prod;   
    }
};
