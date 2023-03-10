#include <stdio.h>

int main(){
int i; // int형 변수 i를 만든다.
int *ptr; // int형 포인터 변수를 만든다.
int **dptr; //int형 이중포인터 변수 dptr을 만든다.

i= 1234; // 변수 i에 1234를 대입
printf("[---[신현욱][2020015029]---]\n\n");
printf("[checking values before ptr= &i] \n"); //prt=&i 를 하기전 값 확인이라 출력
printf("value of i== %d\n", i); // 변수 i의 값을 출력(1234)
printf("address of i== %p\n", &i); // 변수 i의 주소를 출력
printf("value of ptr== %p\n", ptr); // 포인터 ptr 값 출력(쓰레기 값)
printf("address of ptr== %p\n", &ptr); 
// 포인터 prt의 주소를 출력(스택에서 변수 i의 다음 주소이므로 i의 변수 주소값+8)  

ptr= &i;/* ptris now holding the address of i*/
//포인터 ptr이 i의 주소값을 가짐

printf("\n[checking values after ptr= &i] \n"); //prt=&i 를 한 후의 값 확인이라 출력
printf("value of i== %d\n", i); //i의 값을 출력(1234)
printf("address of i== %p\n", &i); //i의 주소를 출력(12번째 줄과 동일)
printf("value of ptr== %p\n", ptr); //포인터 ptr를 출력(i의 주소를 출력,12번째 줄과 동일) 
printf("address of ptr== %p\n", &ptr); //포인터 ptr의 주소를 줄력(14번째 줄과 동일)
printf("value of *ptr== %d\n", *ptr); //포인터 ptr이 가르키는 주소의 값을 출력(i의 값: 1234)

dptr= &ptr;/* dptris now holding the address of ptr*/
//이중 포인터 dptr가 포인터 ptr을 가르킴

printf("\n[checking values after dptr= &ptr] \n");//dptr= &ptr 를 한 후의 값 확인이라 출력
printf("value of i== %d\n", i); // 변수 i의 값 출력(1234)
printf("address of i== %p\n", &i); // 변수 i의 주소 출력
printf("value of ptr== %p\n", ptr); // 포인터 ptr의 값 출력(=변수 i의 주소)
printf("address of ptr== %p\n", &ptr); // 포인터 ptr의 주소 출력(14번째 줄과 동일)
printf("value of *ptr== %d\n", *ptr); // 포인터 ptr이 가르키는 주소의 값 출력(=변수 i의 값:1234)
printf("value of dptr== %p\n", dptr); // 이중포인터 ptr의 값 출력(=ptr의 주소 출력)
printf("address of dptr== %p\n", &dptr); //이중포인터 ptr의 주소 출력
printf("value of *dptr== %p\n", *dptr); // 이중포인터 ptr이 가르키는 주소의 값 출력(=i의 주소)
printf("value of **dptr== %d\n", **dptr); 
//이중포인터 dptr이 가르키는 포인터가 가르키는 주소의 값(=i의 값 출력:1234)

*ptr= 7777;/* changing the value of *ptr*/ 
//포인터 ptr이 가르키는 변수 i의 값을 7777로 변경

printf("\n[after *ptr= 7777] \n"); //*ptr= 7777를 했다고 출력
printf("value of i== %d\n", i); //i의 값 출력(7777)
printf("value of *ptr== %d\n", *ptr); //포인터 ptr이 가르키는 주소의 값 출력(i의 값 출력:7777)
printf("value of **dptr== %d\n", **dptr); 
//이중포인터 dptr가 가르키는 포인터가 가르키는 주소의 값 출력(i의 값 출력:7777)

**dptr= 8888;/* changing the value of **dptr*/
//이중포인터 dptr이 가르키는 포인터 ptr이 가르키는 변수 i의 값을 8888로 변경

printf("\n[after **dptr= 8888] \n"); //**dptr= 8888를 했다고 출력
printf("value of i== %d\n", i); //i의 값 출력(8888)
printf("value of *ptr== %d\n", *ptr);//포인터 ptr이 가르키는 주소의 값 출력(=i의 값 출력:8888)
printf("value of **dptr== %d\n", **dptr);
//이중포인터 dptr이 가르키는 포인터 변수가 가르키는 주소의 값 출력(=i의 값 출력:8888)
return 0;
}
