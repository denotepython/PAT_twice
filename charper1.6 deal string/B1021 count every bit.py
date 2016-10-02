a = raw_input()
length = len(a)
count = [0] * 10
for i in range(length):
	count[int(a[i])] += 1
for i in range(10):
	if count[i] != 0:
		print "%d:%d" % (i,count[i])
#这就是python强大的地方，只要8行就处理了