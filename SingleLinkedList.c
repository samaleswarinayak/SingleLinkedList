/*Write a menu driven program to implement Single Linked lIst */
#include<stdio.h>
#include<stdlib.h>

void create();
void traverse();
void insert_begin();
void insert_end();
void insert_afternode();
void insert_location();
void delete_begin();
void delete_end();
void delete_afternode();
void delete_location();
void reverse();
void sort();
void merge();
void create1();
void create2();

struct node
{
	int info;
	struct node *next;
};
struct node *start=NULL, *start1=NULL, *start2=NULL;


main()
{
	int choice;
	while(1)
	{
		printf("\n0.Createion \n1.Traverse\n2.Insert at Beginning\n3.Insert at End\n4.Insert after given Node\n5.Insert at a Specific location\n6.Delete from Beginning\n7.Delete from End\n8.Delete after a given node\n9.Delete from Specific Location\n10.Exit\n11.Reverse the List\n12.Sorting\n13.Merging\n");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0:create();
					break;
			case 1:traverse();
					break;
			case 2:insert_begin();
					break;
			case 3:insert_end();
					break;
			case 4:insert_afternode();
					break;
			case 5:insert_location();
					break;
			case 6:delete_begin();
					break;
			case 7:delete_end();
					break;
			case 8:delete_afternode();
					break;
			case 9:delete_location();
					break;
			case 10:exit(0);
			case 11:reverse();
					break;
			case 12:sort();
					break;
			case 13:merge();
					break;
			default:printf("\nWrong Choice\n");
					break;
		}
	}
}
void create()
{
	int total,item,index;
	struct node *newnode,*temp;
	if(start == NULL)
	{
		printf("\nEnter the total number of nodes you want to keep\n");
		scanf("%d",&total);
		if(total<=0)
		{
			printf("\nList size must be greater than zero\n");
		}
		else
		{
			temp = (struct node *)malloc(sizeof(struct node));
			printf("\nEnter the value to keep in the node\n");
			scanf("%d",&item);
			temp->info = item;
			temp->next = NULL;
			start = temp;
			for(index=2;index<=total;index++)
			{
				newnode = (struct node *)malloc(sizeof(struct node));
				printf("\nEnter the value to keep in the node\n");
				scanf("%d",&item);
				newnode->info = item;
				newnode->next = NULL;
				temp->next = newnode;
				temp = newnode;
			}
			printf("\nList is created\n");
		}
	}
	else
	{
		printf("\nList is already present\n");
	}
	
}
void create1()
{
	int total,item,index;
	struct node *newnode,*temp;
	if(start1 == NULL)
	{
		printf("\nEnter the total number of nodes you want to keep\n");
		scanf("%d",&total);
		if(total<=0)
		{
			printf("\nList size must be greater than zero\n");
		}
		else
		{
			temp = (struct node *)malloc(sizeof(struct node));
			printf("\nEnter the value to keep in the node\n");
			scanf("%d",&item);
			temp->info = item;
			temp->next = NULL;
			start1 = temp;
			for(index=2;index<=total;index++)
			{
				newnode = (struct node *)malloc(sizeof(struct node));
				printf("\nEnter the value to keep in the node\n");
				scanf("%d",&item);
				newnode->info = item;
				newnode->next = NULL;
				temp->next = newnode;
				temp = newnode;
			}
			printf("\nList1 is created\n");
		}
	}
	else
	{
		printf("\nList is already present\n");
	}
	
}
void create2()
{
	int total,item,index;
	struct node *newnode,*temp;
	if(start2 == NULL)
	{
		printf("\nEnter the total number of nodes you want to keep\n");
		scanf("%d",&total);
		if(total<=0)
		{
			printf("\nList size must be greater than zero\n");
		}
		else
		{
			temp = (struct node *)malloc(sizeof(struct node));
			printf("\nEnter the value to keep in the node\n");
			scanf("%d",&item);
			temp->info = item;
			temp->next = NULL;
			start2 = temp;
			for(index=2;index<=total;index++)
			{
				newnode = (struct node *)malloc(sizeof(struct node));
				printf("\nEnter the value to keep in the node\n");
				scanf("%d",&item);
				newnode->info = item;
				newnode->next = NULL;
				temp->next = newnode;
				temp = newnode;
			}
			printf("\nList2 is created\n");
		}
	}
	else
	{
		printf("\nList is already present\n");
	}
	
}

void traverse()
{
	struct node *temp;
	if(start == NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		temp = start;
		printf("\nValues of list are\n");
		while(temp!=NULL)
		{
			printf("%d\t",temp->info);
			temp = temp->next;
		}
		printf("\n");
	}
}

