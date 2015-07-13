import sys

def revPrint(base):
   words = base.split()
   for i in reversed(words):
      print(i,end=" ")
   print()

def main():
   lines = open(sys.argv[1], 'r')
   content = lines.readlines()
   for i in range (len(content)):
      base = content[i]
      revPrint(base)

main()
