//�迭���� �ڱⰡ ���ϴ� ���� �Է��ؼ� ã�� 
#include<stdio.h>
#define SIZE 10 
int main()
{
	int key, i, search=0;
	int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //�迭��1~9���� 
	
	printf("Ž���� ���� �Է��ϼ��� :");
	scanf("%d", &key); //Ž���� ���� key��� ������ ���� 
	
	for(i=0; i<SIZE; i++)
		if(list[i] == key)  
		{
			search = 1;  //search�� 1�̸� key���� �迭�� �ִٴ� �� 
			break;
		}
		
		if(search == 1) //search�� 1�϶� (key���� �迭�� ���� ��) 
			printf("Ž�� ���� �迭�� %d�� �ֽ��ϴ�.\n", list[i]);
		else // search�� 0�϶� (key���� �迭�� ���� ��) 
			printf("Ž�� ���� �迭�� %d�� �����ϴ�.\n", key); 
			
	
	return 0;
}
