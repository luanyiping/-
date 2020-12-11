#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct student
{
	char studentNo[20];
	char studentName[11];
	char score[20];
};
struct node
{
	struct student data;
	struct node* next;
};
void makemenu()
{
	printf("***************************菜单************************************\n");
	printf(" 1 增加学生记录\n");
	printf(" 2 删除学生记录\n");
	printf(" 3 查找学生记录\n");
	printf(" 4 修改学生记录\n");
	printf(" 5 统计学生人数\n");
	printf(" 6 显示学生记录\n");
	printf(" 7 退出系统\n");
	printf("********************************************************************\n");

}
void inputstudent(struct node* p)
{
	printf("请输入学生学号:");
	scanf("%s", p->data.studentNo);
	printf("请输入学生的姓名:");
	scanf("%s", p->data.studentName);
	printf("请输入学生的成绩:");
	scanf("%s", p->data.score);
	p->next = NULL;
}
void displaynode(struct node* head)
{
	struct node* p = head->next;
	if (head->next == NULL)
	{
		printf("无学生记录\n");
	}
	while (p != NULL)
	{
		printf("%s\t %s\t%s\n", p->data.studentNo, p->data.studentName,p->data.score);
		p = p->next;

	}
	
}
bool addnode(struct node* head)
{
	struct node* p;
	struct node* q;
	struct node* node;
	node = (struct node*)malloc(sizeof(struct node));
	inputstudent(node);
	q = head;
	p = head->next;
	if (head->next == NULL)
	{
		head->next = node;
	}
	else
	{
		while (p != NULL)
		{
			if (node->data.studentNo < p->data.studentNo)
			{
				q->next = node;
				node->next = p;
				return true;
			}
			else
			{
				q = p;
				p = p->next;
			}
		}
		q->next = node;
	}
	return true;
}
bool deletenode(struct node* head, char no[])
{
	printf("请输入要删除学生的学号:");
	scanf("%s", no);
	struct node* p;
	struct node* q;
	if (head->next == NULL)
	{
		return false;
	}
	q = head;
	p = head->next;
	while (p != NULL)
	{
		if (strcmp(p->data.studentNo, no) == 0)
		{
			q->next = p->next;
			free(p);
			return true;
		}
		else
		{
			q = p;
			p = p->next;
		}
	}
	return false;

}
bool querynode(struct node* head, char no[])
{	
	printf("请输入要查询的学生学号:");
	scanf("%s", no);
	struct node*p;
	p = head->next;
	if (head->next == NULL)
	{
		return false;
	}
	while (p != NULL)
	{
		if (strcmp(p->data.studentNo, no) == 0)
		{
			printf("该学生的姓名为:%s\n该学生的学号为: %s\n该学生的成绩为:%s\n", p->data.studentName, p->data.studentNo,p->data.score);
			return true;
		}
		p = p->next;
	}
	return false;
}
bool modifynode(struct node* head, char no[])
{
	printf("请输入学生学号:");
	scanf("%s", no);
	struct node* p;
	struct node* q;
	q = head;
	p = head->next;
	if (head->next == NULL)
	{
		return false;
	}
	while (p != NULL)
	{
		if (strcmp(p->data.studentNo, no) == 0)
		{
			printf("该学生的姓名为:%s\n", p->data.studentName);
			printf("修改后的学生姓名为:");
			scanf("%s", p->data.studentName);
			printf("修改后学生成绩为:");
			scanf("%s", p->data.score);
			return true;
		}
		q = p;
		p = p->next;
	}
	return false;
}
int countnode(struct node* head)
{
	struct node* p = head->next;
	int count = 0;
	if (head->next == NULL)
	{
		count = 0;
		return count;
	}
	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return count;
}
int main555()
{
	int select;
	int count;
	struct node* head;
	char no[20];
	head = (struct node*)malloc(sizeof(struct node));
	head->next = NULL;
	while (1)
	{
		makemenu();
		printf("请输入你的选择(1-7):");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			if (addnode(head))
			{
				printf("成功插入一个学生记录\n");
			}
			break;
		case 2:
			if (deletenode(head, no))
			{
				printf("成功删除一个学生记录\n");
			}
			else
			{
				printf("没有找到要删除的学生\n");
			}
			break;
		case 3:
			if (querynode(head, no))
			{
				printf("成功找到学生记录\n");
			}
			else
			{
				printf("没有找到要查询的学生\n");
			}
			break;
		case 4:
			if (modifynode(head, no))
			{
				printf("成功修改\n");
			}
			else
			{
				printf("无法修改\n");
			}
			break;
		case 5:
			printf("学生总数为:%d\n", countnode(head));
			printf("成功统计\n");
			break;
		case 6:
			displaynode(head);
			break;
		case 7:
			exit(0);
			break;
		}
	}
}



