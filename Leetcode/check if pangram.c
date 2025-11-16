bool checkIfPangram(char * sentence){
    int letters[26] = {0};

    for(int i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] >= 'a' && sentence[i] <= 'z'){
            letters[sentence[i] - 'a'] = 1;
        }
    }

    for(int i = 0; i < 26; i++){
        if(letters[i] == 0) return false;
    }
    return true;
}

