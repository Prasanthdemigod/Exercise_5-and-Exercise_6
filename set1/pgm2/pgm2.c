/*2. Straight line is represented by connecting two Points. 
Write a structure to represent a Line. Write a function which returns (1,2,3) ,
where 1 represents line is vertical, 2 represents line is horizontal and 3 represents line is oblique.
*/

#include<stdio.h>
struct line{
	int x1,y1,x2,y2;
};
int checkLine(struct line *temp);
void main()
{
	struct line one;
	printf ("Enter co-oridnates of point 1\n");
	scanf("%d%d",&one.x1,&one.y1);
	printf ("Enter co-oridnates of point 2\n");
	scanf("%d%d",&one.x2,&one.y2);
	switch(checkLine(&one))
	{
		case 1:printf("\n Line is vertical\n");
				break;
		case 2:printf("\n Line is Horizontal\n");
				break;
		default:printf("\n Line is oblique\n");
				break;
	}
}

int checkLine(struct line *temp)
{
	if (temp->x1 == temp ->x2)
	{
		return 1;
	}
	if (temp->y1 == temp ->y2)
	{
		return 2;
	}
	return 0;
}
