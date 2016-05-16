string = raw_input()
a = raw_input()
a = a.split(" ")
#print a
#print a
#print string
no = int(a[0])
#print no
no1 = no+1
string = string[:no]+a[1]+string[no1:]
print string
