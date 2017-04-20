#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string s=strs.back();
        strs.pop_back();
        int i=0;
        for(;i<s.length();++i){
            for(string j:strs){
                if(i>=j.length()||j[i]!=s[i]) return s.substr(0,i);
            }
        }
        if(i==s.length()) return s;
        return "";
    }
};
int main(int argc, char *argv[]){
    vector<string> s{"c","c"};
    Solution a;
    string res=a.longestCommonPrefix(s);
    return 0;
}
