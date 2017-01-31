import sys

class Solution(object):
	def staircase(self,n):
		
		for i in range(0,n):
			for j in range(0,n):
				if n-j-1>i:
					sys.stdout.write(" ")
				else:
					sys.stdout.write("#")
			sys.stdout.write("\n")

def main():
	num = input("Enter number of steps: ")
	sol = Solution()
	sol.staircase(num)

main()
