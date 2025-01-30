// https://leetcode.com/problems/roman-to-integer

int romanToInt(char* s) {
    int romanValues[128]={0};
    romanValues['I']=1;
    romanValues['V']=5;
    romanValues['X']=10;
    romanValues['L']=50;
    romanValues['C']=100;
    romanValues['D']=500;
    romanValues['M']=1000;

    int length=strlen(s);
    int total=0;

    for(int i=0; i<length;i++) {
        if(i < length-1 && romanValues[s[i]] <romanValues[s[i+1]]){
            total=total-romanValues[s[i]];
        }else{
        total=total+romanValues[s[i]];
        }
    }
    return total;
}