# Enter your code here. Read input from STDIN. Print output to STDOUT
string = raw_input()
subs = raw_input()
count =0
for c in range(len(string)):
    if string[c:c+len(subs)] == subs:
        count += 1
print count
