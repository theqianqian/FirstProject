mark=float(input('请输入你的成绩'))
if mark<0 or mark>150:
    print('小黑子有没有树枝，建议荔枝两年半后再来')
elif mark>=85:
    print('优秀')
elif mark>=70:
    print('良好')
elif mark>=60:
    print('及格')
else:
    print('不合格')    
    while True:
        a=input('是否重考？（填是或否）')
        if a=='是':
            mark=float(input('请输入你的成绩'))
            if mark<0 or mark>150:
                print('小黑子有没有树枝，建议荔枝两年半后再来')
                break
            elif mark>=85:
                print('优秀')
                break
            elif mark>=70:
                print('良好')
                break
            elif mark>=60:
                print('及格')
                break
            else:
                print('不合格')
        else:
            b=input('确定吗？（填确定或不确定）')
            if b=='不确定':
                if a=='是':
                    mark=float(input('请输入你的成绩'))
                    if mark<0 or mark>150:
                        print('小黑子有没有树枝，建议荔枝两年半后再来')
                        break
                    elif mark>=85:
                        print('优秀')
                        break
                    elif mark>=70:
                        print('良好')
                        break
                    elif mark>=60:
                        print('及格')
                        break
                    else:
                        print('不合格')
            else:
                print('小黑子一点都不荔枝!!!')
                break
