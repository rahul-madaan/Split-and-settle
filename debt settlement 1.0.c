#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<time.h>
#include<math.h>

int arr[20][20]={};
int total_members=0;

typedef struct members
{
    char* name;
    struct members* next;
    int net;
    int member_number;
}members;

members *head_names=NULL;

int input_number(int max)
{
   if(max==2)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);//input
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
    else if(max==3)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
    else if(max==4)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3'||input_string[0]=='4') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
    else if(max==5)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3'||input_string[0]=='4' || input_string[0]=='5') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }

    else if(max==6)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3'||input_string[0]=='4' || input_string[0]=='5'|| input_string[0]=='6') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
    else if(max==7)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3'||input_string[0]=='4' || input_string[0]=='5'|| input_string[0]=='6'|| input_string[0]=='7') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
    else if(max==8)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3'||input_string[0]=='4' || input_string[0]=='5'|| input_string[0]=='6'|| input_string[0]=='7'|| input_string[0]=='8') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
    else if(max==9)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3'||input_string[0]=='4' || input_string[0]=='5'|| input_string[0]=='6'|| input_string[0]=='7'|| input_string[0]=='8'|| input_string[0]=='9') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }

    else if(max==10)
        while(1)
        {
            char input_string[5];
            scanf("%s",&input_string);
            int string_length=strlen(input_string);//calculates string length
            int choice=(int)input_string[0];//type conversion of first letter
            if((input_string[0]=='1'||input_string[0]=='2'||input_string[0]=='3'||input_string[0]=='4' || input_string[0]=='5'|| input_string[0]=='6'|| input_string[0]=='7'|| input_string[0]=='8'|| input_string[0]=='9'|| input_string[0]=='10') && string_length==1)
                return choice-48;//ASCII value of '1' is 49
            else
                printf("enter valid input\n");
        }
}


int yes_or_no() {

    while (1) {
        char ans;
        printf("\nEnter YES\n   OR\nEnter NO\n");

        gets(&ans);//asks for string input, used gets() as to avoid any error if user inputs multiple space separated words
        int length = strlen(&ans);
        if ((ans == 121 || ans == 89) && length < 4) {
            return 1;
        } else if ((ans == 110 || ans == 78) && length < 4) {//calls ending print functions
            return 0;
        } else
            printf("\nPlease enter a valid input");
    }
}


void print_array()
{
    int i,j;
    for(i=1;i<total_members+1;i++)
    {
        for(j=1;j<total_members+1;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}

void add_member()
{
        clear_screen();
        char person[20];
        total_members++;
        printf("Enter name of member %d\n",total_members);
        getchar();
        gets(person);
        capitalise(person);
        members* new_member=(members*)malloc(sizeof(members));
        members* temp=head_names;
        new_member->name=person;
        new_member->next= NULL;
        new_member->net=0;
        new_member->member_number=total_members;

        if(head_names==NULL)
            (head_names)=new_member;
        else
        {
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=new_member;
        }
        printf("\nYou added a new member- %s\n",new_member->name);
        print_total_members();
        printf("\nPress ENTER to continue\n");
        getchar();
        clear_screen();
        debt_settlement_menu();
}

void print_total_members()
{
    printf("Total members- %d\n",total_members);
}

void paid_for_everyone()
{
    clear_screen();
    printf("\tWHO PAID FOR EVERYONE?\n\n");
    members*temp=head_names;
    int i;
    for(i=0;i<total_members;i++)
    {
        printf("Press %d for %s\n\n",i+1,temp->name);
        temp=temp->next;
    }
    int ans=input_number(total_members);
    temp=head_names;
    int member_number=0;
    for(i=0;i<ans-1;i++)
    {
        member_number++;
        temp=temp->next;
    }
    printf("\nHow much amount did %s pay for everyone?\n",temp->name);
    int money_paid;
    scanf("%d",&money_paid);
    printf("%s paid %d for everyone\n",temp->name,money_paid);
    printf("Other %d members will pay back Rs.%d to %s for this transaction\n",total_members-1,money_paid/total_members,temp->name);
    for(i=1;i<total_members+1;i++)
    {
        arr[i][member_number+1]=arr[i][member_number+1]+(money_paid/total_members);
    }
    clear_diagonal();
    printf("\n");
    printf("\nPress ENTER to continue\n");
    getchar();
    getchar();
    clear_screen();
    debt_settlement_menu();

}

void debt_settlement()
{
    clear_screen();

    int i,j;
    members* temp=head_names;
    int member_count=1;
    int money_given=0,money_taken=0;
    for(i=1;i<total_members+1;i++)
    {

        for(j=1;j<total_members+1;j++)//money taken horizontal traversal
            money_taken=money_taken-arr[i][j];

        for(j=1;j<total_members+1;j++)//money given vertical traversal
        {
            money_given=money_given+arr[j][i];
        }

        printf("%s is %d\n",temp->name,money_given+money_taken);
        temp->net=money_given+money_taken;

        temp=temp->next;
        money_given=0;
        money_taken=0;
    }
    members* min_pointer;
    members* max_pointer;
    i=1;
    int max_member_number=1,min_member_number=1,max_net=0,min_net=0,detector=0;

    do
    {
        temp=head_names;
        while(temp!=NULL)
        {
            if(temp->net>max_net)
            {
                max_net=temp->net;
                max_member_number=temp->member_number;
                max_pointer=temp;
            }
            else if(temp->net<min_net)
            {
                min_net=temp->net;
                min_member_number=temp->member_number;
                min_pointer=temp;
            }
            temp=temp->next;
        }

        printf("\n");

    if(abs(max_net)==abs(min_net) && abs(max_net!=0))//+ and - both equal and not 0
    {
        printf("%d. %s should pay %d to %s.\n",i,min_pointer->name,max_net,max_pointer->name);
        min_pointer->net=0;
        max_pointer->net=0;
    }
    //problem here in + or - sign and max_pointer should take not give.
    else if(abs(min_net)>abs(max_net))//- bigger than +
    {
        printf("%d. %s should pay %d to %s.\n",i,min_pointer->name,max_net,max_pointer->name);
        min_pointer->net=min_pointer->net+max_pointer->net;
        max_pointer->net=0;

    }
    else if(abs(min_net)<abs(max_net))//+ bigger than -
    {
        printf("%d. %s should pay %d to %s.\n",i,min_pointer->name,abs(min_net),max_pointer->name);
        max_pointer->net=max_pointer->net+min_pointer->net;
        min_pointer->net=0;
    }
    i++;
    min_net=0;
    max_net=0;
    detector=0;
    temp=head_names;
    while(temp->next!=NULL)
    {
        if(temp->net!=0)
            detector=1;
        temp=temp->next;
    }
    }while(detector);
    printf("\nMinimum number of transactions required for debt settlement = %d\n",i-1);

    printf("\nPress ENTER to continue\n");
    getchar();
    getchar();
    clear_screen();
    debt_settlement_menu();


}

void aqua_screen()
{
    system("COLOR 3f");//3f1
}

void delay(int time) {
    clock_t goal = time + clock();
    while (goal > clock());
}

void clear_screen() {
    system("cls");
}

#include <stdio.h>
#define MAX 100

void capitalise(char* str)
{
	int i;

	//capitalize first character of words
	for(i=0; str[i]!='\0'; i++)
	{
		//check first character is lowercase alphabet
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; //subtract 32 to make it capital
			continue; //continue to the loop
		}
		if(str[i]==' ')//check space
		{
			//if space is found, check next character
			++i;
			//check next character is lowercase alphabet
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; //subtract 32 to make it capital
				continue; //continue to the loop
			}
		}
		else
		{
			//all other uppercase characters should be in lowercase
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32; //subtract 32 to make it small/lowercase
		}
	}

}



