bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;  // push
        } else {
            if (top == -1) return 0;  // no matching opening bracket

            char topChar = stack[top--];  // pop
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return 0;  // mismatch
            }
        }
    }

    return top == -1 ? 1 : 0;  // 1 ? valid, 0 ? invalid
}
