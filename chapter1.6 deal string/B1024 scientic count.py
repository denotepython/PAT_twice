import sys
s = raw_input()
length = len(s)
if(s[0] == '-'):
	sys.stdout.write("-")
for i in range(1,length):
	if s[i] == '.':
		index1 = i
	if s[i] == 'E':
		index2 = i
s1 = s[1:index1] + s[index1 + 1:index2]
s1_temp = int(s1)
s2 = s[index2 + 1]
s3 = s[index2 + 2: length + 1]
s3_temp = int(s3)

if(s2 == '-'):
	sys.stdout.write("0.")
	for i in range(s3_temp - 1):
		sys.stdout.write("0")
	sys.stdout.write(s1)
if(s2 == '+'):
	if(s3_temp < index2 - 3):
		sys.stdout.write(s1[0:s3_temp + 1])
		sys.stdout.write(".")
		sys.stdout.write(s1[s3_temp + 1:len(s1)])
	elif(s3_temp == index2 - 3):
		sys.stdout.write(s1)
	elif(s3_temp > index2 - 3):
		sys.stdout.write(s1)
		for i in range(s3_temp - index2 + 3):
			sys.stdout.write('0')
#+1.23400E-03
#-3.1415926E+4
#-1.2E+10

#掌握了python实现连续输出的办法
#但是这个科学记数法规则确实比较复杂，不看答案做不出来


