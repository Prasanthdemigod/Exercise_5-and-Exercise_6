/*
 the previous program which should give timings in both 12 hours and 24 hours format.
*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char duration[2]="AM";
struct clock{
	int hour,minute,second;
};
void setTime(struct clock *rolex);
void getTime(struct clock *rolex);
void addTime(struct clock *rolex);
void addMinutes(struct clock *rolex);
void addSeconds(struct clock *rolex);
void addHours(struct clock *rolex);
void main()
{
	struct clock rolex;
	int choice;
	setTime(&rolex);
	
	while(1)
	{
		printf("Enter your choice:SetTime-1,GetTime-2,AddTime-3,Exit-4\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: setTime(&rolex);
				break;
			case 2: getTime(&rolex);
				break;
			case 3:addTime(&rolex);
				break;
		default: exit(0);
		}
	}

}

void setTime(struct clock *rolex)
{
	printf("Enter the Time hh:mm:ss\n");
	scanf("%d %d %d",&rolex->hour,&rolex->minute,&rolex->second);
}

void getTime(struct clock *rolex)
{
	(rolex->hour)%24>=12?(strcpy(duration,"PM")):(strcpy(duration,"AM"));
	if((rolex->hour)%12==0 && strcmp(duration,"PM")==0)
	{
		printf ("**12:%d:%d %s**\n",(rolex->minute)%60,(rolex->second)%60,duration);	
	}
	else{
	printf ("**%d:%d:%d %s**\n",(rolex->hour)%12,(rolex->minute)%60,(rolex->second)%60,duration);
}
}

void addTime(struct clock *rolex)
{
	int choice;
	printf ("Enter the units in which the time needs to be added:\nSeconds:1,Minutes:2,Hours:3\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:addSeconds(rolex);
				break;
		case 2: addMinutes(rolex);
				break;
		case 3: addHours(rolex);
				break;
		default: addSeconds(rolex);

	}
}

void addSeconds(struct clock *rolex)
{
	printf("ENter the seconds to be added:\n");
	int temp;
	scanf("%d",&temp);
	rolex->hour=(rolex->hour+temp/3600)%24;
	rolex->minute=(rolex->minute+temp/60)%60;
	rolex->second=(rolex->second+temp)%60;
}

void addHours(struct clock *rolex)
{
	printf("ENter the Hours to be added:\n");
	int temp;
	scanf("%d",&temp);
	rolex->hour=(rolex->hour+temp)%24;
	//rolex->minute=(rolex->minutes+temp/60)%60;
	//rolex->seconds=(rolex->seconds)%60;
}
void addMinutes(struct clock *rolex)
{
	printf("ENter the Minutes to be added:\n");
	int temp;
	scanf("%d",&temp);
	rolex->hour=(rolex->hour+temp/60)%24;
	rolex->minute=(rolex->minute+temp)%60;
	//rolex->seconds=(rolex->seconds)%60;
}


