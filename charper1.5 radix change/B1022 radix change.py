a, b, radix  = map(int, raw_input().split())
dec = a + b
ans = []
while dec != 0:
	left = dec % radix
	ans.append(left)
	dec /= radix
length = len(ans)
answer = 0
for i in range(length-1,-1, -1):
	answer = answer * 10 + ans[i]
print answer
	
