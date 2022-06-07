/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
          vector<vector<int>> res(numRows);
        
        //fill elements at every level
        for(int i=0; i<numRows; i++)
        {
            res[i].resize(i+1);     //resize a level(i+1)
            
            //fill corner element value = 1
            res[i][0] = res[i][i] = 1;
            
            //fill middle element = sum of i and (i-1) element of previous row
            for(int j=1; j<i; j++)
            {
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
            
        }
        
        return res;
        
    }
        
        
    
};
