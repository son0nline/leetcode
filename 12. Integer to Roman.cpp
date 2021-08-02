#include <iostream>
#include <string>

using namespace std;

char GetValue(int num){
    //I, V, X, L, C, D, M        
    switch(num){
        case 1: return 'I';break;
        
        case 5: return 'V';break;
            
        case 10: return 'X';break;
        case 50: return 'L';break;
            
        case 100: return 'C';break;
        case 500: return 'D';break;
        
        case 1000: return 'M';break;             
    }        
    return '\0';
}
string intToRoman(int num) {
    std::string str = "";
    int temp;
    
    int lsRoman [13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    

    for(int i = 0; i < 13; i++){        
        temp = num/lsRoman[i];
        if(temp > 0) {
            
            if(lsRoman[i] % 9 == 0) {
                str += (string(1,GetValue(lsRoman[i+3])) + string(1,GetValue(lsRoman[i-1])));
            }
            else if(lsRoman[i] == 400||lsRoman[i] == 40||lsRoman[i] == 4){
                str += (string(1,GetValue(lsRoman[i+1])) + string(1,GetValue(lsRoman[i-1])));
            }
            else
            {
                str += string(temp,GetValue(lsRoman[i]));
            }            
        }
        num = num % lsRoman[i];
    }
    
    cout<<"\nKQ: "<<str<<endl;
    return str;        
}

int main()
{
    intToRoman(3999);
    return 0;
}


