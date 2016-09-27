#include <stdio.h>
#include <stdlib.h>

int strLength(char *ref);
int * strnCopy(char *dest, char *orig, char len);
int * strCat(char *s1, char *s2);
int * strCompare(char *s1, char *s2);
int * strChar(char *s1, char checker);

int main(){
  printf("Testing String Functions\n");
  
  char s1[256] = "Hello";
  char s2[256] = "Hell";
  char s3[256] = "Alpha";

  printf("Test Subjects for Today:\n\tSubject One:%s\n\tSubject Two:%s\n\tSubject Three:%s\n",s1,s2,s3);
  
  printf("Beginning Test of Length:\n");
  printf("Results:\n\tSubject One:%d\n\tSubject Two:%d\n\tSubject Three:%d\n",strLength(s1), strLength(s2), strLength(s3));
  printf("Test of Length Complete\n");

  

  

}


int strLength(char *ref){
  int n = 0;
  while(*ref){
    ref++;
    n++;
  }
  return n;
}

int * strnCopy(char *dest, char *orig, char len){
  char i = 0;
  while (i < len){
    dest[i] = orig[i];
    dest++;
    orig++;
  }
  return dest;
}


