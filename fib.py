import sys

def fib(number):
    if number <= 2 :
        return 1
    else:
        return fib(number - 1) + fib(number - 2)

    
print(fib(int(sys.argv[1])))
