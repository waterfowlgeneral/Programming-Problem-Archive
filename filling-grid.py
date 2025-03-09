import math
n = int(input())
if n==2:
    print("2")
elif n<4:
    print("0")
elif n%2==1:
    print("0")
else:
    print(int((2**(n/2))))
