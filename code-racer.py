for i in range(int(input())):
  racetrackRows = []
  obstacleRows = []
  obstacleCols = []
  rtWidth, rtLength, rcCol = map(int, input().split(" "))
  numObstacleRules = int(input())
  for g in range(numObstacleRules):
    obstacleRow, obstacleCol = map(int, input().split(" "))
    obstacleRows.append(obstacleRow)
    obstacleCols.append(obstacleCol)
  turns = list(input())
  print("="*(rtWidth+2))
  startingLineList = list("|" + (" " * (rtWidth)) + "|")
  startingLineList[rcCol] = "v"
  count = 1
  for n in range(rtLength):
    currentRow = list("|" + (" " * (rtWidth)) + "|")
    if (turns[n] == " "):
      currentRow[rcCol] = "v"
    elif (turns[n] == "L"):
      if (rcCol == 1):
        currentRow[rcCol] = "v"
      else:
        rcCol -= 1
        currentRow[rcCol] = "v"
    elif (turns[n] == "R"):
      if (rcCol == rtWidth):
        currentRow[rcCol] = "v"
      else:
        rcCol += 1
        currentRow[rcCol] = "v"
    for m in range(len(obstacleRows)):
      if count % obstacleRows[m] == 0:
        if currentRow[obstacleCols[m]] == "v":
          currentRow[obstacleCols[m]] = "X"
        else:
          currentRow[obstacleCols[m]] = "o"
    count += 1
    racetrackRows.append(currentRow)
  print(*startingLineList, sep="")
  print("-"*(rtWidth+2))
  for g in range(len(racetrackRows)):
    if ("X" in racetrackRows[g]):
      print("".join(racetrackRows[g]))
      print("You Crashed - GAME OVER")
      break
    elif g == rtLength - 1:
      print("".join(racetrackRows[g]))
      print("="*(rtWidth+2))
      print("Course Complete!")
    else:
      print("".join(racetrackRows[g]))