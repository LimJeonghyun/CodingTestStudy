from itertools import combinations
N, M = map(int, input().split())
cards= list(map(int, input().split()))
combi = list(combinations(cards,3))
result = []
for c in combi:
    if sum(c) <= M:
        result.append(sum(c)-M)
result.sort()
if 0 in result:
    print(M)
else:
    print(max(result)+M)
# print(result)
# print("result:", result+M)