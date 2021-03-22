#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#include <algorithm>    // std::sort

#include <vector> //vector
using namespace std;

#include <string> 

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
    			
            int inputlengt = s.length();
            
            vector<string> vStr(numRows);

            int rowIndex = 0;
            int direct = 1;
            for(int i = 0; i<inputlengt;i++){

                vStr[rowIndex].push_back(s[i]);

                rowIndex+=direct;
                if(rowIndex == numRows){
                    direct = -1;
                    rowIndex-=2;
                }
                
                if(rowIndex < 0){
                    direct = 1;
                    rowIndex = 1;
                }
            }

            string rs = "";
            for (int i = 0; i < vStr.size(); i++) {
                rs += vStr[i];
            }

            return rs;
    }
};

string zigzag(string input,int row){
	if(row == 1)
		return input;
		
	int inputlengt = input.length();
	int colLenght = (inputlengt/row) + (inputlengt%row);
	cout<<colLenght;
	
	vector<string> vStr(row);
	
//	for(int i = 0; i< row; i++)
//		vStr.push_back("");
		
	
	cout<<vStr.size();
	
	int rowIndex = 0;
	int direct = 1;
	for(int i = 0; i<inputlengt;i++ ){
		
		vStr[rowIndex].push_back(input[i]);
		
//		//cout<<input[i];
//		//strrs[rowIndex][colIndex] = input[i];
//		string &element = vStr.at(rowIndex);		
//		element = element+input[i];
//		//cout<<element;
//		
//		//vStr[rowIndex] = element; // dont need 
		
		rowIndex+=direct;
		if(rowIndex == row){
			direct = -1;
			rowIndex-=2;
		}
		if(rowIndex < 0){
			direct = 1;
			rowIndex = 1;
		}
			
	}
	
	cout<<"\n----------------\n";
	string rs = "";
	for (int i = 0; i < vStr.size(); i++) {
		cout << vStr[i]<<"\n"; 
		rs += vStr[i];
	}
	cout<<"\n----------------\n";
	
	return rs;
}

int main(){
	

    string rs =  zigzag("ABcdef",3);
    
    cout<<rs;
    
	return 0;
}

