import time

def fibonacci(n):
     if n <= 1:
         return n
     else:
         return fibonacci(n-1) + fibonacci(n-2)


start = time.clock()
print fibonacci(42)
end = time.clock()
print "%.2gs" % (end-start)