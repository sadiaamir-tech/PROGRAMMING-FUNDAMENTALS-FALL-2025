int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int t1 = 0, t2 = 1, next;
    for (int i = 2; i <= n; i++) {
        next = t1 + t2; 
        t1 = t2;        
        t2 = next;
    }

    return t2; 
}

