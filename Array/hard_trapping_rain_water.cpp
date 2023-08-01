class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n = height.size();

        int left_max = height[0];
        int right_max = height[n-1];

        int left_pos = 1;
        int right_pos = n-2;

        int water = 0;

        while(left_pos <= right_pos)
        {
            if (height[left_pos] >= left_max)
            {
                left_max = height[left_pos];
                left_pos++;
            }

            else if (height[right_pos] >= right_max)
            {
                right_max = height[right_pos];
                right_pos--;
            }

            else if (left_max <= right_max && left_max > height[left_pos])
            {
                water = water + left_max - height[left_pos];
                left_pos++;
            }

            else
            {
                water = water + right_max - height[right_pos];
                right_pos--;
            }

        }    

        return water;
    }
};
