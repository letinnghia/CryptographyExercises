p = 29
ints = [14, 6, 11]
nums = []

for i in ints:
    y = i % p
    for x in range(p):
        if (pow(x, 2) % p) == y:
            nums.append(x)

print(min(nums))