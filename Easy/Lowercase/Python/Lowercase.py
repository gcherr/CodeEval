import sys

def main():
    content = open(sys.argv[1], 'r').readlines()
    for i in range(len(content)):
       print(content[i].lower())

main();
