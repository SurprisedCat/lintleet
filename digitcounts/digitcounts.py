class Solution:
    # @param k & n  two integer
    # @return ans a integer
    def digitCounts(self, k, n):
        digit = 0
        for i in range(n+1):
            j = i
            while True:
                if j%10 == k:
                    digit+=1
                j /= 10
                if j == 0:
                    break
        return digit

if __name__ == "__main__":
    test = Solution()
    print(test.digitCounts(0,12))
