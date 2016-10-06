n = int(raw_input())
num = [0] * (n + 1)
test = [0] * (n + 1)
real = [0] * (n + 1)
for i in range(1, n + 1):
	num[i], test[i], real[i] = map(int, raw_input().split())
m = int(raw_input())
temp = [0] * n
temp = map(int, raw_input().split())
for i in range(m):
	for j in range(1,n+1):
		if test[j] == temp[i]:
			print num[j], real[j]
			
#虽然答案正确，通过case
#就是一个最简单的查询，但是这样没有建立一个对应关系，低效
#直接用C中的结构体更简单