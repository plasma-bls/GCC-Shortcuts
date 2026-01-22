#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]) 
{
  if (argc >= 2) {
    char cmd[100];
    char run[100];
    char bsnmae[64];
    strcpy(bsnmae, argv[1]); 
    int lg = strlen(bsnmae);
    if (lg < 3 || argv[1][lg-2] == '.' || argv[1][lg-1] == 'c'){  
      bsnmae[lg - 2] = '\0';
    } else{printf("file must have '.c' extension");return 1;};
    sprintf(cmd, "gcc %s -o %s",argv[1],bsnmae);
    system(cmd);
    sprintf(run, "./%s", bsnmae);
    system(run);
    return 0;
  } else {printf("Usage: cor <filename>\n");return 1;};
}
