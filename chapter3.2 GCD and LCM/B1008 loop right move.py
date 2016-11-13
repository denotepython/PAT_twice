n, m = map(int, raw_input().split())
s = []
s = map(int, raw_input().split())
a = s[0:n-m]
b = s[n-m:n]
a.reverse()
b.reverse()
lenb = len(b)
for i in range(0,lenb):
	a.append(b[i])
a.reverse()
lena = len(a)
for i in range(0,lena):
	print a[i],