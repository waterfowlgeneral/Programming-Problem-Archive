import math
def round(x, n = 0):
  negative = x < 0
  if negative: x *= -1
  x = float(x) * (10**n)
  if x % 1 >= 0.5: x += 1
  if negative: x *= -1
  return float(int(x) / 10 ** n)

for i in range(int(input())):
  xzero, yzero, h, n = map(float, input().split())
  xvals = [xzero]
  yvals = [yzero]
  n += 1
  for g in range(1,int(n)):
    newx = h + xvals[g-1]
    xvals.append(newx)
    newy = yvals[g-1] + h * (math.sin(xvals[g-1])/xvals[g-1])
    yvals.append(newy)
  final = str(round(yvals[-1],3))
  print(final.rstrip("0"))