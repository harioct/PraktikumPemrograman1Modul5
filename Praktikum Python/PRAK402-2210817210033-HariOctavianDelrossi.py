angka = int(input())
for i in range(1, angka + 1):
    if i%2 == 1: print(i, end=' ')
print()
for i in reversed(range(1, angka + 1)):
    if i%2 == 0: print(i, end=' ')