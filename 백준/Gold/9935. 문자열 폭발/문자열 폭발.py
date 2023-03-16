string=input()
boom=input()
stack=[]
for s in string:
    stack.append(s)
    if len(stack)>=len(boom):
        while ''.join(stack[len(stack)-len(boom):])==boom:
            for i in range(len(boom)):
                stack.pop()
print(''.join(stack) if len(stack)>0 else 'FRULA')