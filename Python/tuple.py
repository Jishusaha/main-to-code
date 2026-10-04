#simple tuple
num=(10,20,30,"Banana",40)
print(num)
print(num[0],num[2])
print(num[-1])
print(num[0])


#tuple with different types
person=("Jishu",20,"Engineer")
print(person)

a=(1,2,3)
b=(4,5,6)
print(a+b)
print(a*2)
print(b*3)
print(len(a))
print(len(b))


nested=(("Apple","Banana"),(1,2,3))
print(nested)
print(nested[0][1])


fruits={"Apple","Banana","Cherry"}
fruits.add("Grapes") #tuple is immutable, so we cannot add or remove elements
print(fruits)
fruits.update(["Mango","Orange"])
print(fruits)
fruits.remove("Banana")
print(fruits)