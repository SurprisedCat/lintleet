#include <iostream>
class Solution {
    /*
     * param a: The first integer
     * param b: The second integer
     * return: The sum of a and b
     */
    public:
       int aplusb(int a, int b) {
        // write your code here, try to do it without arithmetic operators.
        int sum = 0;
        int carry = 0;
        do {
          sum = a ^ b;
          carry = (a & b)<<1;

          a = sum;
          b = carry;

        } while(carry!=0);
        return sum;
    }

};

int main ()
{
    Solution aplusb = Solution();
    int a,b;
    std::cin>>a;
    std::cin>>b;
    std::cout<<aplusb.aplusb(a,b)<<std::endl;
    return 0;
}
