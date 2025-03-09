for i in range(int(input())):
  w, h = map(int, input().split())
  phrase = input()
  words = phrase.split()
  numWords = 0
  box = ""

  for g in range(h):
    charCount = 0
    while numWords < len(words) and charCount + len(words[numWords]) <= w:
      box += words[numWords] + " "
      charCount += len(words[numWords]) + 1
      numWords += 1
    box = box.rstrip() + "\n"
  box = box.rstrip()
  if numWords < len(words):
    print("WILL NOT FIT")
  else:
    print(box)