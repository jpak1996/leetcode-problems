import sys

class Solution(object):
	def staircase(self,n):
		
		for i in range(0,n):
			for j in range(0,n):
				if j <= i :
					sys.stdout.write("#")
			sys.stdout.write("\n")
def main():
	num = input("Enter number of steps: ")
	sol = Solution()
	sol.staircase(num)

main()
