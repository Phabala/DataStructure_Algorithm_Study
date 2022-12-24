from tqdm import tqdm
# N, K = map(int, input().split())
# # startNum = 10^(K-2)
# # if N <= startNum:
# #     pass
# # else:
# #     N = startNum

# while True:
#     N += 1
#     setN = set(str(N))
#     if len(setN) == K:
#         print(N)
#         break
#     else:
#         continue

N, K = map(int, input().split())
lst = [x for x in range(1, 10**7 + 1)]
for idx in tqdm(range(len(lst))):
    if len(set(str(lst[idx]))) != len(str(lst[idx])):
        lst.pop(idx)

print(lst[1:10])