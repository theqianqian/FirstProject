print('快乐随机数，你值的拥有')
a=input('开始？(填是或否)')
if a==str('是'):
    n=int(input('请输入一个整数（n的值）'))
    import random
    a=random.random()
    b=random.randint(100,200)
    c=random.randrange(100,201,2)
    d=a+10
    e=random.randrange(3,n+1,3)
    print('10~11的任意小数'+str(d))
    print('100~200的任意整数'+str(b))
    print('100~200的偶数'+str(c))
    print('1~n中3的倍数'+str(e))
