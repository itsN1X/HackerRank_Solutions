m = int(raw_input())
a = raw_input()
lis = a.split()
newlis = list(map(int, lis))
set_name1 = set(newlis)

n = int(raw_input())
b = raw_input()
lis_new = b.split()
newlis = list(map(int, lis_new))
set_name2 = set(newlis)

#newset = set_name1.union(set_name2)
newset = set_name1.difference(set_name2)
newset = newset.union(set_name2.difference(set_name1))
list_new = list(newset)
list_new.sort()
for i in list_new:
    print i
