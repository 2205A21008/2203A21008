/*Define a structure named "Address" with members:street(string),city (string),and 
pin(integer). Declare another structure named "Person" with members: name (string) and 
address (of type Address). Create a variable of type Person and initialize its members. 
Print the person's name and address details.Extend the above program to input details of 
multiple persons and their addresses using an array of structures. Print the details of all
 persons.*/
#include<stdio.h>
// define person and address structure
struct person
{
	char name[15];
	
	struct address
	{
		char street[11];
		char city[20];
		int pin;	
	}a; //nested structure
		
}p[100];
int main()
{
	int i,n;
	printf("Enter the no. of persons :");
    scanf("%d",&n);
	printf("Enter person name,street,city,pin:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %s %d",p[i].name,p[i].a.street,p[i].a.city,&p[i].a.pin);
    }
    printf("\nP_NAME\t\tP_STREET\t\tP_CITY\t\tP_PIN\n*******************************************************************\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%s\t\t%s\t\t%d\n",p[i].name,p[i].a.street,p[i].a.city,p[i].a.pin);
    }		
}
