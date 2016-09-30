#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *ref);
char * strCopy(char *dest, char *orig);
char * strnCopy(char *dest, char *orig, char len);
char * strKitten(char *s1, char *s2);
char * strnKitten(char *s1, char *s2, char len);
int strCompare(char *s1, char *s2);
char * strChar(char *s1, char checker);
char * strStress(char *s1, char *checker);

int main(){
  printf("Testing String Functions\n");
  
  char s1[256] = "Hello";
  char s2[256] = "Hellish";
  char s3[256] = "Alpha";

  printf("Test Subjects for Today:\n\tSubject One:%s\n\tSubject Two:%s\n\tSubject Three:%s\n\n",s1,s2,s3);
  
  printf("Beginning Test of Length:\n");
  printf("Results for built-in methods:\n\tSubjectOne:%d\n\tSubject Two:%d\n\tSubject Three:%d\n",strlen(s1), strlen(s2), strlen(s3));
  printf("Results for my methods:\n\tSubject One:%d\n\tSubject Two:%d\n\tSubject Three:%d\n",strLength(s1), strLength(s2), strLength(s3));
  printf("Test of Length Complete\n\n");

  printf("Beginning Test of Copying:\n");
  printf("Results for built-in methods:\n");
  printf("\tSubjectOne Prior:%s\n",s1);
  strncpy(s1,s2,5);
  printf("\tSubjectOne After:%s\n",s1);
  printf("\tSubjectTwo Prior:%s\n",s2);
  strcpy(s2,s3);
  printf("\tSubjectTwo After:%s\n",s2);
  printf("Resetting Subjects\n");
  strcpy(s1,"Hello");
  strcpy(s2,"Hellish");
  printf("Reset Complete\n");
  printf("Results for my methods:\n");
  printf("\tSubjectOne Prior:%s\n",s1);
  strnCopy(s1,s2,5);
  printf("\tSubjectOne After:%s\n",s1);
  printf("\tSubjectTwo Prior:%s\n",s2);
  strCopy(s2,s3);
  printf("\tSubjectTwo After:%s\n",s2);
  printf("Resetting Subjects\n");
  strcpy(s1,"Hello");
  strcpy(s2,"Hellish");
  printf("Reset Complete\n");
  
  printf("Test of Copying Complete\n\n");
 
  printf("Beginning Test of Kittens:\n");
  printf("Results for built-in methods:\n");
  printf("\tSubjectOne Prior:%s\n",s1);
  strcat(s1,s3);
  printf("\tSubjectOne After:%s\n",s1);
  printf("\tSubjectTwo Prior:%s\n",s2);
  strncat(s2,s1,4);
  printf("\tSubjectTwo After:%s\n",s2);
  printf("Resetting Subjects\n");
  strcpy(s1,"Hello");
  strcpy(s2,"Hellish");
  printf("Reset Complete\n");
  printf("Results for my methods:\n");
  printf("\tSubjectOne Prior:%s\n",s1);
  strKitten(s1,s3);
  printf("\tSubjectOne After:%s\n",s1);
  printf("\tSubjectTwo Prior:%s\n",s2);
  strnKitten(s2,s1,4);
  printf("\tSubjectTwo After:%s\n",s2);
  printf("Resetting Subjects\n");
  strcpy(s1,"Hello");
  strcpy(s2,"Hellish");
  printf("Reset Complete\n");
  printf("Test of Kittens Complete\n\n");

  printf("Beginning Test of Comparisons:\n");
  printf("Results for built-in methods: \n");
  printf("\tSubjectOne [%s] vs. SubjectTwo [%s]: %d\n",s1,s2,strcmp(s1,s2));
  printf("\tSubjectTwo [%s] vs. SubjectThree [%s]: %d\n",s2,s3,strcmp(s2,s3));
  printf("\tSubjectThree [%s] vs. SubjectThree [%s]: %d\n",s3,s3,strcmp(s3,s3));
  printf("Results for my mehods:\n");
  printf("\tSubjectOne [%s] vs. SubjectTwo [%s]: %d\n",s1,s2,strCompare(s1,s2));
  printf("\tSubjectTwo [%s] vs. SubjectThree [%s]: %d\n",s2,s3,strCompare(s2,s3));
  printf("\tSubjectThree [%s] vs. SubjectThree [%s]: %d\n",s3,s3,strCompare(s3,s3));
  printf("Test of Comparisons Complete\n\n");

  printf("Beginning Test of Characters:\n");
  printf("Results for built-in methods:\n");
  printf("\tSearching through SubjectOne [%s] for [%c] results in: [%s]\n",s1,'e',strchr(s1,'e') );
  printf("\tSearching through SubjectTwo [%s] for [%c] results in: [%s]\n",s2,'H',strchr(s2,'H') );
  printf("\tSearching through SubjectThree [%s] for [%c] results in: [%s]\n",s3,'e',strchr(s3,'e') );
  printf("Results for my methods:\n");
  printf("\tSearching through SubjectOne [%s] for [%c] results in: [%s]\n",s1,'e',strChar(s1,'e') );
  printf("\tSearching through SubjectTwo [%s] for [%c] results in: [%s]\n",s2,'H',strChar(s2,'H') );
  printf("\tSearching through SubjectThree [%s] for [%c] results in: [%s]\n",s3,'e',strChar(s3,'e') );
  printf("Test of Characters Complete\n\n");

  printf("Beginning Test of Stress:\n");
  printf("Results of built-in methods:\n");
  printf("\tSearching through SubjectOne [%s] for [%s] results in: [%s]\n",s1,"ll", strstr(s1,"ll"));
  printf("\tSearching through SubjectTwo [%s] for [%s] results in: [%s]\n",s2,"H", strstr(s2,"H"));
  printf("\tSearching through SubjectThree [%s] for [%s] results in: [%s]\n",s3,"bee", strstr(s2,"bee"));
  printf("Results of my methods:\n");
    printf("\tSearching through SubjectOne [%s] for [%s] results in: [%s]\n",s1,"ll", strStress(s1,"ll"));
  printf("\tSearching through SubjectTwo [%s] for [%s] results in: [%s]\n",s2,"H", strStress(s2,"H"));
  printf("\tSearching through SubjectThree [%s] for [%s] results in: [%s]\n",s3,"bee", strStress(s2,"bee"));
  printf("Test of Stress Complete\n\n");
  
  printf("Testing is now Complete!\n");
  return 0;
}


