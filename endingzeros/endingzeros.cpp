#include <iostream>
class Solution {
 public:
    // param n : description of n
    // return: description of return
    long long trailingZeros(long long n) {
      int count5 = 0;
      for(int i=5;i<=n;i=i+5)
      {
        int j = i;
        while(j!= 0 && j%5 == 0)
        {
          count5++;
          j = j/5;
        }
      }
      return count5;
    }
  public:
    long long trailingZerosOpt(long long n)
    {
      int count5 = 0;
      while(n/5>0)
      {
          count5+= n/5;
          n /=5;
      }
      return count5;
    }
};
int main (int argc, char* argv[])
{
  Solution endingzeros = Solution();
  std::cout<<endingzeros.trailingZeros(11)<<std::endl;
  std::cout<<endingzeros.trailingZerosOpt(11)<<std::endl;
}
