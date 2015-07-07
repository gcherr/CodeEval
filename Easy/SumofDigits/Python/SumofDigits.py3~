import sys

def sum(base):
   if base == 0:
      return 0
   else:
      return (base % 10) + sum(int(base / 10))

def main():
   lines = open(sys.argv[1], 'r')
   content = lines.readlines()
   for i in range (len (content)):
      base = content[i].rstrip('\n')
      print(sum(int(base)))

main()