#include<stdio.h>
int main()
{
	char ch, *pc;		//������ ������ �ּҸ� ��� �����Դϴ�. 
	short sh, *ps;		//������ ������ +Ȥ�� -������ 
	int i, *p;			//������ ������ ������ Ÿ���� ũ�� ��ŭ �����մϴ�. 
	long l, *pl;		//sizeof(data type)��ŭ �����մϴ�. 
	float f, *pf;
	double d, *pd;
	
	pc = &ch;
	ps = &sh;
	p = &i;
	pl = &l;
	pf = &f;
	pd = &d;
	
	printf("������ : %u %u\n", pc, pc+1);
	printf("short �� : %u %u\n", ps, ps+1);
	printf("���� �� : %u %u\n", p, p+1);
	printf("���� : %u %u\n", pl, pl+1);
	printf("�Ǽ��� : %u %u\n", pf, pf+1);
	printf("������ : %u %u\n", pd, pd+1);
	
	return 0;
 } 
