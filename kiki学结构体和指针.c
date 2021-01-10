#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int main()
{
	//插入结点
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	struct node* list = NULL;
	struct node* tail = NULL;
	for (i = 0; i < n; i++)
	{
		int data;
		scanf("%d", &data);
		struct node* n = (struct node*)malloc(sizeof(struct node));
		n->data = data;
		n->next = NULL;
		if (list == NULL)
		{
			list = n;
			tail = n;
		}
		else
		{
			tail->next = n;
			tail = tail->next;
		}
	}
	//删除结点
	int del = 0;
	scanf("%d", &del);
	struct node* cur = list;
	struct node* prev = NULL;
	while (cur)
	{
		if (cur->data == del)
		{
			struct node* pd = cur;
			if (cur == list)
			{
				list = list->next;
				cur = list;
			}
			else
			{
				prev->next = cur->next;
				cur = cur->next;
			}
			n--;
			free(pd);
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	printf("%d\n", n);
	//释放空间
	cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	while (cur)
	{
		struct node* del = cur;
		cur = cur->next;
		free(del);
	}
}