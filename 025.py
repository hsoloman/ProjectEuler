# Well that was easy.

fibs = {}


def fib(n) -> int:
    if n == 1:
        return 1
    elif n == 2:
        return 1
    elif n in fibs:
        return fibs[n]
    else:
        val = fib(n-1) + fib(n-2)
        fibs[n] = val
        return val


def digits(n) -> int:
    return len(str(n))


i = 1
DIGITS_IN_QUESTION = 1000
while(True):
    val = fib(i)
    if digits(val) == DIGITS_IN_QUESTION:
        break
    else:
        i += 1

print(i)
