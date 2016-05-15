# Enter your code here. Read input from STDIN. Print output to STDOUT
a = int(raw_input())

t = tuple(int(x.strip()) for x in raw_input().split())
print hash(t)
