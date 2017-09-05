//Check whether two Lines cross each other.

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
		case 1:printf("\n Lines cross\n");
				break;
		default:printf("\n Line dont cross\n");
				break;
	}
}

int checkLine(struct line *temp,struct line *this)
{	
	
	int i,j,i2,i1,i3,j1,j2,j3,j5,i5;
	 i= temp->x1-temp->x2;
	 i1=this->y1-temp->y1;
	 i2=temp->y1-temp->y2;
	 i3=this->x1-temp->x1;
	 i5=i*i1-i2*i3;
	 j= temp->x1-temp->x2;
	 j1=this->y2-temp->y1;
	 j2=temp->y1-temp->y2;
	 j3=this->x2-temp->x1;
	 j5=j*j1-j2*j3;
	
	if(i5*j5<0)
	{
		return 1;
	}
	return 0;
}
