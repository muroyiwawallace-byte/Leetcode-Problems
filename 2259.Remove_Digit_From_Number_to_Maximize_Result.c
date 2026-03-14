class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        max="0"
        for i in range(0,len(number)):
            if(number[i]==digit):
                temp=number[:i]+number[i+1:]
                if temp>max:
                    max=temp
#the character and after the character
        return max
        
