class Solution {
public:
//trow means the trageted row <:
bool helper(vector<vector<int>>& matrix,int  l, int  h,int  trow,int  key,int  overload){
    int mid = (l+h)/2;
if(l>=h){
    if(matrix[trow][l]==key||matrix[trow][h]==key){
        return true;
    }
    return false;
}

else if(matrix[trow][mid]==key){
    return true;
}
else if(matrix[trow][mid]>=key)//goes left
{
return helper(matrix,l,mid-1,trow,key,0);
}
else //goes right
{
return helper(matrix,mid+1,h,trow,key,0);

}
}
bool helper(vector<vector<int>>& matrix,int  l, int h,int  coloums,int & key){
int mid= (h+l)/2;
if(l>=h){
    if(matrix[l][0]<=key&&matrix[h][coloums]>=key){
        //call the other function
       return helper(matrix,0,coloums,l,key,0);

    }
    return false;
}

 if(matrix[mid][0]<=key&&matrix[mid][coloums]>=key){
    if(matrix[mid][0]==key||matrix[mid][coloums]==key){
        return true;
    }
    else {
        //call the other function
       return helper(matrix,0,coloums,mid,key,0);

    }
}
else if(matrix[mid][0]>key)//go up
{
   return helper(matrix,l,mid-1,coloums,key);
}
else //go down
{
  return  helper(matrix,mid+1,h,coloums,key);
}
}

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        return helper(matrix,0,matrix.size()-1,matrix[0].size()-1,target);
    }
};
