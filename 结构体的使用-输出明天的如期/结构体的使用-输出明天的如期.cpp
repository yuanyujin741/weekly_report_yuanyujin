#include<stdio.h>

//注意结构体的定义方式,关注结尾的分号//
struct date
{
	int day;
	int month;
	int year;
	char test;
}today, tomorrow;

struct date* getdate(struct date* p)
{
	printf("请输入今天的日期，格式为yyyy/mm/dd\n");
	scanf_s("%i/%i/%i", &p->year, &p->month, &p->day);
	return p;
	//注意这个技巧，返回指针，把指针的变化进行输出//
	//关注p->x与(*p).x是一样的，值得都是那个成员变量的值//
}

//
struct date nextdate(struct date d) 
{
	int lday[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (d.year % 400 == 0 || d.year % 4 == 0 && d.year % 100 != 0)
	{
		lday[1] = 29;
	}//把闰年的情况直接写在lday的旁边，作为修正可能不正确的最后一天
	if (d.month == 12 && d.day == 31)
	{
		d.year += 1;
		d.month = 1;
		d.day = 1;
	}
	else if(d.day==lday[d.month-1])
		/*关注要进行month减一的操作哦*/
	{
		d.month += 1;
		d.day = 1;
	}
	else
	{
		d.day += 1;
	}
	return d;
}

void putdate(struct date date)
{
	printf("明天的日期是 %i/%i/%i", date.year, date.month, date.day);
}

int main()
{
	getdate(&today);//指针要取得地址&   ！=   *
	tomorrow=nextdate(today);//为了避免today的值发生改变，我们最好去输入today，而不是指针
	putdate(tomorrow);
	//小实验
	printf("\n结构变量的大小是%d", sizeof(tomorrow));
	printf("各个成员的和是%d\n", sizeof(int) * 3+sizeof(char));
	/*
	* test的结果说明在structure当中需要字节的对齐，所以说char和int所占据的字节应该都是四个
	*/
	//小实验2
	printf("tomorrow.day=%p\n", &tomorrow.day);
	printf("tomorrow.test=%p", &tomorrow.test);
	return 0;
}