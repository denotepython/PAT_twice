A, DA, B, DB = map(int, raw_input().split())
tempa = 0
tempb = 0
while A != 0:
	mod = A % 10
	A /= 10
	if mod == DA:
		tempa = tempa * 10 + DA
while B != 0:
	mod = B % 10
	B /= 10
	if mod == DB:
		tempb = tempb * 10 + DB
print tempa + tempb