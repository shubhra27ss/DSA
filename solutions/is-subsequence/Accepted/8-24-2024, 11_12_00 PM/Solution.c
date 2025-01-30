// https://leetcode.com/problems/is-subsequence

bool isSubsequence(char* s, char* t) {
    int i =0;
    int j=0;
    while(t[j]!='\0'){
        if(s[i]==t[j]){
            i++;
        }
        j++;

    }
    return s[i]=='\0';
}