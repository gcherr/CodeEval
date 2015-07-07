import sys

def checkRepeat(base):
   for i in range(len(base)):
      if base.count(base[i]) == 1:
         return base[i]
   return ""

def main():
   lines = open(sys.argv[1], 'r')
   content = lines.readlines()
   for i in range (len(content)):
      base = content[i].rstrip('\n')
      print(checkRepeat(base))

main()