# import sys
# a, b = map(int, raw_input().split())
# ans = a + b
# def output(ans):
# 	temp = []
# 	if ans == 0:
# 		return 0
# 	elif ans < 0:
# 		temp.append('-')
# 		ans = -ans
# 	ans = str(ans)
# 	length = len(ans)
# 	k = length / 3
# 	left = length % 3
# 	for i in range(left):
# 		temp.append(ans[i])
# 	if left > 0:
# 		temp.append(',')
# 	for i in range(k):
# 		for j in range(3):
# 			index = 3 * i + left + j
# 			temp.append(ans[index])
# 		if i < k - 1:
# 			temp.append(',')
# 	return temp

# final = output(ans)
# if final == 0:
# 	print 0
# else:
# 	len1 = len(final)
# 	for i in range(len1):
# 		sys.stdout.write(final[i])
# #17分


#17分，
import sys
a, b = map(int, raw_input().split())
ans = a + b
if ans < 0:
  sys.stdout.write('-')
  ans = -ans
ans = str(ans)
length = len(ans)
k = length / 3
left = length % 3
for i in range(left):
  sys.stdout.write(ans[i])
if left > 0 and ans != '0': #要加上ans != '0' 否则对于0的情况输出错误 0，
  sys.stdout.write(',')
for i in range(k):
  for j in range(3):
    index = 3 * i + left + j
    sys.stdout.write(ans[index])
  if i < k - 1:
    sys.stdout.write(',')
