//배열에서 자기가 원하는 숫자 입력해서 찾기 
#include<stdio.h>
#define SIZE 10 
int main()
{
	int key, i, search=0;
	int list[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //배열은1~9까지 
	
	printf("탐색할 값을 입력하세요 :");
	scanf("%d", &key); //탐색할 값을 key라는 변수로 받음 
	
	for(i=0; i<SIZE; i++)
		if(list[i] == key)  
		{
			search = 1;  //search가 1이면 key값이 배열에 있다는 뜻 
			break;
		}
		
		if(search == 1) //search가 1일때 (key값이 배열에 있을 때) 
			printf("탐색 성공 배열에 %d가 있습니다.\n", list[i]);
		else // search가 0일때 (key값이 배열에 없을 때) 
			printf("탐색 실패 배열에 %d가 없습니다.\n", key); 
			
	
	return 0;
}