void paid_for_person()
{
    clear_screen();
    printf("\tWHO PAID?\n\n");
    members* temp = head_names;
    int i=1;
    while(temp!=NULL)//to print list of all members
    {
        printf("Press %d for %s\n\n",i,temp->name);
        temp=temp->next;
        i++;
    }
    int ans=input_number(total_members);
    int member_number=ans;
    temp=head_names;
    for(i=1;i<ans;i++)//to determine name on answer number
    {
        temp=temp->next;
    }
    printf("How much amount did %s pay?\n",temp->name,i);
    int money_paid;
    members* temp2;
    temp2=head_names;
    scanf("%d",&money_paid);
    printf("For whom did %s pay Rs.%d?\n\n",temp->name,money_paid);
    i=1;
    while(temp2!=NULL)//to print list of all members
    {
        printf("Press %d for %s\n\n",i,temp2->name);
        temp2=temp2->next;
        i++;
    }
    ans=input_number(total_members);
    int member_number2=ans;
    temp2=head_names;
    for(i=1;i<ans;i++)
    {
        temp2=temp2->next;
    }
    printf("%s paid Rs.%d for %s\n",temp->name,money_paid,temp2->name);
    arr[member_number2][member_number]=arr[member_number2][member_number]+money_paid;
    printf("\nPress ENTER TO continue\n");
    getchar();
    getchar();
    clear_screen();
    clear_diagonal();

    debt_settlement_menu();
}


void clear_diagonal()
{
    int i;
    for(i=0;i<total_members;i++)
        arr[i][i]=0;
}

void debt_settlement_menu()
{
    printf("\tSELECT FROM MENU BELOW:\n\n1. Add new member\n\n\n2. (person name) paid Rs.(amount)/- for everyone\n   -------------         --------\n\n3. (person name) paid Rs.(amount)/- for (person name)\n   -------------         --------       -------------\n\n4. Settle debt in least possible transactions \n\n");
    int ans=input_number(4);
    if(ans==1)
    {
        add_member();
    }
    else if(ans==2)
    {
        if(total_members<2)
        {
            printf("Not enough members. Try adding more members\n");
            delay(2000);
            clear_screen();
            debt_settlement_menu();
        }
        else
            paid_for_everyone();
    }
    else if(ans==3)
    {
        if(total_members<2)
        {
            printf("Not enough members. Try adding more members\n");
            delay(2000);
            clear_screen();
            debt_settlement_menu();
        }
        else
            paid_for_person();
    }
    else if(ans==4)
    {
        if(total_members<2)
        {
            printf("Not enough members. Try adding more members\n");
            delay(2000);
            clear_screen();
            debt_settlement_menu();
        }
        else
            debt_settlement();
    }
}


void main()
{
    aqua_screen();
    debt_settlement_menu();
    members* temp=NULL;

}
