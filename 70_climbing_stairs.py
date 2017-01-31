class Solution(object):
    def climbStairs(self, n):
        if n==1:
            return 1
        if n==2:
            return 2
        else:
            return self.climbStairs(n - 1) + self.climbStairs(n - 2)


def main():
    n = input("Enter an integer.\n")
    sol = Solution();
    res = sol.climbStairs(n)
    print res

main()
