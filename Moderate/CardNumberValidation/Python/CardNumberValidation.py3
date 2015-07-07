import sys

def isValid(num):
   if num % 10 == 0:
      return 1
   else:
      return 0

def computeSum(base):
   baseLen = len(base)
   sum = 0;
   for i in range(baseLen):
      currNum = int(base[baseLen-1-i])
      if i % 2 != 0 and currNum*2 > 9:
         sum += sumDoubleDig(currNum*2)
      elif i % 2 != 0:
         sum += currNum*2
      else:
         sum += currNum
   return sum

def sumDoubleDig(base):
   return (base % 10) + int(base / 10)

def main():
   lines = open(sys.argv[1], 'r')
   content = lines.readlines()
   for i in range (len(content)):
      base = content[i].rstrip('\n')
      base = base.replace(' ','')
      cardSum = computeSum(base)
      print(isValid(cardSum))

main()