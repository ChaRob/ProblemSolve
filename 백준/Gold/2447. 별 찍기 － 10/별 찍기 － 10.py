n=int(input())
def star(k):
    if k==3:
        return ['***','* *','***']
    else:
        line=[x*3 for x in star(k//3)] + [x+' '*(k//3)+x for x in star(k//3)] + [x*3 for x in star(k//3)]
        return line
for s in star(n):
    print(s)