vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>res;
    for(int i=0;i<mCols;i++){
        if(i&1){
            for(int j=nRows-1;j>=0;j--)
                res.push_back(arr[j][i]);
        }
        else{
            for(int j=0;j<nRows;j++)
               res.push_back(arr[j][i]);
        }
    }
    return res;
}