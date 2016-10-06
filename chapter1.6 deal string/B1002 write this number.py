a = raw_input()
length = len(a)
temp = 0
num = ["ling" ,"yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"]
for i in range(length):
	temp += int(a[i])
bai = temp / 100
shi = (temp % 100) / 10
ge = (temp % 100) % 10
if (bai != 0):
	print num[bai],num[shi],num[ge]
else:
	if(shi != 0):
		print num[shi],num[ge]
	else:
		print num[ge]

#1234567890987654321123456789
