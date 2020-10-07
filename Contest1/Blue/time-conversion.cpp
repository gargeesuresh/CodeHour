#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string res=s.substr(0,8);
    //cout<<s.substr(1);
    
    if (s[8]=='P'){
        if (s.substr(0,2)=="12"){
                return res;
            }
        
        string in=s.substr(0,2);
        int ti;
        ti=stoi(in);
        ti=ti+12;
        in=to_string(ti);
        res[0]=in[0];
        res[1]=in[1];
        return res;
    }
        
        
            if (s.substr(0,2)=="12"){
                
                res[0]='0';
                res[1]='0';
                return res;
            }
      
        
       
    
   return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

