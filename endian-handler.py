#LMCODEQUEST endian-handler
for x in range(int(input())):
  val, type = input().split()
  if (type == "BIG"):
    print(int(val,16))
  elif (type == "LITTLE"):
    valrev = []
    for g in range(0,8,2):
      valrev.insert(0,val[g:g+2])
    print(int("".join(valrev),16))