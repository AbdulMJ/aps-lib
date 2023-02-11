s1='adhaud'
s2='adajvde'

a=[[0]*(len(s2)+1)]*(len(s1)+1)
# creates a 2d matrix of len(s2+1),len(s1+1)

# dynamic programming longest subsequence length at the a[s1][s2] position
for i in range(1,len(s1)+1):
    for j in range(1,len(s2)+1):
        if s1[i-1]==s2[j-1]:
            a[i][j]=a[i-1][j-1]+1
        else:
            a[i][j]=max(a[i-1][j],a[i][j-1])

for i in range(len(s1)):
    print(a[i])
print(a[len(s1)][len(s2)])
