class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int n=matrix.size();
        int m=matrix[0].size();
        
        int startingRow =0;
        int startingCol=0;
        int endingRow=n-1;
        int endingCol=m-1;
        
        int count=0;
        int total=n*m;
        
        while(count<total){
            for(int i=startingCol; count<total && i<=endingCol;i++ && i<m){
                res.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            for(int i=startingRow; count<total && i<=endingRow;i++ && i<n){
                res.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            for(int i=endingCol; count<total && i>=startingCol;i-- && i<m){
                res.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            for(int i=endingRow; count<total && i>=startingRow;i-- && i<n){
                res.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return res;
    }
};