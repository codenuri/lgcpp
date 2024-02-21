// 컴파일 : C 소스를 기계어로 바꾸는 작업
// 링킹   : 실행가능하도록 실행파일을 만드는 작업. (반드시 main 함수가 있어야한다.)

// add.cpp 와 sub.cpp 컴파일 하기

// 1. g++ add.cpp : "컴파일" 과 "링킹" 작업을 동시에 해달라.
//					에러 발생. main 함수가 없다는 것
//				 
// 2. g++ add.cpp -c   : 컴파일만 해달라. ok. add.o (또는 add.obj) 파일 생성
//						 add 의 기계어를 담는 파일, 아직 실행은 안됨

// 3. g++ sub.cpp -c  : sub.o 생성. 
//-----------------------------------------------------
// main.cpp 빌드하기
// 1. add, sub 함수의 선언부 필요
// 2. g++ main.cpp	: 실행파일을 만들어야 하는데, add, sub 가 어디 있는지 알수없다
//					  링크 에러
// 3. g++ main.cpp -c : 컴파일만 해달라. add, sub 가 어디 있는지는 링크할때 
//										찾으면 된다.
//						main.o 생성
//=======================================
// 링킹 하기
// g++ 컴파일러의 링커는 ld.exe 또는 collect2.exe 입니다.
// => ld main.o add.o sub.o  가 에러 나오면
// => g++ main.o add.o sub.o 로 해도 됩니다. g++ 자체가 링커 기능도 있습니다.
#include <stdio.h>

int add(int, int);
int sub(int, int);

int main()
{
	int n1 = add(1, 2);
	int n2 = sub(1, 2);
}
