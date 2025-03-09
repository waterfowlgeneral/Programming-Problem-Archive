for i in range(int(input())):
    g, d = map(int, input().split())
    base = 10
    while True:
        value = 0
        multiplier = 1
        tempg = g
        while tempg > 0:
            digit = tempg % 10
            value += digit * multiplier
            multiplier *= base
            tempg //= 10
        if value == d:
            print("Hotel Visit #", i+1, ": Base ", base, sep = "")
            break
        base += 1