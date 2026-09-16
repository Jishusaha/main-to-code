#positional argument
from os import name


def add(a,b):
    return a+b
print("Sum is:",add(3,4))

#variable argument
def intro(name,age):
    print("I am",name,"and I am",age,"years old.")
    #print("I am {name} and age is {age}")
    #intro(name="Jishu",age=20) #keyword argument
intro("JIshu",20)

#default argument
def a(name="Jishu"):
    print(f"Hello {name}")
a()
a(name="Soumik")