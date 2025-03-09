for i in range(int(input())):
    n, k = map(int, input().split())
    klevel = 0
    jlevel = 0
    khatesj = False
    jhatesk = False
    for d in range(n):
        name, level = input().split()
        level = int(level)
        if name == "Kelly":
            klevel = level
        else:
            jlevel = level
        if (klevel - jlevel > k):
            jhatesk = True
        elif (jlevel-klevel > k):
            khatesj = True
    if (jhatesk and not khatesj):
        print("Jim hates Kelly")
    elif (khatesj and not jhatesk):
        print("Kelly hates Jim")
    elif (jhatesk and khatesj):
        print("Their friendship is doomed")
    else:
        print("Everything is good")