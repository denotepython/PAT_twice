# n = int(raw_input())
# a = [0] * n
# for i in range(n):
# 	a[i] = map(str, raw_input().split())
# 	a[i].reverse()
# count = 0
# for i in range(n-1):
# 	if(a[i][0] == a[i+1][0]):
# 		count += 1
# if(count == n - 1):
# 	print a[0][0]
# else:
# 	print "nai"
#4分，看来公共后缀可以是最后一个单词的一部分，不能这么简单处理
# 3
# I nyan~
# daf fanyan~
# afe nyan~


#满分
n = int(raw_input())
a = [0] * n
lenn = [0] * n
for i in range(n):
	a[i] = raw_input()
	a[i] = a[i][::-1]  #反转字符串
	lenn[i] = len(a[i])
suffix = a[0]
for i in range(1,n):
	temp = []
	for j in range(min(len(suffix), lenn[i])):
		if(suffix[j] == a[i][j]):
			temp.append(suffix[j])
		else:
			break
	suffix = '' #temp是list，要赋值给str，只能通过这种方式
	for k in range(len(temp)):
		suffix += temp[k]

suffix = suffix[::-1] #得到的结果要反转回去
if len(suffix) == 0:
	print "nai"
else:
	print suffix



