public class endingzeros{
  public static void main(String argv[])
  {
    Solution test = new Solution();
    System.out.println(test.trailingZeros(11));
    System.out.println(test.trailingZerosOpt(11));
  }
}
class Solution {
    /*
     * param n: As desciption
     * return: An integer, denote the number of trailing zeros in n!
     */
    public long trailingZeros(long n) {
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

    public long trailingZerosOpt(long n)
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
