/*5. Create a rectangle with a structure. It should have Points as members, which should be also a structure.
  Compute the area and perimeter of a rectangle. Check whether areas of two rectangles are same.
*/

#include <stdio.h>
#include <math.h>
	struct point
	{
		int x,y;
	};
	struct rectangle
	{
		struct point a,b,c,d;
		float length,breadth,area,perimeter;
	};

float euclidan(struct point temp,struct point var);
void getRect(struct rectangle *one);
void main()
{
	
	struct rectangle one,two;
	printf("Enter the co-ordinates of rectangle 1\n");
	getRect(&one);
	printf("Area of rectangle 1= %f\n perimeter of rectangle 1= %f",one.area,one.perimeter);
	printf("\nEnter the co-ordinates of rectangle 2\n");
	getRect(&two);
	printf("Area of rectangle 2= %f\n perimeter of rectangle 2= %f",two.area,two.perimeter);
	one.area==two.area?printf("\nAreas are equal"):printf("\nAreas are not equal");





}

void getRect(struct rectangle *one)
{
	printf ("Enter the co_ordinates of point A\n");
	scanf("%d%d",&one->a.x,&one->a.y);
	printf ("Enter the co_ordinates of point B\n");
	scanf("%d%d",&one->b.x,&one->b.y);
	printf ("Enter the co_ordinates of point C\n");
	scanf("%d%d",&one->c.x,&one->c.y);
	printf ("Enter the co_ordinates of point D\n");
	scanf("%d%d",&one->d.x,&one->d.y);
	one->length= euclidan(one->a,one->b);
	one->breadth= euclidan(one->b,one->c);
	one->area=one->length*one->breadth;
	one->perimeter=one->length*2+one->length*2;
}

float euclidan(struct point temp,struct point var)
{
	return (sqrt(pow(temp.x-var.x,2)+pow(temp.y-var.y,2)));
}