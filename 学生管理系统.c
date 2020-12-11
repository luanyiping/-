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
	printf("***************************�˵�************************************\n");
	printf(" 1 ����ѧ����¼\n");
	printf(" 2 ɾ��ѧ����¼\n");
	printf(" 3 ����ѧ����¼\n");
	printf(" 4 �޸�ѧ����¼\n");
	printf(" 5 ͳ��ѧ������\n");
	printf(" 6 ��ʾѧ����¼\n");
	printf(" 7 �˳�ϵͳ\n");
	printf("********************************************************************\n");

}
void inputstudent(struct node* p)
{
	printf("������ѧ��ѧ��:");
	scanf("%s", p->data.studentNo);
	printf("������ѧ��������:");
	scanf("%s", p->data.studentName);
	printf("������ѧ���ĳɼ�:");
	scanf("%s", p->data.score);
	p->next = NULL;
}
void displaynode(struct node* head)
{
	struct node* p = head->next;
	if (head->next == NULL)
	{
		printf("��ѧ����¼\n");
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
	printf("������Ҫɾ��ѧ����ѧ��:");
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
	printf("������Ҫ��ѯ��ѧ��ѧ��:");
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
			printf("��ѧ��������Ϊ:%s\n��ѧ����ѧ��Ϊ: %s\n��ѧ���ĳɼ�Ϊ:%s\n", p->data.studentName, p->data.studentNo,p->data.score);
			return true;
		}
		p = p->next;
	}
	return false;
}
bool modifynode(struct node* head, char no[])
{
	printf("������ѧ��ѧ��:");
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
			printf("��ѧ��������Ϊ:%s\n", p->data.studentName);
			printf("�޸ĺ��ѧ������Ϊ:");
			scanf("%s", p->data.studentName);
			printf("�޸ĺ�ѧ���ɼ�Ϊ:");
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
		printf("���������ѡ��(1-7):");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			if (addnode(head))
			{
				printf("�ɹ�����һ��ѧ����¼\n");
			}
			break;
		case 2:
			if (deletenode(head, no))
			{
				printf("�ɹ�ɾ��һ��ѧ����¼\n");
			}
			else
			{
				printf("û���ҵ�Ҫɾ����ѧ��\n");
			}
			break;
		case 3:
			if (querynode(head, no))
			{
				printf("�ɹ��ҵ�ѧ����¼\n");
			}
			else
			{
				printf("û���ҵ�Ҫ��ѯ��ѧ��\n");
			}
			break;
		case 4:
			if (modifynode(head, no))
			{
				printf("�ɹ��޸�\n");
			}
			else
			{
				printf("�޷��޸�\n");
			}
			break;
		case 5:
			printf("ѧ������Ϊ:%d\n", countnode(head));
			printf("�ɹ�ͳ��\n");
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



