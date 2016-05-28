string = raw_input()

count_alnum =0
count_isalpha =0
count_isdigit =0
count_islower =0
count_isupper = 0

for i in string:
    if(i.isalnum()):
        count_alnum+=1
    if(i.isalpha()):
        count_isalpha+=1
    if(i.isdigit()):
        count_isdigit+=1
    if(i.islower()):
        count_islower+=1
    if(i.isupper()):
        count_isupper+=1

if(count_alnum >=1 ):
    print "True"
else:
    print "False"
if(count_isalpha >=1 ):
    print "True"
else:
    print "False"
if(count_isdigit >=1 ):
    print "True"
else:
    print "False"
if(count_islower >=1 ):
    print "True"
else:
    print "False"
if(count_isupper >=1 ):
    print "True"
else:
    print "False"
