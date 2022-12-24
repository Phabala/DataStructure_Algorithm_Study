# a(n) = a(n-1) + 3, a(1) = 1

def seq(n):
    if (n==1):
        return 1
    else:
        return seq(n-1) + 3