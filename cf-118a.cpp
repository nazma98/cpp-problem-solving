#include <bits/stdc++.h> 
using namespace std;

int main(){
    string str, rslt="";
    cin>> str;
    int lenStr = str.size(), i;
    for ( i = 0; i < lenStr; i++)
    {
        if (str[i] != 'y' && str[i] != 'Y' && str[i] != 'a' &&  str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I'&& str[i] != 'O' && str[i] != 'U')
        {
            rslt += '.';
            
            rslt += tolower(str[i]);
        }
        
    }

    cout<<rslt<<endl;
    
    return 0;
}