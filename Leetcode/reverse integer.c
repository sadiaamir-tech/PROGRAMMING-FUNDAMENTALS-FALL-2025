int reverse(int x) {
    int rev = 0;
    int digit;

    while (x != 0) {
        digit = x % 10;

        // check for overflow before multiplying by 10
        if (rev > 214748364 || rev < -214748364)
            return 0;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    return rev;
}
