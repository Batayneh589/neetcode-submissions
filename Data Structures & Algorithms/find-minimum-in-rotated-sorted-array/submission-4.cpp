class Solution {
public:
    int findMin(vector<int> &nums) {
        int low=0, high=nums.size()-1 ,mid=0;
       /*if(nums[low]<nums[high]){
            return nums[low];
        }*/
        while(low<high){
             if(nums[low]<nums[high]){
            return nums[low];
        }
            mid = (high+low)/2;
            if(nums[mid]>=nums[low]){
                low = mid+1 ;
            }
            else if(nums[mid]<nums[low]){
                high = mid;
            }
           /* else if(mid==low){
                /*if(nums[low]){}
                else
                break;
            }*/
        }
        return nums[low];
    }
};
