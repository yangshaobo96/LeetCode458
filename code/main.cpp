#include <iostream>
#include <cmath>

using namespace std;
class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int time=minutesToTest/minutesToDie+1;
        double res=log(buckets)/log(time);
        if(res>(int)res) return (int)(res+1);
        return (int)res;
    }
};
int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    return 0;
}
