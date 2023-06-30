s=input("string")
c=input("chat")
count=0
for i in range(len(s)):
      if s[i]==c:
          count=count+1
print("no of",c,"is",count)
