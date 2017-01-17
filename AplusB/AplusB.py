class solution:
    def aplusb(self,a,b):
        while True:
            sum = a^b;
            carry = (a&b)<<1;
            if carry == 0:
                break
        return sum
if __name__ == '__main__':
    test = solution()
    print(test.aplusb(3,4))
