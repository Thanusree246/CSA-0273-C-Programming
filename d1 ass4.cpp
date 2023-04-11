
#include <stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num==0)
	    printf("neither positive nor")
	else if(num<0)
	    printf("negative");
	else
	    printf("positive");
	return 0;
}
