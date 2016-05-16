# Enter your code here. Read input from STDIN. Print output to STDOUTno = int(raw_input())
students =[]
no = int(raw_input())
for i in range(0 , no):
    students.append([raw_input(),float(raw_input())])

#print students
second_highest = sorted(list(set([marks for name, marks in students])))[1]
#print second_highest

print('\n'.join([a for a,b in sorted(students) if b == second_highest]))


#Help from solution by https://www.hackerrank.com/gkeswani92
