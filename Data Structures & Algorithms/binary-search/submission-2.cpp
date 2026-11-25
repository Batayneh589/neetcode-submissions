class Solution {
public:
    int help(vector<int>&nums , int low , int  high,int &key){
if(low>=high){
    if(nums[low]==key){
        return low;
    }
    return -1;
}
int mid = (low+high)/2;
 if(nums[mid]==key){
    return mid;
}
else if(nums[mid]>key){
    return help(nums,low,mid-1,key );
}
else {
 return help(nums,mid+1,high,key );
}

    }
    int search(vector<int>& nums, int target) {
        return help(nums,0,nums.size()-1,target);
    }
};
