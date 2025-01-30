// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

int strStr(char* haystack, char* needle) {
    int haystackLength = strlen(haystack);
    int needleLength = strlen(needle);

    if(needleLength == 0) {
        return 0;
    }

    for (int i=0; i<haystackLength-needleLength;i++) {
        int j;
        for(j=0;j<needleLength;j++){
            if(haystack[i+j]!=needle[j]){
                break;
            }
        }
        if(j==needleLength) {
            return i;
        }
    }
    return -1;
}