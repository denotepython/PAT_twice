#问题在于中间会又缺省项，记为0
#起始项的次数如何确定？最高次的次数不确定——先全部读入再reverse？这样会有太多的0
#用a[e] = k来记录，次数正好也是12345，和下标一一对应，可以取巧
temp = [0] * 2002
index = [0] * 1001
coefficient = [0] * 1001
new = [0] * 1001

temp = map(int, raw_input().split())
length = len(temp)
i = 0
count = 0
while i < length:
	coefficient[count] = temp[i]
	index[count] = temp[i+1]
	new[count] = coefficient[count] * index[count]
	index[count] -= 1
	if i != length - 2:
		if index[count] >= 0:
			print new[count],index[count],
	else:
		if index[count] >= 0:
			print new[count],index[count]
	i += 2
	count += 1



#自己测试结果正确，但是就是通不过


