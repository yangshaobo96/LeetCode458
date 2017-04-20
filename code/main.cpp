#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
class Solution {
public:
    vector<string> res;
    void f(vector<string> &s,int i,string tmp){
        if(i>=s.size()){
            res.push_back(tmp);
            return;
        }
        for(char j:s[i]){
            tmp.push_back(j);
            f(s,i+1,tmp);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string telephone[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits=="") return res;
        vector<string> s;
        for(char i:digits){
            if(i!=0x30&&i!=0x31){
                s.push_back(telephone[i-0x30]);
            }
        }
        f(s,0,string());
        return res;
    }
};
int main(int argc, char *argv[]){
    string s="23";
    Solution a;
    a.letterCombinations(s);
    return 0;
}
