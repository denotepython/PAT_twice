a = raw_input()
b = raw_input()
lena = len(a)
lenb = len(b)
ans = []
i = 0
j = 0
while i < lena and j < lenb:
	if(a[i] == b[j]):
		i += 1
		j += 1
	else:
		ans.append(a[i])
		i += 1

ans = set(ans)
ans = str(ans)
ans = ans.upper()
ans
	


