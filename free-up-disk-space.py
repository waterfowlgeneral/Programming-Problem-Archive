from datetime import date
def round(x, n = 0):
  negative = x < 0
  if negative: x *= -1
  x = float(x) * (10**n)
  if x % 1 >= 0.5: x += 1
  if negative: x *= -1
  return float(int(x) / 10 ** n)
for i in range(int(input())):
    fileNum, GB = input().split(" ")
    fileNum = int(fileNum)
    GB = float(GB)
    GBRequirement = GB/4
    today = date(2019, 4, 27)
    isAfternoonList = []
    KBList = []
    fileNameList = []
    fileScores = []
    for h in range(fileNum):
        currentDate, time, isAfternoon, KB, fileName = input().split(" ")
        KB = int(KB)
        currentDate = currentDate.split("/")
        date1 = date(int(currentDate[2]), int(currentDate[1]), int(currentDate[0]))
        daysElapsed = ((today-date1).days)
        if (isAfternoon == "PM"):
            daysElapsed -= .5
        fileScores.append(round(daysElapsed*(KB/1000),3))
        isAfternoonList.append(isAfternoon)
        KBList.append(KB)
        fileNameList.append(fileName)
    fileScoresAssignName = {}
    fileScoresAssignSize = {}
    totalFileSize = 0.0
    for a in range(len(fileScores)):
        fileScoresAssignName[fileScores[a]] = fileNameList[a]
        fileScoresAssignSize[fileScores[a]] = KBList[a] / 1000000
    fileScores.sort(reverse=True)
    count = 0
    while (totalFileSize < GBRequirement):
        print(fileScoresAssignName[fileScores[count]], "%.3f" % fileScores[count])
        totalFileSize += fileScoresAssignSize[fileScores[count]]
        count += 1