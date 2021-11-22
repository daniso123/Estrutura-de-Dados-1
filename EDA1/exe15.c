#include<stdio.h>



char* concat(char *s1, char *s2) {
    int i, j;

    for (i = 0; s1[i] != '\0'; ++i);
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    return s1;
}

int main(){

    char s1[] = "abc";
    char s2[] = "defg";

    *concat(s1, s2);


printf("%s\n", s1);

return 0;
}
