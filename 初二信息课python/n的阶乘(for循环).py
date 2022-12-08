s=1
n=int(input('请输入一个数'))
for i in range(1,n+1,1):
    s*=i
    print('i='+str(i))
print('此数的阶乘为'+str(s))
