public class AplusB
{
  public static void main(String args[])
  {
    Solutions aplusb = new Solutions();
    int result = aplusb.aplusb(4,5);
    System.out.println(result+"\n");
  }
}

class Solutions
{
  public int aplusb(int a, int b) {
    // write your code here, try to do it without arithmetic operators.
    int sum ,carry;
    do {
      sum = a ^ b;
      carry = (a & b)<<1;

      a = sum;
      b = carry;
    } while (carry!=0);
    return sum;
}

}
