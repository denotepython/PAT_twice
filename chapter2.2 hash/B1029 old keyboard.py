import sys
a = raw_input()
b = raw_input()
lena = len(a)
lenb = len(b)
ans = []
hashtable = [False] * 1000
i = 0
j = 0
while i < lena and j < lenb:
	if(a[i] == b[j]):
		i += 1
		j += 1
		hashtable[ord(a[i])] = True
	else:
		if hashtable[ord(a[i])] == True :
			ans.append(a[i])
			hashtable[ord(a[i])] = False
		i += 1

length = len(ans)		
for i in range(length):
	if(hashtable[ord(ans[i])] == False):
		if(ord(ans[i]) - ord('a') >= 0 and ord('z') - ord(ans[i]) >= 0):
			ans[i] = str(ord(ans[i]) - ord('a') + ord('A'))
		else:
			ans.append(a[i])
ans = "".join(ans)

for i in range(length):
	sys.stdout.write(ans[i])
