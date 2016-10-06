c1,c2 = map(int, raw_input().split())
time = round((c2 - c1) / 100.0)
h = time / 3600
time %= 3600
m = time / 60
time %= 60
s = time
print "%02d:%02d:%02d" % (h,m,s)

#9分的坑点：考虑四舍五入的情况 用round函数