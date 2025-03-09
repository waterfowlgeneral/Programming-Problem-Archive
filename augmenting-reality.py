import math

for i in range(int(input())):
  r, w, h = input().split(" ")
  r = int(r)
  w = int(w)
  h = int(h)

  for g in range (w+1):
    for v in range (h+1):
      if (math.sqrt(g**2 + v**2) > r):
        print(g, v, sep = ",")