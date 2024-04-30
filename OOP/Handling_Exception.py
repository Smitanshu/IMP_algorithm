'''# print("begin")
a=int(input("enter a:"))
try:
 b=int(input("enter b"))
 c=a/b
 print(c)
except(ZeroDivisionError):
 print("Second number cant be zero")
print("end")
'''
try:
    n=int(input())
    assert((n>=3)and (n<=15)), "The number is in range 3-15"
    print("Entered number is :", n)
except(AssertionError):
    print("Range is outof range")
