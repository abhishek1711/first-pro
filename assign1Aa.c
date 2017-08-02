//NAME-ABHISHEK NAUTIYAL
//ROLL NO.-1601CS02

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
struct node
{
	char word[50];
	int refno;
	struct node *next;

};

void swap(struct node *a, struct node *b)
{   
	char temp[50];
    strcpy(temp,a->word);
     strcpy(a->word,b->word);
     strcpy(b->word,temp);
     int g;
     g=a->refno;
     a->refno=b->refno;
     b->refno=g;

}
void sort(struct node *head)
{  

	struct node *lptr=head,*ptr1;
	//ptr1=lptr->next;
	int i;
   while(lptr!=NULL){
   	ptr1=lptr->next;
   	while(ptr1!=NULL)
   	{
     if(strcmp(lptr->word,ptr1->word) > 0)
     {
     	swap(lptr,ptr1);
     }
       ptr1=ptr1->next;
   	}
   	lptr=lptr->next;
   }
}
int main()
{
	int i;
    scanf("%d",&n);
    char word[30], *w[n];
    for(i=0;i<n;i++)
    {
    	scanf("%s",word);
    	w[i]=(char *)malloc((strlen(word)+1)*sizeof(char));
    	strcpy(w[i],word);
    }
    int arr[n];
    for(i=0;i<n;i++)
    	{   
    		int len=strlen(w[i]);
    		int t=0;
    		int j;
    		for(j=0;j<n;j++)
    		{   
    			int temp;
    			if(j==i)
    			{
    				continue;
    			}
    			else{
                    int k;
                for(k=0;k<len;k++){
                	if(w[i][k] != w[j][k]){
                		temp=k;
                	
                	break;
                }
                }
    			}
    			if(temp>t)
    			{
    				t=temp;
    			}
    		}
    		arr[i]=t;

    	}
    	char *w1[n];
    	for(i=0;i<n;i++)
    		{
    			w1[i]=(char *)malloc((arr[i] + 1)*sizeof(char));
    			int j;
    			for(j=0;j<=arr[i];j++)
    			w1[i][j]=w[i][j];
    		}
    		/*for(i=0;i<n;i++)
    		{
    			printf("%s\n",w1[i]);
    		}*/

struct node *head=NULL,*p,*prev;
        for(i=0;i<n;i++)
        {
          p=(struct node*)malloc(sizeof(struct node));
          //p->word=(char *)malloc((strlen(w1[i])+1)*sizeof(char));
          strcpy(p->word,w1[i]);
         
          p->next=NULL;
          p->refno=i;
          if(head==NULL)
          	head=p;
          else
          	prev->next=p;
        
        prev=p;
        }
        sort(head);

        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
        	printf("%s,",temp->word);
        	temp=temp->next;
        }


      /*  for(i=0;i<n;i++)
        {
        	int j;
        	for(j=i;j<n;j++)
        	{
        		if(strcmp(w[i],w[j]) > 0)
        		{
        			char temp[50];
        			strcpy(temp,w[i]);
        			strcpy(w[i],w[j]);
        			strcpy(w[j],temp);
        		}
        	}
        }*/
       printf("\n");
       temp=head;
        for(i=0;i<n;i++)
        {
        	printf("%s,",w[temp->refno]);
        temp=temp->next;
        }
        printf("\b");
	return 0;
}

