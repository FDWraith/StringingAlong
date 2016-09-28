#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *ref);
char * strnCopy(char *dest, char *orig, char len);
char * strKitten(char *s1, char *s2);
int strCompare(char *s1, char *s2);
char * strChar(char *s1, char checker);

int main(){
  printf("Testing String Functions\n");
  
  char s1[256] = "Hello";
  char s2[256] = "Hellish";
  char s3[256] = "Alpha";

  printf("Test Subjects for Today:\n\tSubject One:%s\n\tSubject Two:%s\n\tSubject Three:%s\n",s1,s2,s3);
  
  printf("Beginning Test of Length:\n");
  printf("Results for built-in methods:\n\tSubjectOne:%d\n\tSubject Two:%d\n\tSubject Three:%d\n",strlen(s1), strlen(s2), strlen(s3));
  printf("Results for my methods:\n\tSubject One:%d\n\tSubject Two:%d\n\tSubject Three:%d\n",strLength(s1), strLength(s2), strLength(s3));
  printf("Test of Length Complete\n");

  printf("Beginning Test of Copying:\n");
  printf("Results for built-in methods:\n");
  printf("\tSubjectOne Prior:%s\n",s1);
  strncpy(s1,s2,5);
  printf("\tSubjectOne After:%s\n",s1);
  printf("Resetting SubjectOne\n");
  strcpy(s1,"Hello");
  printf("Reset Complete\n");
  printf("Results for my methods:\n");
  printf("\tSubjectOne Prior:%s\n",s1);
  strnCopy(s1,s2,5);
  printf("\tSubjectOne After:%s\n",s1);
  printf("Resetting SubjectOne\n");
  strcpy(s1,"Hello");
  printf("Reset Complete\n");
  printf("Test of Copying Complete\n");
 
  printf("Beginning Test of Kittens:\n");
  printf("Results for built-in methods:\n");
  printf("\tSubjectOne Prior:%s\n",s1);
  strcat(s1,s3);
  printf("\tSubjectOne After:%s\n",s1);
  printf("Resetting SubjectOne\n");
  strcpy(s1,"Hello");
  printf("Reset Complete\n");
  printf("Results for my methods:\n");
  printf("\tSubjectOne Prior:%s\n",s1);
  strKitten(s1,s3);
  printf("\tSubjectOne After:%s\n",s1);
  printf("Resetting SubjectOne\n");
  strcpy(s1,"Hello");
  printf("Reset Complete\n");
  printf("Test of Kittens Complete\n");

  

}


int strLength(char *ref){
  int n = 0;
  while(*ref){
    ref++;
    n++;
  }
  return n;
}

char * strnCopy(char *dest, char *orig, char len){
  char i = 0;
  while (i < len){
    dest[i] = orig[i];
    dest++;
    orig++;
    i++;
  }
  return dest;
}

char * strKitten(char *dest, char *orig){
  char i = strlen(dest);
  char j = 0;
  while(orig[j]){
    dest[i] = orig[0];
    orig++;
    i++;
    j++;
  }
  return dest;
}

int strcmp(char *s1, char *s2){
  char i = 0;
  while( s1[i] == s2[ii]i]
}
