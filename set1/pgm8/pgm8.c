/*
Add Time_Zone (another field) to Clock which is an enum listing world time difference 
(Hawaii -10, California -8, Texas -6, Brazil -4, Ireland 0, India +5, Singapore +8, Australia +10, New Zealand +12 ). 
In addition to the above functionalities add another function which takes the Time_Zone and return the Local time at 
specified location
*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char duration[2]="AM";
struct clock{
	int hour,minute,second;
};
struct city{
	char name[10];
	int offset;
};
void timeZone(struct clock *rolex);

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
		printf("Enter your choice:SetTime-1,GetTime-2,AddTime-3,Time at Specific Zone-4,Exit-5\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: setTime(&rolex);
				break;
			case 2: getTime(&rolex);
				break;
			case 3:addTime(&rolex);
				break;
			case 4: timeZone(&rolex);
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

void timeZone(struct clock *rolex)
{
	struct city place[10];
	strcpy(place[0].name,"Hawaii");
	strcpy(place[1].name,"California");
	strcpy(place[2].name,"Texas");
	strcpy(place[3].name,"Brazil");
	strcpy(place[4].name,"Ireland");
	strcpy(place[5].name,"India");
	strcpy(place[6].name,"Singapore");
	strcpy(place[7].name,"Australia");
	strcpy(place[8].name,"NewZealand");
	
	
	place[0].offset=-10;
	place[1].offset=-8;
	place[2].offset=-6;
	place[3].offset=-4;
	place[4].offset=0;
	place[5].offset=5;
	place[6].offset=8;
	place[7].offset=10;
	place[8].offset=12;
	char tempPlace[15];
	int tempTime,i;
	printf("Enter the Zone\n");
	scanf("%s",tempPlace);
	for(i=0;i<9;i++)
	{
		if (strcmp(place[i].name,tempPlace)==0)
		{
			tempTime=place[i].offset;
			break;
		}
	}
	
	((rolex->hour)+tempTime)%24>=12?(strcpy(duration,"PM")):(strcpy(duration,"AM"));
	if(((rolex->hour)+tempTime)%12==0 && strcmp(duration,"PM")==0)
	{
		printf ("**12:%d:%d %s**\n",(rolex->minute)%60,(rolex->second)%60,duration);	
	}
	else{
	printf ("**%d:%d:%d %s**\n",((rolex->hour)+tempTime)%12,(rolex->minute)%60,(rolex->second)%60,duration);
}
}



