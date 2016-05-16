
a = int(raw_input())
b = raw_input().split()

#print b
b.sort()
b.reverse()
max_value = max(b)
for i in b:
    #print i
    if(i < max_value):
        print i
        break



#Any better solutions please update here
