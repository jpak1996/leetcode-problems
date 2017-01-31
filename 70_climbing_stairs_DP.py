class Solution(object):
    def climbStairs(self, n):
        if n==1:
            return 1
        if n==2:
            return 2

        beforebefore = 1
        before = 2
        current = 0

        for x in range(2,n):
            current = before + beforebefore
            beforebefore = before
            before = current

        return current
#   return self.climbStairs(n - 1) + self.climbStairs(n - 2)


def main():
    n = input("Enter an integer.\n")
    sol = Solution();
    res = sol.climbStairs(n)
    print res

main()
