import sys
a, b = map(list, raw_input().split())
rel = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K']
a.reverse() #对于字符串的反转不能用reverse
b.reverse()
c = []
lena = len(a)
lenb = len(b)
if lena < lenb:
	for i in range(lenb - lena):
		a.append('0')
if lenb < lena:
	for i in range(lena - lenb):
		b.append('0')
lenmax = max(lena, lenb)
for i in range(lenmax):
	if(i % 2 == 0): #题目中的奇数位对应这里的偶数位
		c.append(rel[(int(a[i]) + int(b[i])) % 13])
	else:
		if(int(b[i]) - int(a[i]) < 0):
			c.append(str(int(b[i]) - int(a[i]) + 10))
		else:
			c.append(str(int(b[i]) - int(a[i])))
c.reverse()
for i in range(lenmax):
	sys.stdout.write(c[i])

#1234567 368782971

#16分，两个case没通过  因为默认了a长度小于b，a>b的情况没有考虑，满分
#奇了怪了，什么都没改提交就是返回非零。好像是加了注释的原因，删了注释过后就对了

'''
字符串类型也是不可变的，只能赋值给一个新的字符串
'''
# import sys
# a, b = map(str, raw_input().split())
# rel = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K']
# a = a[::-1] #对于字符串的反转不能用reverse
# b = b[::-1]
# lena = len(a)
# lenb = len(b)
# c = []
# for i in range(lenb):
# 	if(i < lena):
# 		if(i % 2 == 0): #题目中的奇数位对应这里的偶数位
# 			c.append(rel[(int(a[i]) + int(b[i])) % 13])
# 		else:
# 			if(int(b[i]) - int(a[i]) < 0):
# 				c.append(str(int(b[i]) - int(a[i]) + 10))
# 			else:
# 				c.append(str(int(b[i]) - int(a[i])))
# 	else:	
# 		c.append(b[i])		
# c.reverse()
# for i in range(lenb):
# 	sys.stdout.write(c[i])


