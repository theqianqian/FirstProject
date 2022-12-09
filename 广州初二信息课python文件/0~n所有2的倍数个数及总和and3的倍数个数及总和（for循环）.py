s=0
b=0
n=int(input('请输入一个数'))
for i in range(0,n+1,2):
    print('i='+str(i))
    s+=i
print('偶数总和='+ str(s))
for a in range(0,n+1,3):
    print('a='+str(a))
    b+=a
print("3的倍数和为" +str(b))
