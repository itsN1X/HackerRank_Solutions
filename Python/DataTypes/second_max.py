


c = int(raw_input())


a=map(int,raw_input().split(" "))

b=max(a)

while max(a)==b :
    a.remove(b)
print max(a)



#Any better solutions please update here


'''

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

'''
