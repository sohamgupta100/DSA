class Solution {
public:
    int search(vector<int>& nums, int target)
    {   
        //pointer to the first index of array
        int left = 0;

        //pointer to the last index
        int right = nums.size() - 1;

        //pointer in the middle index wrt left and right
        // not set yet
        int mid = 0;

        //applying binary search
        while(left <= right)
        {
            mid = (left + right) / 2;

            if(nums[mid] == target)
            {
                return mid;
            }

            // if the left side is sorted
            if(nums[mid] >= nums[left])
            {
                if(target >= nums[left] && target <= nums[mid])
                {
                    right = mid - 1;
                }

                else
                {
                    left = mid + 1;
                }
            }

            // if right side is sorted
            else
            {
                if(target >= nums[mid] && target <= nums[right])
                {
                    left = mid + 1;
                }

                else
                {
                    right = mid - 1;
                }
            }
        }

        // return -1 if the number/target is not present in the array
        return -1;
    }
};
