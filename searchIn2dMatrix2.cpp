class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        int rowIndex=0;
        int colIndex=m-1;
        
       // int mid=start+(end-start)/2;
        
        while(rowIndex<n && colIndex>=0){
            int value=matrix[rowIndex][colIndex];
            if(value==target) return 1;
            if(value<target) rowIndex++;
            else colIndex--;
        }
        return 0;
    }
};