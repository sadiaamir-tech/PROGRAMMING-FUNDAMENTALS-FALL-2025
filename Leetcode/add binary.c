char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int maxLen = (i > j ? i : j) + 2;  // +1 for carry, +1 for '\0'
    char* result = (char*)malloc((maxLen + 1) * sizeof(char)); 

    int pos = maxLen; 
    result[pos] = '\0';
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[--pos] = (sum % 2) + '0';
        carry = sum / 2;
    }
    return result + pos;
}
