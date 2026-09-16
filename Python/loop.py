#for loop
for i in range(5):
    print(i)


for i in range(1,7):
    print(i)


fruits=["Apple","Banana","Cherry"]
# for i in fruits:
for i in range(len(fruits)):
   print("I like:",fruits[i])

    # print("I like:",i)



#while loop
count=1
while count!=5:
    print("Count is:",count)
    count+=1



user=""
while user!="Exit":
    user=input("Type 'Exit' to stop:")
print("Exited.")
    