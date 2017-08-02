//NAME-ABHISHEK NAUTIYAL
//ROLL NO.-1601CS02
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//This is the structure for the linked list.
struct node
{
	int serlno;
	char titl[50];
	char athr[50];
	char isstus[20];
	struct node *next;
};


int main()
{
	
	char chos;//option that is chosen
    printf("Choose any of the following 6 options\n");
	printf("a. Make a new entry of book\nb. View Details of a book\nc. Show list of available books\nd. Issue a book\ne. Return a book\nf. Exit\n");

	scanf("%c",&chos);
    struct node *head=NULL,*ptr,*prev;
     while(chos!='f')
     {  
     	//when inputting details of books then inserting it into 
     	if(chos=='a')
     	{
          ptr=(struct node *)malloc(sizeof(struct node));
          printf("ENTER THE SERIAL NO. OF BOOK-");
          scanf("%d",&ptr->serlno);
          printf("\nENTER TITLE OF BOOK-");
          scanf(" %[^\n]s",ptr->titl);
          printf("\nENTER NAME OF AUTHOR OF BOOK-");
          scanf(" %[^\n]s",ptr->athr);
          strcpy(ptr->isstus,"Not Issued");
          printf("\nNew Entry Successful\n");
          ptr->next=NULL;
          if(head==NULL)
          	head=ptr;
          else
          	prev->next=ptr;

          prev=ptr;
     	}
     	//when  searching for a book
     	else if(chos=='b')
     	{
            printf("Choose any of the 3 options\n");
            printf("\n1. By serial No.\n2. By Title\n3. By Author\n");
            int n;
            scanf("%d",&n);
            struct node *temp3=head;
            //searching details through serial no.
            if(n==1)
            {
                printf("Enter Serial NO. of book\n");
            int ser;
            scanf("%d",&ser);
            
            
          int count1=0;
          while(temp3!=NULL)
          {
          	if(temp3->serlno==ser)
          	{
               printf("SERIAL NO-%d",temp3->serlno);
             		printf("\nAUTHOR NAME-%s",temp3->athr);
             		printf("\nTITLE-%s",temp3->titl);
                    printf("\nISSUE STATUS-%s",temp3->isstus);
             		printf("\n");
               count1=1;
          	}
          	temp3=temp3->next;
          }
          if(count1==0)
          {
          	printf("Serial NO. does not exist\n");
          }
            }//searching details through title
            else if(n==2)
            {
            	printf("Enter Title of book\n");
            	char tit[50];
                
                scanf(" %[^\n]s",tit);
                
            
          		int count2=0;
          		while(temp3!=NULL)
          		{
          			if(strcmp(temp3->titl,tit)==0)
          				{
               				printf("SERIA NO,-%d",temp3->serlno);
             				printf("\nAUTHOR NAME-%s",temp3->athr);
             				printf("\nTITLE-%s",temp3->titl);
                    		printf("\nISSUE STATUS-%s",temp3->isstus);
             				printf("\n");
               				count2=1;
          				}
          			temp3=temp3->next;
          		}
          		if(count2==0)
          		{
          			printf("Title does not exist\n");
          
            	}
        	}
        	//searching details through author
            else if(n==3)
            {
            	printf("Enter Author of book\n");
            
            char aut[50];
            scanf(" %[^\n]s",aut);
            
            
          int count3=1;
          while(temp3!=NULL)
          {
          	if(strcmp(temp3->athr,aut)==0)
          	{  
          		printf("%d",count3);
               printf("SERIA NO,-%d",temp3->serlno);
             		printf("\nAUTHOR NAME-%s",temp3->athr);
             		printf("\nTITLE-%s",temp3->titl);
                    printf("\nISSUE STATUS-%s",temp3->isstus);
             		printf("\n");
               count3++;
          	}
          	temp3=temp3->next;
          }
          if(count3==0)
          {
          	printf("Author does not exist\n");
          }
            }
            //change here
            //getchar()
     	}
     	//printing details of book which are not issued
     	else if(chos=='c')
     	{
             struct node *temp=head;
             int tuk=0;
             while(temp!=NULL)
             {
             	if(strcmp(temp->isstus,"Not Issued")==0)
             	{
             		printf("SERIA NO,-%d",temp->serlno);
             		printf("\nAUTHOR NAME-%s",temp->athr);
             		printf("\nTITLE-%s",temp->titl);
             		printf("\n");
             		tuk++;
             	}
             	/*else
             		continue;*/
             	temp=temp->next;
             }
             if(tuk==0)
             	printf("No book is available\n");
             //change here
             //getchar();
     	}
     	//issuing book if it is available
     	else if(chos=='d')
     	{ 
     	  printf("Enter Serial NO. of book\n");
          int ser1;
          scanf("%d",&ser1);
          struct node *temp1=head;
          int count=0;
          while(temp1!=NULL)
          {
          	if((temp1->serlno==ser1) && strcmp(temp1->isstus,"Not Issued")==0)
          	{
               strcpy(temp1->isstus,"Issued");
               count=1;
          	}
          	temp1=temp1->next;
          }
          if(count==0)
          {
          	printf("Serial NO. does not exist\n");
          }
          //change here
          //getchar();
     	}
     	//returning book
     	else if(chos=='e')
     	{
            printf("Enter Serial NO. of book\n");
            int ser2;
            scanf("%d",&ser2);
            struct node *temp2=head,*q;
            
          int count1=0;
          while(temp2!=NULL)
          {
          	if(temp2->serlno==ser2)
          	{
               strcpy(temp2->isstus,"Not Issued");
               count1=1;
          	}
          	temp2=temp2->next;
          }
          if(count1==0)
          {
          	printf("Serial NO. does not exist\n");
          }
          //changeb here
          //getchar();
     	}

     	printf("Choose any of the following 6 options\n");
	printf("a. Make a new entry of book\nb. View Details of a book\nc. Show list of available books\nd. Issue a book\ne. Return a book\nf. Exit\n");
     	
     	scanf(" %c",&chos);
    }
	return 0;

}
