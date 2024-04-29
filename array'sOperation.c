#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void create();
void insert();
void deletion();
void search();
void display();

int ch,arr[MAX],n,element,pos_in,element_in,i,pos;
int main()
{
    do
    {
        printf("\n Main Menu");
        printf("\n 1.Create \n 2.Delete \n 3.Search \n 4. Insert \n 5 . Display\n 6.Exit\n");
        printf("Enter your choise : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                create();
                break;
            case 2:
                deletion();
                break;
            case 3:
                search();
                break;
            case 4:
                insert();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("\n Enter the correct choise: ");
        }
        getch();
        system("cls");
    }
    while(ch!=6);
    return (0);
}

void create()
{
	printf("\n Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the element %d:",i+1);
		scanf("%d",&arr[i]);
	}
    display();
}

void deletion()
{
printf("\n Enter the position to delete:"); 
scanf("%d",&pos);
if(pos>=n)
{
	printf("\n Invalid location");
}
else
{
	for(i=pos+1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	n--;
}
printf("\n The Elements after deletion");
display();
// for(i=0;i<n;i++)
// printf("\t%d",arr[i]);
}

void search()
{
	int found=0;
	printf("\n Enter the element to be searched:");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			found=1;
			break;
		}
	else
	continue;
	}
if(found==1)
printf("Value is in position %d :",i);
else
printf("Value %d is not in the list",element);
}

void insert()
{
	printf("\n Enter the position to insert:");
	scanf("%d",&pos_in);
	
	if(pos_in>=n)
	{
		printf("\n Invalid location");
	}
	else
	{
		for(i=MAX-1;i>pos_in-1;i--)
		{
			arr[i+1]=arr[i];
		}
	printf("\n Enter the element to insert:\n");
	scanf("%d",&element_in);
	arr[pos_in]=element_in;
	n++;
	display();
	
	}
}

void display()
{
	printf("\n The Elements of the array are:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
}