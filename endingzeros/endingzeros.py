class Solution:
    # @param n a integer
    # @return ans a integer
    def trailingZeros(self, n):
        i = 0
        count5 = 0
        while i<=n:
            j=i
            while j>0 and j%5==0:
                count5+=1
                j/=5
            i+=5
        return count5
    def trailingZerosOpt(self, n):
        count5 = 0
        while n>0:
            count5+=n/5
            n/=5
        return count5

if __name__ == '__main__':
    test = Solution()
    print(test.trailingZerosOpt(11))
    print(test.trailingZeros(10))
