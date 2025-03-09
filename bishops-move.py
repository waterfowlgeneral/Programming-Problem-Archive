for i in range(int(input())):
  r, c = map(int,input().split(","))
  r1, c1 = map(int,input().split(","))
  r2, c2 = map(int,input().split(","))
  if abs(r2-r1) % 2 == 0 and abs(c2-c1) % 2 == 0 or abs(r2-r1) % 2 == 1 and abs(c2-c1) % 2 == 1:
    print("Yes")
  else:
    print("No")