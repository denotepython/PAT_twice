#python把字母转化为acsii码是ord()
#知道这一点后对于C++中str[i] - '0'的处理也有对应的方法了
#得到14分，此时用python效率不是很高，但是找到了两个点
week_array = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]
s = [] * 4
l = [] * 4
for i in range(4):
	s.append(raw_input()) #必须用append添加而不能赋值
	l.append(len(s[i]))

for i in range(min(l[0], l[1])):
	if(s[0][i] == s[1][i]):  #这样s[0][i] 可以直接访问一个char
		if(s[0][i] >= 'A' and s[0][i] <= 'G'):
			count = i
			week = s[0][i]
			week_num = ord(week) - ord('A')
			print week_array[week_num],
			break
for i in range(count + 1,min(l[0], l[1])):
	if(s[0][i] == s[1][i]):
		if(s[0][i] >= 'A' and s[0][i] <= 'N'):
			hour = s[0][i]
			hour_num = ord(hour) - ord('A') + 10
			break
		if(s[0][i] >= '0' and s[0][i] <= '9'):
			hour = s[0][i]
			hour_num = ord(hour) - ord('0')
			break
for i in range(min(l[2], l[3])):
	if(s[2][i] == s[3][i]):
		if(s[2][i] >= 'a' and s[2][i] <= 'z') or (s[2][i] >= 'A' and s[2][i] <= 'Z'):
			minu = i
			break

print "%d:%02d" % (hour_num, minu)
					
# 3485djDkxh4hhGE
# 2984akDfkkkkggEdsb
# s&hgsfdk
# d&Hyscvnm
