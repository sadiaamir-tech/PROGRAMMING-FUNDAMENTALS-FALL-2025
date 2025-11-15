char* restoreString(char* s, int* indices, int size){
    static char res[200];

    for(int i = 0; i < size; i++){
        res[indices[i]] = s[i];
    }
    res[size] = '\0';
    return res;
}

