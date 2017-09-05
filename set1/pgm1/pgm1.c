/*1. A point in a plane is represented by its two coordinates, x and y. 
Create a structure Point with two fields to represent a single point in a plane.
Write function to create a Point. Write another function that accept the Point and returns an integer
 (1,2,3 or 4) that indicates in which quadrant the point is located. Check whether two Points are same.
*/

#include<stdio.h>
struct point
{
	int x,y;
};
void accept (struct point *temp);
int checkQuadrant(struct point *temp);
void main()
{
	struct point a,b;
	//struct point *x, *y;
	printf("Enter the co-ordinates of point 1\n");
	accept(&a);
	printf("Quadrant of point 1:  %d",checkQuadrant(&a));
	printf("\nEnter the co-ordinates of point 2\n");
	accept(&b);
	printf("Quadrant of point 2:  %d\n",checkQuadrant(&b));
	if (a.x== b.x && a.y==b.y)
	{
		printf("\nTwo points are same\n");
	}
	else
	{
		printf("\nTwo points are not same\n");
	}
//printf ("%d",a.x);
}
void accept (struct point *temp)
{
	int a,b;
	scanf("%d%d",&a,&b);
	temp->x=a;
	temp->y=b;
}

int checkQuadrant(struct point *temp)
{
	int a=temp->x,b=temp->y;
	if (a==0 && b==0)
	{
		return -1;
	}
	if (b<0 && a<0)
	{
		return 3;
	}
	if (b<0 && a>0)
	{
		return 4;
	}
	if (b>0 && a >0)
	{
		return 1;
	}
	return 2;
}
