k = int(raw_input())
N = 54
char = ['S','H','C','D','J']
start = range(1,N+1) #快速生成递增的一个列表
start = [0] + start
end = [0] * (N + 1)#快速生成相同元素
next = [0] * N
next = map(int, raw_input().split())
next = [0] + next

for i in range(k):
	for j in range(1, N + 1):
		end[next[j]] = start[j] #难点所在
	start = end
for i in range(N):
	print "%c%d" % (char[start[i+1] / 13], start[i+1] % 13 + 1),

'''第一次循环正确，但是为什么一进入第二次循环就乱了？明明在循环结束输出了一下
start是正确的，然后进入第二次循环，输出start[j]就错了？？？？'''