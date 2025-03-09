for i in range(int(input())):
  dnakey = input()
  names = []
  dnacases = []
  for f in range(int(input())):
      name, dna = input().split("=")
      names.append(name)
      dnacases.append(dna)
  subsequences = []
  for h in range(len(dnacases)):
      currentSubsequence = ""
      for j in range(len(dnakey)):
          if dnakey[j] in dnacases[h]:
              currentSubsequence += dnakey[j]
              dnacases[h] = dnacases[h][dnacases[h].index(dnakey[j])+1:len(dnacases[h])]
      subsequences.append(currentSubsequence)
  longestSubsequence = max(subsequences, key=len)
  finalNames = []
  finalNames.append(names[subsequences.index(longestSubsequence)])
  names.remove(names[subsequences.index(longestSubsequence)])
  subsequences.remove(longestSubsequence)
  for currentdna in subsequences[:]:
    if (len(currentdna) == len(longestSubsequence)):
        finalNames.append(names[subsequences.index(currentdna)])
        names.remove(names[subsequences.index(currentdna)])
        subsequences.remove(currentdna)
  print(*sorted(finalNames,key=str.lower), sep = ",")