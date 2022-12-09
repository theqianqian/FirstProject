import turtle as a
a.shape('turtle')
b=input('请输入一个背景颜色（如：黑、黄、红总共可选8种）')
c=input('请输入一个画笔颜色（如：黑、黄、红总共可选8种）')
d=input('请输入画笔粗细：')
a.width(str(d))
if b==str('黑'):
    a.bgcolor('black')
elif b==str('红'):
    a.bgcolor('red')
elif b==str('橙'):
    a.bgcolor('orange')
elif b==str('黄'):
    a.bgcolor('yellow')
elif b==str('绿'):
    a.bgcolor('green')
elif b==str('蓝'):
    a.bgcolor('blue')
elif b==str('靛') or b==str('青'):
    a.bgcolor('cyan')
elif b==str('白'):
    a.bgcolor('white')
if b==str('紫'):
    a.bgcolor('purple')
if c==str('黑'):
    a.pencolor('black')
elif c==str('红'):
    a.pencolor('red')
elif c==str('橙'):
    a.pencolor('orange')
elif c==str('黄'):
    a.pencolor('yellow')
elif c==str('绿'):
    a.pencolor('green')
elif c==str('蓝'):
    a.pencolor('blue')
elif c==str('靛') or c==str('青'):
    a.pencolor('cyan')
if c==str('紫'):
    a.pencolor('purple')
elif c==str('白'):
    a.pencolor('white')

while True:
    e=int(input('画正几边形？（回答数字即可，要>=3）'))
    if e>3 or e==3:
        break#结束循环

f=int(180-180*(e-2)/e)
for i in range(e):
    a.forward(180)
    a.right(f)
    
