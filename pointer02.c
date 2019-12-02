#include<stdio.h>
int main()
{
	char ch, *pc;		//포인터 변수는 주소를 담는 변수입니다. 
	short sh, *ps;		//포인터 변수에 +혹은 -연산은 
	int i, *p;			//포인터 변수의 데이터 타입의 크기 만큼 증감합니다. 
	long l, *pl;		//sizeof(data type)만큼 증감합니다. 
	float f, *pf;
	double d, *pd;
	
	pc = &ch;
	ps = &sh;
	p = &i;
	pl = &l;
	pf = &f;
	pd = &d;
	
	printf("문자형 : %u %u\n", pc, pc+1);
	printf("short 형 : %u %u\n", ps, ps+1);
	printf("정수 형 : %u %u\n", p, p+1);
	printf("롱형 : %u %u\n", pl, pl+1);
	printf("실수형 : %u %u\n", pf, pf+1);
	printf("더블형 : %u %u\n", pd, pd+1);
	
	return 0;
 } 
