#include<stdio.h>

enum days {Monday, Tuesday, Wednesday, Thursday};

// enum la text section madhe memory allocate hote.

int main()
{
	enum days obj;
	
	int Salary[] = {200,450,250,700};
	
	printf("size of enum %d\n",sizeof(obj));
	printf("Monday : %d\n",Monday);
	printf("Tuesdayday : %d\n",Tuesday);
	printf("Wednesdayday : %d\n",Wednesday);
	printf("Thursdayday : %d\n",Thursday);	
	
	printf("My salary on Wednesday is %d\n",Salary[2]);
	printf("My salary on Wednesday is %d\n",Salary[Wednesday]);
	
	return 0;
}