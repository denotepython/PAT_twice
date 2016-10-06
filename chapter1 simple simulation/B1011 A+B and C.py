n = int(raw_input()) #raw_input函数输入的是字符串
for i in range(n):
	a,b,c = map(int, raw_input().split()) #字符串的split方法用来将字符串分割成序列
	if a + b > c:
		print "Case #%d: true" % (i + 1)
	else:
		print "Case #%d: false" % (i + 1)

#用python解决这种题目好处就是不用考虑溢出（64位机器64位），对于A1065的2^64情况也完全适用
#甚至更大直接用long长整型，表示“无限大”
'''
掌握python的格式化输入和输出！！！
			n = int(raw_input()) 
			for i in range(n):
				a,b,c = map(int, raw_input().split()) 
			这种输入方式要熟之又熟！
	输出用%分隔，多个就用括号括起来逗号隔开
		比如：print "%02d:%02d:%02d" % (h, m, s)

这是用python刷题的前提！！！
如果想不换行，最后加,
'''