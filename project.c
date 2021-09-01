#include<stdio.h>
struct library{
	char bk_name[30];
	char author[30];
	int pages;
	float price;
};
int main()
{
	struct library l[100];
	char ar_nm[30],bk_nm[30];
	int i,j,count;
	i=j=count=0;
	
	while(j!=6)
	{
		printf("\n\n 1. Add book Information");
	    printf("\n\n 2. Display book information");
	    printf("\n\n 3. List all books of given author");
	    printf("\n\n 4. List the title of specified book");
	    printf("\n\n 5. List the count of books in the library");
	    printf("\n\n 6. Exit");
	    
	    printf("\n\n Enter one of the above : ");
	    scanf("%d",&j);
	
	    switch(j)
		{
	     case 1:
	     	
		 printf("Enter book name = ");
		 scanf("%s",&l[i].bk_name);
		 
		 printf("Enter author name = ");
		 scanf("%s",&l[i].author);
		 
		 printf("Enter pages = ");
		 scanf("%d",&l[i].pages);
		 
		 printf("Enter price = ");
		 scanf("%f",&l[i].price);
		 count++;
		 break;
		 
		 case 2:
		 printf(" You have entered the following information\n");
		 for(i=0; i<count; i++)
		 {
		 	printf("book name = %s",l[i].bk_name);
		 	
		 	printf("\t author name = %s",l[i].author);
		 	
		 	printf("\t pages  = %d",l[i].pages);
		 	
		 	printf("\t price = %f",l[i].price);
		 	
		 }
		 break;
		 
		 case 3:
		 printf("Enter author name : ");
		 scanf("%s",ar_nm);
		 
		 for(i=0; i<count; i++) 
		 {
		 	if (strcmp(ar_nm,l[i].author) == 0)
		
		    printf("\n %s %s %d %f", l[i].bk_name,l[i].author,l[i].pages,l[i].price);
		 	
		 }
		 break;
		 	
		 case 4:
		 printf("Enter book name : ");
		 scanf("%s",bk_nm);
		 for(i=0; i<count; i++)
		 {
		 	if (strcmp(bk_nm,l[i].bk_name) == 0)
		
		    printf("\n %s \t %s \t %d \t %f", l[i].bk_name,l[i].author,l[i].pages,l[i].price);
		 	
		 }
		 break;
		 case 5:
		 	printf("\n No of books in library : %d",count);
		break;
		

		}
	
	}
	return 0;
}
