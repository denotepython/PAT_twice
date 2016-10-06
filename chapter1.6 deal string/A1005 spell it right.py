rel = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
a = raw_input()
length = len(a)
ans = 0
for i in range(length):
	ans += int(a[i])
ans = str(ans)
len2 = len(ans)
if len2 == 1:
	print rel[int(ans)]
elif len2 == 2:
	print rel[int(ans[0])], rel[int(ans[1])]
elif len2 == 3:
	print rel[int(ans[0])], rel[int(ans[1])], rel[int(ans[2])]

#满分