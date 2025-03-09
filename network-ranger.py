for h in range(int(input())):
  iplist = []
  errors = []
  for j in range(int(input())):
    current = input().split(".")
    current = list(current)
    currentbin = ""
    for value in current:
      currentbin += format(int(value), "#010b")[2::]
    iplist.append(currentbin)
  for l in range(len(iplist[0])):
    currentindex = []
    for value in iplist:
      currentindex.append(value[l])
    if (all(val == currentindex[0] for val in currentindex) is False):
      errors.append(l)
  if (len(errors) > 0):
    newval = iplist[0][0:errors[0]]
    if (len(newval) < 32):
        newval += "0" * (32-len(newval))
    finalbin =   []
    for k in range(0,32,8):
      finalbin.append(int(newval[k:k+8], 2))
    print(*finalbin, sep = ".", end = "/" + str(errors[0]) + "\n")
  else:    
    newval = iplist[0] 
    finalbin = []
    for k in range(0,32,8):
      finalbin.append(int(newval[k:k+8], 2))
    print(*finalbin, sep = ".", end = "/32" + "\n")  