int strLength(char *ref){
  int n = 0;
  while(*ref){
    ref++;
    n++;
  }
  return n;
}

char * strCopy(char *dest, char *orig){
  char i = 0;
  while(i < strlen(orig) + 1){
    dest[i] = orig[i];
    i++;
  }
  return dest;
}

char * strnCopy(char *dest, char *orig, char len){
  char i = 0;
  while (i < len){
    dest[i] = orig[i];
    i++;
  }
  return dest;
}

char * strKitten(char *dest, char *orig){
  char i = strlen(dest);
  char j = 0;
  while(j < strlen(orig) + 1){
    dest[i] = orig[0];
    orig++;
    i++;
    j++;
  }
  return dest;
}

char * strnKitten(char *dest, char *orig, char len){
  char i = strlen(dest);
  char j = 0;
  while(j < len){
    dest[i] = orig[j];
    j++;
    i++;
  }
  return dest;
}

int strCompare(char *s1, char *s2){
  char i = 0;
  while( (s1[i] == s2[i]) && (s1[i] || s2[i]) ){
    i++;
  }
  return s1[i]-s2[i];
}

char * strChar(char *string, char checker){
  char i = 0;
  while(string[i]){
    if(string[i] == checker){
      return string + i;
    }
    i++;
  }
  return 0;
}

char * strStress(char *s1, char *checker){
  char i = 0;
  char j = 0;
  while(s1[i]){
    if(s1[i] == checker[j]){
      j++;
    }else{
      j = 0;
    }
    if(!checker[j]){
      return s1 + i + 1 - j ;
    }
    i++;
  }
  return 0;
}