void insert_begin()
{
	struct node *temp;
	int item;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("\nMemory is not allocated\n");
	}
	else
	{
		printf("\nEnter the value to insert\n");
		scanf("%d",&item);
		temp->info = item;
		temp->next = NULL;
		if(start == NULL)
		{
			start = temp;
		}
		else
		{
			temp->next = start;
			start = temp;
		}
	}
}
void insert_end()
{
	struct node *temp,*ptr;
	int item;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("\nMemory is not allocated\n");
	}
	else
	{
		printf("\nEnter the value to insert\n");
		scanf("%d",&item);
		temp->info = item;
		temp->next = NULL;
		if(start == NULL)
		{
			start = temp;
		}
		else
		{
			ptr = start;
			while(ptr->next !=NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = temp;
		}
	}
}
void insert_afternode()
{
	struct node *temp,*ptr;
	int item,value;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("\nMemory is not allocated\n");
	}
	else
	{
		printf("\nEnter the value to insert\n");
		scanf("%d",&item);
		temp->info = item;
		temp->next = NULL;
		if(start == NULL)
		{
			start = temp;
		}
		else
		{
			printf("\nEnter the node after which you want to insert\n");
			scanf("%d",&value);
			ptr=start;
			while(ptr!=NULL && ptr->info!=value)
			{
				ptr=ptr->next;
			}
			if(ptr == NULL)
			{
				printf("\nNode is not present\n");
			}
			else
			{
				temp->next = ptr->next;
				ptr->next = temp;
			}
		}
	}
}
void insert_location()
{
	struct node *temp,*ptr,*ptr1;
	int count=1,loc;
	int item;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("\nMemory is not allocated\n");
	}
	else
	{
		printf("\nEnter the value to insert\n");
		scanf("%d",&item);
		temp->info = item;
		temp->next = NULL;
		if(start == NULL)
		{
			start = temp;
		}
		else
		{
			printf("\nEnter the location at which you want to insert\n");
			scanf("%d",&loc);
			if(loc == 1)
			{
				temp->next = start;
				start = temp;
			}
			else
			{
				ptr=start;
				while(ptr!=NULL && count!=loc)
				{
					ptr1=ptr;
					ptr=ptr->next;
					count++;
				}
				if(ptr == NULL)
				{
					printf("\nNode is not present\n");
				}
				else
				{
					ptr1->next = temp;
					temp->next = ptr;
				}
			}
		}
	}			
}
void delete_begin()
{
	struct node *temp;
	if(start == NULL)	
	{
		printf("\nList is empty\n");
	}
	else
	{
		temp = start;
		printf("\nDeleted node = %d\n",temp->info);
		start = start->next;
		free(temp);
	}
}
void delete_end()
{
	struct node *temp,*ptr;
	if(start == NULL)	
	{
		printf("\nList is empty\n");
	}
	else
	{
		temp = start;
		if(start->next == NULL)
		{
			printf("\nDeleted node = %d\n",start->info);
			free(temp);
			start = NULL;
		}
		else
		{
			while(temp->next != NULL)
			{
				ptr = temp;
				temp = temp->next;
			}
			printf("\nDeleted node = %d\n",temp->info);
			ptr->next = NULL;
			free(temp);
		}
	}
}
void delete_afternode()
{
	struct node *ptr,*temp;
	int value;
	if(start == NULL)	
	{
		printf("\nList is empty\n");
	}
	else
	{
		printf("\nEnter the node after which you want to delete\n");
		scanf("%d",&value);
		ptr=start;
		while(ptr!=NULL && ptr->info!=value)
		{
			ptr=ptr->next;
		}
		if(ptr == NULL)
		{
			printf("\nNode is not present\n");
		}
		else if(ptr->next == NULL)
		{
			printf("\nNo node is present after this node\n");
		}
		else
		{
			temp = ptr->next;
			ptr->next = temp->next;
			printf("\nDeleted node = %d\n",temp->info);
			free(temp);
		}
	}
		
}
void delete_location()
{
	struct node *ptr,*ptr1;
	int loc,count=1;
	if(start == NULL)	
	{
		printf("\nList is empty\n");
	}
	else
	{
		printf("\nEnter the location from which you want to delete\n");
		scanf("%d",&loc);
		ptr=start;
		while(ptr!=NULL && count!=loc)
		{
			ptr1 = ptr;
			ptr = ptr->next;
			count++;
		}
		if(ptr == NULL)
		{
			printf("\nNode is not present\n");
		}
		else if(loc == 1)
		{
			start = start->next;
			printf("\nDeleted node = %d\n",ptr->info);
			free(ptr);
		}
		else
		{
			ptr1->next = ptr->next;
			printf("\nDeleted node = %d\n",ptr->info);
			free(ptr);
		}		
	}	
}
void reverse()
{
	struct node *temp,*temp1,*temp2;
	if(start == NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		temp = start;
		temp1 = NULL;
		temp2 = NULL;
		while(temp != NULL)
		{
			temp1 = temp->next;
			temp->next = temp2;
			temp2 = temp;
			temp = temp1;
		}
		start = temp2;
	}
}
void sort()
{
	int item;
	struct node *temp,*min,*ptr;
	if(start == NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		temp = start;
		while(temp->next != NULL)
		{
			min = temp;
			ptr = temp->next;
			while(ptr!= NULL)
			{
				if(ptr->info < min->info)
				{
					min = ptr;
				}
				ptr= ptr->next;
			}
			if(temp != min)
			{
				item = temp->info;
				temp->info = min->info;
				min->info = item;
			}
			temp = temp->next;
		}
	}
}
void merge()
{
	struct node *temp;
	create1();//List1
	create2();//List2
	temp = start1;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = start2;
	start = start1;
}
