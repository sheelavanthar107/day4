# include<stdio.h>
int main(){
    int a=8;
    int *b=&a;
   *b=*b+20;
    printf("a=%d\n",a);
    printf("harshitha=%d\n", *b);
    return 0;
}
