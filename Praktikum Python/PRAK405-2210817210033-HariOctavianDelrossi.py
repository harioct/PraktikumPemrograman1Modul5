a, b=input().split()
a=int(a);b=int(b)
for i in range(1, a + 1):
    j = i
    while j > 1:
        print("(%d * %d) + "%(j, b), end=''); j -= 1
    x = 1; hasil = (i * b)
    while x < i:
        hasil += (x * b); x += 1
    print("(%d %d) = %d"%(j, b, hasil))
y = 1; z = 1; total = 0
while y <= a:
    total += z * b; z += y + 1; y += 1
print("%d"%(total))