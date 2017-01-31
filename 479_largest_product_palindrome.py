#import time
class Solution:
    def largestPalindrome(self, n):
        """
        :type n: int
        :rtype: int
        """
        
        
        """for x in str_result:
            if(str_result[x] != str_result[len_result-x]):
                break
            if(x == len_result-x):
                break
        """
        self.n = n
        final_result = 0
        counter = 0
        
        input_1 = (10 ** self.n) - 1
        input_2 = input_1
        while(counter>-1):
            
            
            
            result = input_1 * input_2
            str_result = str(result)
            rev_result = reversed(str_result)
            
            if(list(rev_result)==list(str_result)):
                return result
            else:
                input_2 = input_2 - 1

            print result
            #time.sleep(1)

def main():
    number = raw_input()
    n_number = int(number)
    SO = Solution()
    print(SO.largestPalindrome(n_number))

main()