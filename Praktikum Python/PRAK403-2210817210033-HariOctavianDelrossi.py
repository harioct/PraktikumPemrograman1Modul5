n1, n2 = input().split()
n1 = int(n1); n2 = int(n2)
if n1 > n2:
    x = n1; y = n2
    while x >= n2 and y <= n1:
        print("%d %d"%(x, y), end='')
        if x == n2: break
        else: print(" - ", end='')
        x -= 1; y += 1
else:
    x = n1; y = n2
    while x <= n2 and y >= n1:
        print("%d %d"%(x, y), end='')
        if x == n2: break
        else: print(" - ", end='')
        x += 1; y -=1