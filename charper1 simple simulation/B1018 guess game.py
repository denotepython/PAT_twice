n = int(raw_input())
counta = [0,0,0]
countb = [0,0,0]
tempa = [0,0,0]
tempb = [0,0,0]
for i in range(n):
	x, y = map(str, raw_input().split())
	if x == 'B' and y == 'B':
		counta[1] += 1
		countb[1] += 1
	if x == 'B' and y == 'C':
		counta[0] += 1
		countb[2] += 1
		tempa[0] += 1
	if x == 'B' and y == 'J':
		counta[2] += 1
		countb[0] += 1
		tempb[2] += 1

	if x == 'C' and y == 'B':
		counta[2] += 1
		countb[0] += 1
		tempb[0] += 1
	if x == 'C' and y == 'C':
		counta[1] += 1
		countb[1] += 1
	if x == 'C' and y == 'J':
		counta[0] += 1
		countb[2] += 1
		tempa[1] += 1

	if x == 'J' and y == 'B':
		counta[0] += 1
		countb[2] += 1
		tempa[2] += 1
	if x == 'J' and y == 'C':
		counta[2] += 1
		countb[0] += 1
		tempb[1] + 1
	if x == 'J' and y == 'J':
		counta[1] += 1
		countb[1] += 1

print counta[0],counta[1],counta[2]
print countb[0],countb[1],countb[2]

if tempa[0] >= tempa[1] and tempa[0] >= tempa[2]:
	print 'B',
if tempa[1] > tempa[0] and tempa[1] >= tempa[2]:
	print 'C',
if tempa[2] > tempa[0] and tempa[2] > tempa[1]:
	print 'J',

if tempb[0] >= tempb[1] and tempb[0] >= tempb[2]:
	print 'B',
if tempb[1] > tempb[0] and tempb[1] >= tempb[2]:
	print 'C',
if tempb[2] > tempb[0] and tempb[2] > tempb[1]:
	print 'J',

'''
得到19分，有一处运行超时
	因为这里只有三种手势，所以总共也就9种情况，用枚举的方法可以
	但是不具有普遍性
第二个难点是处理相等的情况，这里正好B克C，C克J，因为条件判断的时候
   对于B赢的情况，大于等于都满足，而J赢的情况，只有全部大于。
   所以呈现 >= >=
   			>  >=
   			>  >
   	这样一个梯状
'''