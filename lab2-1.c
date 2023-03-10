#include<stdio.h>

int main(){
char charType; 
int integerType;
float floatType;
double doubleType;
/*
char, int, float, double 형으로
각각 charType, integerType, floatType, doubleType 변수를 만든다.
*/


printf("[---[신현욱][2020015029]---]\n\n");
printf("Sizeof char: %ldbyte\n",sizeof(charType));
printf("Sizeof int: %ldbytes\n",sizeof(integerType));
printf("Sizeof float: %ldbytes\n",sizeof(floatType));
printf("Sizeof double: %ldbytes\n",sizeof(doubleType));
/*
charType, integerType, floatType, doubleType
변수의 크기를 출력한다.(1 byte, 4byte, 4byte, 8byte)
*/

printf("-----------------------------------------\n");

printf("Sizeof char: %ldbyte\n",sizeof(char));
printf("Sizeof int: %ldbytes\n",sizeof(int));
printf("Sizeof float: %ldbytes\n",sizeof(float));
printf("Sizeof double: %ldbytes\n",sizeof(double));

/*
char, int, float, double형의 크기를 출력한다.
이때의 크기는 charType, integerType, floatType, doubleType
의 크기와 똑같다.(1 byte, 4byte, 4byte, 8byte)
*/

printf("-----------------------------------------\n");

printf("Sizeof char*: %ldbyte\n",sizeof(char*));
printf("Sizeof int*: %ldbytes\n",sizeof(int*));
printf("Sizeof float*: %ldbytes\n",sizeof(float*));
printf("Sizeof double*: %ldbytes\n",sizeof(double*));
/*
char, int, float, double의 포인터 변수의 크기를 출력한다.
이때 pc가 32bit면 4byte, 64bit pc에서는 8byte로 모두 동일하다.
*/
return 0;
}