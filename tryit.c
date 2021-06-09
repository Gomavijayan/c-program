6.#include <stdio.h>
int main(int argc, char *argv[]){
int tally;
char p[]="zoho";
char t;
int i,j;
for(i=0,j=strlen(p);i<j;i++){
    t=p[i];
    p[i]=p[j-i];
    p[j-i]=t;
    printf("%c %c \n",t,p[i]);
}
    return 0;
}
