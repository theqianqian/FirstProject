import random
target=random.randint(1,100)
while True:
    guest=float(input('猜数字(1~100内):'))
    if guest==target:
        print('恭喜你，猜对了！')
        break#结束循环
    elif guest>100 or guest<1:
        print('你干嘛~哎呦!小黑子有没有树枝!!!')
    elif guest>target+20:
        print('你猜的大了亿点点')
    elif guest>target:
        print('你猜的大了一点点')
    elif guest<target-20:
        print('你猜的小了亿点点')
    else:
        print('你猜的小了一点点')
print("你干嘛~哎呦!!!下次荔枝点")
print('游戏结束!!!')