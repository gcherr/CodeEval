import sys
import math

def happyTest(base):
   sumHist = []
   while(base != 1):
      base = sum(base)
      sumHist.append(base)
      #print(sumHist)
      if sumHist.count(base) > 1:
         break
   if base == 1:
      return 1
   else:
      return 0

def sum(base):
   if base == 0:
      return 0
   else:
      return math.pow(base%10,2) + sum(int(base/10))

def main():
   lines = open(sys.argv[1], 'r')
   content = lines.readlines()
   for i in range (len (content)):
      #print("number length", len (content[i]))
      base = content[i].rstrip('\n')
      print(happyTest(int(base)))

main()