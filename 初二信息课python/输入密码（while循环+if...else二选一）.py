print('注册账号:')
input('可填手机号或邮箱(甚至可以瞎填):')
print('possward（密码）：')
a=input(' ')
while True:
    b=input('确认密码：')
    if b==a:
        print('密码正确')
        break#结束循环
    else:
        print('密码错误')
