n,m = map(int, raw_input().split())
array = list()
array = map(int, raw_input().split())
left = array[:n-m] #注意是左闭右开，取不到下标n-m
right = array[n-m:]
ans = right + left
for i in range(n):
	print ans[i], 

#bingo，终于找到了原因，就是因为加了注释就会返回非零

'''
1、用，解决了python输出换行的问题，但是如何保证最后一个没有多余空格
	for i in range(n-1):
		print ans[i], 
	print ans[n-1]
	这样先输出前n-1个再单独输出最后一个？这样最后会多一个回车？
2、其次不能在循环中用raw_input，不然每次回车结束，要n次输入
	for i in range(n):
		temp = int(raw_input())
		array.append(temp)
	这是因为python默认回车是结束符
	如果设置空格是结束符这种输入方式应该就可以了
	stopword = ' '
3、答案自己测试正确，但是PAT提交总“是返回非零”，因为没有像C语言return 0？
	但是封装成一个类然后调用函数也还是提示“返回非零”
	而且之前有的题目也是直接提交并没有用类封装可以通过。

'''

