				/* !!! The Tic-Tac-Toe Game !!! */

#include<stdio.h>
#include<stdlib.h>
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gamename()
{
	printf("\n\t\t !!! The Tic-Tac-Toe Game !!!\n");
}
void show()
{
	printf("\n\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
	printf("\t\t\t---|---|---\n");
}
void inputsymbol()
{
	printf("\n\t Player 1 Symbol : x\n");
	printf("\n\t Player 2 Symbol : 0\n");
}
int count=0;
void play()
{
	char p,s;
	printf("\nEnter position and symbol:\n");
	fflush(stdin);
	scanf("%c",&p);
	fflush(stdin);
	scanf("%c",&s);
	count++;
	check(p,s);
}
void check(char p,char s)
{
	int i;
	for(i=0;i<9;i++)
	{
		if(a[i]==p)
			a[i]=s;
	}
}
int end()
{
	if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
		return (1);
	else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
		return(2);
	else if (a[1]=='x'&&a[4]=='x'&&a[7]=='x')
		return (1);
	else if (a[1]=='0'&&a[4]=='0'&&a[7]=='0')
		return (2);
	else if (a[2]=='x'&&a[5]=='x'&&a[8]=='x')
		return (1);
	else if (a[2]=='0'&&a[5]=='0'&&a[8]=='0')
		return (2);
	else if (a[3]=='x'&&a[4]=='x'&&a[5]=='x')
		return (1);
	else if (a[3]=='0'&&a[4]=='0'&&a[5]=='0')
		return (2);
	else if (a[2]=='x'&&a[4]=='x'&&a[6]=='x')
		return (1);
	else if (a[2]=='0'&&a[4]=='0'&&a[6]=='0')
		return (2);
	else if (a[6]=='x'&&a[7]=='x'&&a[8]=='x')
		return (1);
	else if (a[6]=='0'&&a[7]=='0'&&a[8]=='0')
		return (2);
	return(3);	
}
void main()
{
	int k;
	char ch;
	
	again:
	system("cls");
	gamename();
	show();	
	inputsymbol();
	play();
	
	label:
	system("cls");
	show();
	play();
	k=end();
	system("cls");
	show();
	
	if(count<9)
	{
		if(k==1)
		{
			printf("Player 1 has won!!!");
			count=0;
		}
		else if(k==2)
		{
			printf("Player 2 has won!!!");
			count=0;
		}
		else
			goto label;
	}
	else
	{
		printf("\nThe Game has Drawn !");
		count=0;
	}
		
	printf("Do you want to play again ? \nEnter y for YES and n for NO");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y')
	{
		a[0]='1';
		a[1]='2';
		a[2]='3';
		a[3]='4';
		a[4]='5';
		a[5]='6';
		a[6]='7';
		a[7]='8';
		a[8]='9';		
		goto again;
	}
}

// abc
