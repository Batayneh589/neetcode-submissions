class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long min =1 ,max =-1,mid=0,high=0,c=0;
        for(int i =0 ;i<piles.size();i++)// we are getting the max baby!
        {
            if(piles[i]>max){
                max=piles[i];
            }
        }
        if(piles.size()==h) // we are cooked
        {
            return max;
        }
        high=max;
       //float t =0;
        while(min<high){
             mid = (min+high)/2;
             //t=mid
            c=0;
            for(int i =0 ;i<piles.size();i++){
                c+=ceil(piles[i]/double(mid));

            }
             if(c<=h){
                high=mid;
            }
        /*  else  if(c==h){
                high=mid;
            }*/
            else if(c>h){
                min=mid+1;
            }
            
        }
        return (int)min;

    }
};
