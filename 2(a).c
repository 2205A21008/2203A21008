/*Define a structure named "Address" with members:street(string),city (string),and 
pin(integer). Declare another structure named "Person" with members: name (string) and 
address (of type Address). Create a variable of type Person and initialize its members. 
Print the person's name and address details.*/
#include<stdio.h>

//1. define address structure and person structure.
struct person
{
	char name[15];
	
	struct address
	{
		char street[11];
		char city[20];
		int pin;	
	}a; //nested structure
		
};
void main()
{
	//2.create a variable for person structure
	struct person p;
	
	//4.1 inserting the values into members of structure dynamically (. dot operator)
	printf("\nEnter Person Name : ");
	gets(p.name);
	printf("Enter Street : ");
	gets(p.a.street);
	printf("Enter City : ");
	gets(p.a.city);
	printf("Enter Pin: ");
	scanf("%ld",&p.a.pin);
	//4.2 retrieving and printing the values from members of structure (. dot operator)
	printf("\nEmployee information\n-------------------");
	printf("\nname : %s",p.name);
	printf("\nphone : %s",p.a.street);
	printf("\ncity : %s",p.a.city);
	printf("\npin : %ld",p.a.pin);
}
