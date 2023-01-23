/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector<vector<int>> matrix = {{1,2,3,5,5},{4,5,5,6,7},{7,8,5,9,0},{7,5,8,9,0},{7,5,8,9,0}};
    //vector<vector<int>> matrix = {{1,2,3,5},{4,5,5,6},{7,8,5,9},{7,5,8,9}};
    vector<vector<int>> matrix = {  {1,2,3,4,5,6},
                                    {7,8,9,10,11,12},
                                    {13,14,15,16,17,18},
                                    {19,20,21,22,23,24},
                                    {25,26,27,28,29,30},
                                    {31,32,33,34,35,36}};
    
    int n = matrix[0].size();        
    int step = n-1;
    int stepRow = n/2;
    int startRowIdx = 0;
    int nextIdx = 0;
    int maxCrRowLen = n;
    
    int swapvalue = 0;
    
    for(int i = 0; i < stepRow; i++){
        maxCrRowLen = n - (i*2) ;
        startRowIdx += i;
        step = (maxCrRowLen-1);
        cout<<endl<<"Row:"<<i;
        
        cout<<" Start at:"<<i;
        cout<<" step:"<<step;
        cout<<" maxCrRowLen:"<<maxCrRowLen;
        
        int crIdx = i;
        do{
            cout<<endl<<"\tcrIdx: "<<crIdx;
            
            
            nextIdx = crIdx+step;
            cout<<" nextIdx:"<<nextIdx;
            
            
            int crRow = i;
            int clCol = crIdx;
            
            cout<<endl<<"\t\tvalue: "<< matrix[crRow][clCol];
            //cout<<endl<<"\t\tvalue: "<< matrix[i][nextIdx];
            
            crIdx++;
        } while(crIdx <= (maxCrRowLen-1));
        
    }
    
    return 0;
}
