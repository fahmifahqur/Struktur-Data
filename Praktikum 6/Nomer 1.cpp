#include <iostream>
#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
 int n;
 printf("Fahmi Fahqur Rozi\n");
 printf("20051397060\n");
 printf("MI_B_2020\n");
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}
