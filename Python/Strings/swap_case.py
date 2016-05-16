# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
string = raw_input()
for i in string:
    if(i.islower()):
        sys.stdout.write(i.upper())
       #http://stackoverflow.com/questions/11266068/python-avoid-new-line-with-print-command
       #print i.upper()
    else:
       #print i.lower()
        sys.stdout.write(i.lower())
