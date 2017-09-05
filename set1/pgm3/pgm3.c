//program to Check whether two Lines are parallel.

#include<stdio.h>
struct line{
	int x1,y1,x2,y2;
};
int checkLine(struct line *temp,struct line *this);
void main()
{
	struct line one,two;
	printf ("Enter co-oridnates of point 1 of line 1\n");
	scanf("%d%d",&one.x1,&one.y1);
	printf ("Enter co-oridnates of point 2 of line 1\n");
	scanf("%d%d",&one.x2,&one.y2);
	printf ("Enter co-oridnates of point 1 of line 2\n");
	scanf("%d%d",&two.x1,&two.y1);
	printf ("Enter co-oridnates of point 2 of line 2\n");
	scanf("%d%d",&two.x2,&two.y2);
	switch(checkLine(&one,&two))
	{
		case 1:printf("\n Lines are parellel\n");
				break;
		default:printf("\n Line are not parellel\n");
				break;
	}
}

int checkLine(struct line *temp,struct line *this)
{
	 	
	printf("%d",temp->y1);	
	printf("%d",temp ->y2); 	
	printf("%d",this->y1); 
	printf("%d",(this->y2)); 
	if ((temp->x1-this->x1) - (temp ->x2-this->x2) == 0 )
	{
		return 1;
	}
	if ((temp->y1-this->y1) - (temp ->y2-this->y2)==0)
	{
		
		return 1;
	}
	return 0;
}
