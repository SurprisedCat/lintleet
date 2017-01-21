#include <iostream>
class Solution {
public:
    /*
     * param k : As description.
     * param n : As description.
     * return: How many k's between 0 and n.
     */
    int digitCounts(int k, int n) {
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

int main(int argc, char* argv[])
{
	Solution test;
	std::cout<<test.digitCounts(0,12)<<std::endl;
	return 0;
}
