'''
版本一
n = int(raw_input())
counta = 0
countb = 0
for i in range(n):
	a_say, a_fact, b_say, b_fact = map(int, raw_input().split())
	if a_fact == a_say + b_say :
		counta += 1
	if b_fact == a_say + b_say:
		countb += 1
print countb, counta
'''

#有10分错误：题意理解错误
#一是算喝酒的数目，输的数目而不是赢得数目
#二是同赢同输都不计入

n = int(raw_input())
counta = 0
countb = 0
for i in range(n):
	a_say, a_fact, b_say, b_fact = map(int, raw_input().split())
	if a_fact == a_say + b_say and b_fact != a_say + b_say:
		countb += 1
	if b_fact == a_say + b_say and a_fact != a_say + b_say:
		counta += 1
print counta, countb