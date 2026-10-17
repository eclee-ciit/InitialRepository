print("1. Right angle pattern")
cnt=0
rows=5
for i in range (1, rows + 1):
    cnt+=1
    for j in range(i):
        print(cnt, end="")
    print()
print("2. 5x5 star pattern")
for i in range (1, 5):
    for j in range (1, 5):
        print("*", end="")
    print()
print("3. Identity matrix pattern")
for i in range(1, 6):
    for j in range(1, 6):
        if(i==j):
            print("1", end="")
        else:
            print("0", end="")
    print()