// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

int strStr(char* haystack, char* needle) {
    int haystackLength = strlen(haystack);
    int needleLength = strlen(needle);

    // If needle is an empty string, return 0 as per problem statement.
    if (needleLength == 0) {
        return 0;
    }

    // If haystack is shorter than needle, return -1.
    if (haystackLength < needleLength) {
        return -1;
    }

    for (int i = 0; i <= haystackLength - needleLength; i++) {
        int j;
        for (j = 0; j < needleLength; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }

        // If we completed the loop, we found needle in haystack.
        if (j == needleLength) {
            return i;
        }
    }

    return -1;
}
