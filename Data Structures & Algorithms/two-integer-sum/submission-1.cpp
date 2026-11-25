#include<vector>
#include<algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair<int , int >> arr;
        for(int i =0 ;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        std::sort(arr.begin(),arr.end());
    int i1=0,i2=(arr.size()-1);
      while(i1!=i2){
        if(arr[i1].first+arr[i2].first==target){
            vector <int>returned;
            returned.push_back(arr[i1].second);
            returned.push_back(arr[i2].second);
            sort(returned.begin(),returned.end());
            return returned;

        }
        else if(arr[i2].first+arr[i1].first>target){
            i2--;
        }
        else{
            i1++;
        }
      }
    }
};
