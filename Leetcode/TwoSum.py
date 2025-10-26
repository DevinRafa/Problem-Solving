nums = [9,2,3,11]
n = len(nums)
print(n)
for i in range(n-1):
    for j in range(i+1, n):
        print(f'ini i = {i}')
        print(f'ini j = {j}')