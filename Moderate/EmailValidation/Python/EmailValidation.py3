import sys
import re

#email format guidelines:
#  local: letters,numbers,+,-,. OR anything between 2 quotation (") marks
#  local portion followed by one and only one @ symbol
#  domain: letters,numbers,.,- followed by one '.' and a second level domain

def validate(line):
   isValid = re.match(r'^(([\w\.\+-]+)|(".*"))@[\w\.-]+\.([a-z]){3}$', line)
   if isValid:
      return 'true'
   return 'false'

def main():
   lines = open(sys.argv[1], 'r')
   content = lines.readlines()
   for i in range(len(content)):
      line = content[i]
      print(validate(line))

main()
