#LMCODEQUEST flower-power
for i in range(int(input())):
  num = int(input())
  top = []
  mid = []
  bottom = []
  basenine = []
  while num > 0:
      quotient = num // 9
      remainder = num % 9
      basenine.insert(0, remainder)
      num = quotient
  for h in range(len(basenine)):
    if (basenine[h] == 0):
      top.append("   ")
      mid.append(" * ")
      bottom.append("   ")
    elif (basenine[h] == 1):
      top.append("\\  ")
      mid.append(" * ")
      bottom.append("   ")
    elif (basenine[h] == 2):
      top.append("\\| ")
      mid.append(" * ")
      bottom.append("   ")
    elif (basenine[h] == 3):
      top.append("\\|/")
      mid.append(" * ")
      bottom.append("   ")
    elif (basenine[h] == 4):
      top.append("\\|/")
      mid.append(" *-")
      bottom.append("   ")
    elif (basenine[h] == 5):
      top.append("\\|/")
      mid.append(" *-")
      bottom.append("  \\")
    elif (basenine[h] == 6):
      top.append("\\|/")
      mid.append(" *-")
      bottom.append(" |\\")
    elif (basenine[h] == 7):
      top.append("\\|/")
      mid.append(" *-")
      bottom.append("/|\\")
    elif (basenine[h] == 8):
      top.append("\\|/")
      mid.append("-*-")
      bottom.append("/|\\")
  
  print(" ".join(top).rstrip())
  print(" ".join(mid).rstrip())
  print(" ".join(bottom).rstrip())