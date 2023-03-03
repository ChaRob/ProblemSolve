w,h=map(int,input().split())
p,q=map(int,input().split())
t=int(input())
t_w,t_h=t%(2*w),t%(2*h)
if t_w+p>w:
    x=2*w-(t_w+p) if 2*w-(t_w+p)>=0 else (t_w+p)-2*w
else:
    x=t_w+p
if t_h+q>h:
    y=2*h-(t_h+q) if 2*h-(t_h+q)>=0 else (t_h+q)-2*h
else:
    y=t_h+q
print(x, y)