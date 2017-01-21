class Solution {
    /*
     * param k : As description.
     * param n : As description.
     * return: An integer denote the count of digit k in 1..n
     */
    public int digitCounts(int k, int n) {
        int digit = 0;
        for(int i = 0; i <= n; i++){
	    	int j = i;
	    	do{
	    		if(j % 10 == k)
	    		{
	    			digit++;
	    		}
	    		j /= 10;
	    	}while(j > 0);
		}
		return digit++;
    }
};

public class digitcounts{
    public static void main(String argv[])
    {
        Solution test = new Solution();
        System.out.println(test.digitCounts(0,12));
    }
}
