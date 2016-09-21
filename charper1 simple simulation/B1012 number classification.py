temp = list()
ans = [0,0,0,0,0]
a5 = list()
temp = map(int, raw_input().split())
n = temp[0]
count1 = 0
count2 = 0
for i in range(n):
	if temp[i+1] % 5 == 0:
		if temp[i+1] % 2 == 0:
			ans[0] += temp[i+1]
	if temp[i+1] % 5 == 1:
		count1 += 1
		if count1 % 2 == 1:
			ans[1] += temp[i+1]
		else:
			ans[1] -= temp[i+1]
	if temp[i+1] % 5 == 2:
		ans[2] += 1
	if temp[i+1] % 5 == 3:
		ans[3] += temp[i+1]
		count2 += 1
	if temp[i+1] % 5 == 4:
		a5.append(temp[i+1])
if count2 != 0:
	ans[3] = ans[3] / float(count2)
ans[4] = max(a5)
for i in range(4):
	if ans[i] == 0:
		print 'N',
	elif i == 3:
		print "%.1f" % ans[i],
	else:
		print ans[i],
if ans[4] == 0:
	print 'N'
else:
	print ans[4]
