#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>


void mainCanteenMenuWindow(void);
void itsourcecodePattern(void);
void itsourcecodeFastPattern(void);
void stdPass(void);
void stdLogin(void);
void itsourcecodeLoginAdmin(void);
void PassAdmin(void);
void homeWindowAdmin(void);
void Astudent(void);
void stdSec(void);
void subList(void);
void Fcplab(void);
void Ooplab(void);
void dm(void);
void ece(void);
void AFcplab(void);
void AOoplab(void);
void Adm(void);
void Aece(void);
void schedule(void);
void AsubjectList();
void clubs(void);
void Aclubs(void);
void clubsection(void);
void addclub(void);
void AAcademicPerfomance();
void academicPerfomance(void);
int i;
char passwords[50];
    void gotoxy (int column, int line)
    {
      COORD coord = { 0 ,0 };
      coord.X = column;
      coord.Y = line;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
struct Student{
	char fullName[15];
	char passwords[8];
};

int main (void){
	mainCanteenMenuWindow();
	return 0;
}
void itsourcecodeFastPattern(){
	int col=20,row=5;
	for(i=5;i<=20;i++){ 
		gotoxy(20,i);
		printf("\xdb");
		usleep(100);
	}

	for(i=5;i<=20;i++){ 
		gotoxy(80,i);
		printf("\xdb");
		usleep(100);
	}

	gotoxy(21,5);
	for(i=21;i<80;i++){ 
		usleep(100);
		printf("\xdb");
	}

	gotoxy(21,20);
	for(i=21;i<80;i++){ 
		usleep(100);
		printf("\xdb");
	}

	gotoxy(21,9);
	for(i=21;i<80;i++){ 
		usleep(100);
		printf("\xdb");
	}

	gotoxy(21,7);
	printf("\t\t  ");
	char d[40]="Welcome to CARLOS HILADO COLLEGE";
	for(i=0;i<40;i++){
		usleep(100);
		printf("%c",d[i]);
	}
}
void itsourcecodePattern(){

	int col=20,row=5;
	for(i=5;i<=20;i++){ 
		gotoxy(20,i);
		printf("\xdb");
		usleep(10000);
	}

	for(i=5;i<=20;i++){ 
		gotoxy(80,i);
		printf("\xdb");
		usleep(10000);
	}

	gotoxy(21,5);
	for(i=21;i<80;i++){ 
		usleep(10000);
		printf("\xdb");
	}

	gotoxy(21,20);
	for(i=21;i<80;i++){
		usleep(10000);
		printf("\xdb");
	}

	gotoxy(21,9);
	for(i=21;i<80;i++){
		usleep(10000);
		printf("\xdb");
	}

	gotoxy(21,7);
	printf("\t\t  ");
	char d[40]="Welcome to CARLOS HILADO COLLEGE ";
	for(i=0;i<40;i++){
		usleep(10000);
		printf("%c",d[i]);
	}


}
void mainCanteenMenuWindow(void){
	system("color F3");
	system("cls");
	 itsourcecodePattern();

	char point=254;
	gotoxy(21,11);
	printf("\t\t%c  Z:Admin",point);
	gotoxy(21,13);
	printf("\t\t%c  X:Student",point);
	gotoxy(21,15);
	printf("\t\t%c  C:Quit",point);

	char choice,buff;
	gotoxy(21,21);
	printf("Enter your choice: ");
	choice=getchar();
	scanf("%c",&buff);
	if(choice=='Z' || choice=='z'){
		itsourcecodeLoginAdmin();
	}
	else if(choice=='X' || choice=='x'){
		stdLogin();
	}
	else if(choice=='C' || choice=='c'){
		exit(0);
	}
	else{
		printf("\n\a\t\t\t Invalid choice!!");
		usleep(400000);
		mainCanteenMenuWindow();
	}

}
	void stdLogin(){
		system("cls");
	     itsourcecodeFastPattern();
		 gotoxy(21,11);
         printf("\t\tStudent login:");
		 gotoxy(21,13);
		 printf("\t\t\tUsername : ");
		 gotoxy(21,15);
		 printf("\t\t\tPassword : ");

		stdPass();
       	}
    void itsourcecodeLoginAdmin(){
    	system("cls");
    	itsourcecodeFastPattern();
    	PassAdmin();
	}

void stdPass(){

		 char ch,username[8],check[50],str[50];
		 int c=0;
         gotoxy(50,13);
   		 gets(username);
   	     FILE *fp1;
      	 fp1=fopen("studentlist.txt","r");
    	  while(!feof(fp1))
       {

		fscanf(fp1,"%s",str);
		//fgets(str,50,fp1);
		if(strcmp(username,str)==0 )
		{

			 c=1;
		     gotoxy(50,15);
		     for(i=0;i<50;i++)
		    {
		        ch=getch();

             passwords[i]=ch;

              if(ch == 13)  
                   break;
              if(passwords[i]==8) 
	          {
	          	putch('\b');
	          	putch('\0');
	          	putch('\b');
	           	i=i-1;
	           	if(i<0)
	           	{
	           		gotoxy(51,15);

					continue;
				}
				   i=i-1;
	         	continue;
	           }
             if(ch!=13)      
                   printf("*");
           	}
      passwords[i]='\0';             
      gotoxy(21,16);
      printf("\t\t\t\t   %s", passwords);


			fscanf(fp1,"%s",check);
			if(strcmp(passwords,"ADMIN")==0)
	     	{

			gotoxy(1,27);
			printf("You are succesfully login to admin account");
			sleep(2);

			break;
		    }
		    else{
		    	gotoxy(1,25);
		    	printf("Invalid password,try again");
		    	sleep(1);
		    	stdLogin();

			    }

		}
		else{
			fscanf(fp1,"%s",check);
		}
	}
      if(c==0)
	{
		gotoxy(1,25);
		printf("Invalid username,try again");
		sleep(1);
		stdLogin();
	}
	fclose(fp1);
	stdSec();
}
void PassAdmin(){

	char passwords[6],ch;
	char check[8];
	gotoxy(21,13);
	printf("\tPassword Protected ");


	FILE *fp1;
	fp1=fopen("adminlogin.txt","r");
	while(!feof(fp1))

	{
		 gotoxy(21,15);
		 printf("\t\t\tPassword : ");
		 for(i=0;i<8;i++)
		 {
		 	 ch=getch();
             passwords[i]=ch;
               if(ch == 13)
                   break;

              if(passwords[i]==8) // ascii value of backspace
	          {
	          	putch('\b');
	          	putch('\0');
	          	putch('\b');
	           	i=i-1;
	           	if(i<0)
	           	{
	           		gotoxy(51,15);

					continue;
				}
				   i=i-1;
	         	continue;
	           }
             if(ch!=13)      //13 is ASCII of Enter key
                   printf("*");
           }
     passwords[i]='\0';              //'\0' represents end of the string
      gotoxy(21,16);
      printf("\t\t\t\t   %s", passwords);
            fscanf(fp1,"%s",check);
			if(strcmp(passwords,check)==0)
	     	{
			 gotoxy(1,27);
			 printf("Welcome to admin account's admin page:");
			 sleep(2);
			 homeWindowAdmin();

			 break;
		    }
		    else{
		    	gotoxy(1,25);
		    	printf("Invalid password,try again");
		    	sleep(1);
		    	itsourcecodeLoginAdmin();
		}
	}

}

void AStudent(){
 	system("cls");
 	itsourcecodeFastPattern();
	gotoxy(43,9);
	printf("  Admin Section  ");
	gotoxy(21,10);
	printf("\t\t1. View Students");
	gotoxy(21,11);
	printf("\t\t2. Add Students");
	gotoxy(21,12);
	printf("\t\t3. Back to Main Menu");
	gotoxy(21,13);
	printf("\t\t4. QUIT");
	int choice;
	gotoxy(21,17);
	printf("\tEnter a choice: ");
	scanf("%d",&choice);
	int n=10;
	char buff[n];
	switch(choice){
		case 1:
			system("cls");
 			itsourcecodeFastPattern();
			FILE *fp2;
			fp2 = fopen("studentlist.txt","r");
			
			system("cls");
			i=1;
			while(!feof(fp2)){
				fgets(buff, n,fp2);
				printf("%d. %s",i, buff);
				fgets(buff, n, fp2);
				i++;
			}
			gotoxy(1,25);
			printf("Press any key to go back\n");
			getch();
			AStudent();
			break;
		case 2:
			system("cls");
 			itsourcecodeFastPattern();
 			gotoxy(43,9);
			printf("  Admin Section  ");
			FILE *fp;
			fp = fopen("studentlist.txt","a+");
			fputs("\n",fp);

			struct Student s1;
			gotoxy(21,10);	printf("Enter student's name: ");
			scanf("%s",&s1.fullName);
			//gets(s1.name);
			gotoxy(21,11);  printf("Enter the student's Password: ");
			scanf("%s",&s1.passwords);
			fprintf(fp,"%s",s1.fullName);
			fputs("\n",fp);
			fprintf(fp,"%s",s1.passwords);
			gotoxy(21,17);
			printf("Student added in database");
			sleep(2);
			fclose(fp);
			AStudent();
			break;
		case 3:
			sleep(1);
			homeWindowAdmin();

		case 4:

			exit(0);
		default:
			gotoxy(21,21);
			printf("Invalid Choice!!");
			sleep(1);
			homeWindowAdmin();
	}
}

void AAcademicPerfomance(){
	system("cls");
 	itsourcecodeFastPattern();
	gotoxy(43,9);
	printf("  Admin Section  ");
	gotoxy(21,10);
	printf("\t\t1. View Academic Perfomance of all Students");
	gotoxy(21,11);
	printf("\t\t2. Add Academic Perfomance of student");
	gotoxy(21,12);
	printf("\t\t3. Back to Main Menu");
	gotoxy(21,13);
	printf("\t\t4. QUIT");
	int choice;
	gotoxy(21,17);
	char str[150];
	printf("\tEnter a choice: ");
	scanf("%d",&choice);
	FILE *fp;
	switch(choice){
		case 1:

			system("cls");
			fp = fopen("academicperfomance.txt","r");
			printf("Programme:    Bachelor of Technology in Computer Science and Engineering\n\nSchool:       School of Engineering and Applied Science\n");
			printf("\nWINTER SEMESTER 2020\n\nRollN0        Course     Course Title	                        Credits		Grade Points\n");
			while(!feof(fp)){
				fgets(str,120,fp);
	    		printf("%s ",str);
			}
			printf("\nPress any key to return back");
			getch();
			AAcademicPerfomance();
			break;
		case 2:
			system("cls");
 			itsourcecodeFastPattern();
 			gotoxy(43,9);
			printf("  Admin Section  ");
			FILE *fp;
			float marks[4];
			fp = fopen("academicperfomance.txt","a+");
			fputs("\n",fp);

			struct Student s1;
			gotoxy(21,10);	printf("Enter student's Rollno. : ");
			scanf("%s",&s1.passwords);

			
			gotoxy(21,11);
			printf("Enter the grade of FCP : ");
			scanf(" %f",&marks[0]);
			gotoxy(21,12);
			printf("Enter the grade of OOP : ");
			scanf(" %f",&marks[1]);
			gotoxy(21,13);
			printf("Enter the grade of MAT101 : ");
			scanf(" %f",&marks[2]);
			gotoxy(21,14);
			printf("Enter the grade of ECE104 : ");
			scanf(" %f",&marks[3]);
			fprintf(fp,"%s           CSE100	 Fundamentals of Computer Programming	3	            %.2f\n",s1.passwords,marks[0]);
			fprintf(fp,"%s           CSE101	 Object Oriented Programming Lab	1.5	            %.2f\n",s1.passwords,marks[1]);
			fprintf(fp,"%s           MAT101	 Discrete Mathematics	                3		    %.2f\n",s1.passwords,marks[2]);
			fprintf(fp,"%s           ECE104     Basic electronic Circuits              3                   %.2f\n",s1.passwords,marks[3]);
			fputs("\n",fp);
			fprintf(fp,"%s           Total Semester Credits/Semester Grade Point Average (SGPA)	    %.2f",s1.passwords,(marks[0]+marks[1]+marks[2]+marks[3])/4);
			fputs("\n",fp);
			gotoxy(21,17);
			printf("Academic Perfomance of student added in database");
			sleep(2);
			fclose(fp);
			AAcademicPerfomance();
			break;
		case 3:
			sleep(1);
			homeWindowAdmin();

		case 4:

			exit(0);
		default:
			gotoxy(21,21);
			printf("Invalid Choice!!");
			sleep(1);
			homeWindowAdmin();
	}
}
void AsubjectList(){

	system("cls");
	itsourcecodeFastPattern();
	gotoxy(21,11);
	printf("\t\t\tSubject List:");
	gotoxy(21,13);
	printf("\t1. FCP Lab");
	gotoxy(21,14);
	printf("\t2. OOP Lab ");
	gotoxy(21,15);
	printf("\t3. Discrete Math ");
	gotoxy(21,16);
	printf("\t4. ECE-Basic Electronic Circuits ");
	gotoxy(21,17);
	printf("\t5. Back to Admin Section ");
	gotoxy(21,18);
	printf("\t6. Quit ");
	gotoxy(21,21);
	printf("\t\t Select Any Option :");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:

			AFcplab();
			break;
		case 2:
    		sleep(1);
			AOoplab();
			break;
		case 3:
			sleep(1);
			Adm();
			break;
		case 4:
			sleep(1);
		    Aece();
		    break;
		case 5:
			sleep(1);
			homeWindowAdmin();
			break;
		case 6:
			exit(0);
		     break;


		default:
		       gotoxy(21,23);
			   printf("Invalid choice");
			   sleep(1);
			   AsubjectList();
	}

}

void AFcplab(){
		system("cls");
	    FILE *fp2;
	    fp2=fopen("Fcp.txt","r");
	    char ch,str[150];
		gotoxy(28,3);

	    while(!feof(fp2))
	    {
	    	fgets(str,120,fp2);
	    	printf("%s ",str);
	    }
		fclose(fp2);
		printf("\n***Press any key to get back to subjectlist*** or ***Press Enter to Exit*** ");
		if(ch=getch())
		{
			if(ch==13)
			{
				exit(0);
			}
			AsubjectList();
		}


}
void AOoplab(){
		system("cls");
		FILE *fp2;
	    fp2=fopen("Oop.txt","r");
	    char ch,str[150];
		gotoxy(28,3);

	    while(!feof(fp2))
	    {
	    	fgets(str,120,fp2);
	    	printf("%s ",str);
	    }
		fclose(fp2);
		printf("\n***Press any key to get back to subjectlist*** or ***Press Enter to Exit*** ");
		if(ch=getch())
		{
			if(ch==13)
			{
				exit(0);
			}
			AsubjectList();
		}
}
void Adm(){
		system("cls");
		FILE *fp2;
	    fp2=fopen("discretemath.txt","r");
	    char ch,str[150];
		gotoxy(28,3);

	    while(!feof(fp2))
	    {
	    	fgets(str,120,fp2);
	    	printf("%s ",str);
	    }
		fclose(fp2);
		printf("\n***Press any key to get back to subjectlist*** or ***Press Enter to Exit*** ");
		if(ch=getch())
		{
			if(ch==13)
			{
				exit(0);
			}
			AsubjectList();
		}
}
void Aece(){
		system("cls");
		FILE *fp2;
	    fp2=fopen("ECE.txt","r");
	    char ch,str[150];
		gotoxy(28,3);

	    while(!feof(fp2))
	    {
	    	fgets(str,120,fp2);
	    	printf("%s ",str);
	    }
		fclose(fp2);
		printf("\n***Press any key to get back to subjectlist*** or ***Press Enter to Exit*** ");
		if(ch=getch())
		{
			if(ch==13)
			{
				exit(0);
			}
			AsubjectList();
		}
}

void Aclubs(){
		system("cls");

	    FILE *fp1;
        fp1=fopen("clubs.txt","r");
        char ch[100];
        for(i=1;fgets(ch,40,fp1);i++)
        {
        	printf("%d. %s",i,ch);
		}
		fclose(fp1);
	    gotoxy(21,22);
	    printf("**Press Any Key TO Go Back**");
	    char c;
	    if(c=getch())
	    {
	    	clubsection();
		}

}

void clubsection()
 {

 	system("cls");
 	itsourcecodeFastPattern();
 	int choice;
 	gotoxy(43,9);
	printf("  Admin Section  ");
	gotoxy(21,12);
	printf("\t\t1. Clubs List");
	gotoxy(21,14);
	printf("\t\t2. Add Clubs");
	gotoxy(21,16);
	printf("\t\t3. Back to AdminSection");
	gotoxy(21,18);
	printf("\t\t4. Quit");
	gotoxy(21,21);
	printf("\t\t Enter any Option:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			Aclubs();
		case 2:
		    addclub();
		case 3:
		    homeWindowAdmin();
		case 4:
		    exit(0);
		default:
		    printf("Invalid Choice");
			clubsection();
	}
}
void addclub()
{
		system("cls");
		FILE *fp;
		char ch[20];
		char ch1;
		fp=fopen("clubs.txt","a+");
		fputs("\n",fp);
		gotoxy(43,9);
	    printf("  Admin Section  ");
	    gotoxy(21,10);
 	    printf("\t\t\t Club Section");
 	    gotoxy(21,12);
 	    printf("\t Enter the Club Name:");
 	    scanf("%s",&ch);
 	    fprintf(fp,"%s",ch);

 	    gotoxy(22,20);
 	    printf("Club is added in database");
 	    fclose(fp);
 	    gotoxy(22,22);
 	    printf("Press any key to go back to club section:");
 	    char c;
 	    if(c=getch() )
 	    {
 	    	clubsection();
		}
}


void homeWindowAdmin(void){
	system("cls");
	itsourcecodeFastPattern();
	gotoxy(43,9);
	printf("  Admin Section  ");
	gotoxy(21,10);
	printf("\t\t1. Student");
	gotoxy(21,11);
	printf("\t\t2. Course");
	gotoxy(21,12);
	printf("\t\t3. Clubs");
	gotoxy(21,13);
	printf("\t\t4. Academic Perfomance");
	gotoxy(21,14);
	printf("\t\t5. QUIT");
	int choice;
	gotoxy(21,17);
	printf("\tEnter a choice: ");
	scanf(" %d",&choice);
	switch(choice){
		case 1:
			AStudent();
			break;
		case 2:
			AsubjectList();
			break;
		case 3:
			clubsection();
			break;
		case 4:
			AAcademicPerfomance();
			break;
		case 5:
			exit(0);
		default:
			gotoxy(21,21);
			printf("Invalid Choice!!");
			sleep(1);
			homeWindowAdmin();
	}
}


void stdSec(){
	system("cls");
	itsourcecodeFastPattern();
	gotoxy(21,9);
	printf("\t\t\t  Student Section  ");


	int choice;

	gotoxy(21,12);
	printf("\t1. Subject List ");
	gotoxy(21,13);
	printf("\t2. Lecture Schedule  ");
	gotoxy(21,14);
	printf("\t3. Clubs List ");
	gotoxy(21,15);
	printf("\t4. Academic Perfomance ");
	gotoxy(21,16);
	printf("\t5. Quit ");
	gotoxy(21,18);
	printf("\t\t Select Any Option :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:

			subList();
			break;
		case 2:

			schedule();
			break;
		case 3:
			clubs();
			break;
		case 4:
			sleep(1);
		    academicPerfomance();
		    break;
		case 5:
			exit(0);

		default:
		       gotoxy(21,23);
			   printf("Invalid choice");
			   sleep(1);
			   stdSec();
	}
}

void clubs(){
		system("cls");

	    FILE *fp1;
        fp1=fopen("clubs.txt","r");
        char ch[100];
        for(i=1;fgets(ch,40,fp1);i++)
        {
        	printf("%d. %s",i,ch);
		}
		fclose(fp1);
	    gotoxy(21,22);
	    printf("**Press Any Key TO Go Back**");
	    char c;
	    if(c=getch())
	    {
	    	stdSec();
		}

}
void subList(){
		system("cls");
	    itsourcecodeFastPattern();
	    gotoxy(21,11);
	    printf("\t\t\tSubject List:");
	    gotoxy(21,13);
	printf("\t1. FCP Lab");
	gotoxy(21,14);
	printf("\t2. OOP Lab ");
	gotoxy(21,15);
	printf("\t3. Discrete Math ");
	gotoxy(21,16);
	printf("\t4. ECE-Basic Electronic Circuits ");
	gotoxy(21,17);
	printf("\t5. Back to Student Section ");
	gotoxy(21,18);
	printf("\t6. Quit ");
	gotoxy(21,21);
	printf("\t\t Select Any Option :");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:

			Fcplab();
			break;
		case 2:
    		sleep(1);
			Ooplab();
			break;
		case 3:
			sleep(1);
			dm();
			break;
		case 4:
			sleep(1);
		    ece();
		    break;
		case 5:
			sleep(1);
			stdSec();
			break;
		case 6:
		     break;

		default:
		       gotoxy(21,23);
			   printf("Invalid choice");
			   sleep(1);
			   subList();
	}

}
void Fcplab(){
		system("cls");
	    FILE *fp2;
	    fp2=fopen("Fcp.txt","r");
	    char ch,str[150];
		gotoxy(28,3);

	    while(!feof(fp2))
	    {
	    	fgets(str,120,fp2);
	    	printf("%s ",str);
	    }
		fclose(fp2);
		printf("\n***Press any key to get back to subjectlist*** or ***Press Enter to Exit*** ");
		if(ch=getch())
		{
			if(ch==13)
			{
				exit(0);
			}
			subList();
		}


}
void Ooplab(){
		system("cls");
		FILE *fp2;
	    fp2=fopen("Oop.txt","r");
	    char ch,str[150];
		gotoxy(28,3);

	    while(!feof(fp2))
	    {
	    	fgets(str,120,fp2);
	    	printf("%s ",str);
	    }
		fclose(fp2);
		printf("\n***Press any key to get back to subjectlist*** or ***Press Enter to Exit*** ");
		if(ch=getch())
		{
			if(ch==13)
			{
				exit(0);
			}
			subList();
		}
}
void dm(){
		system("cls");
		FILE *fp2;
	    fp2=fopen("discretemath.txt","r");
	    char ch,str[150];
		gotoxy(28,3);

	    while(!feof(fp2))
	    {
	    	fgets(str,120,fp2);
	    	printf("%s ",str);
	    }
		fclose(fp2);
		printf("\n***Press any key to get back to subjectlist*** or ***Press Enter to Exit*** ");
		if(ch=getch())
		{
			if(ch==13)
			{
				exit(0);
			}
			subList();
		}
}
void ece(){
		system("cls");
		FILE *fp2;
	    fp2=fopen("ECE.txt","r");
	    char ch,str[150];
		gotoxy(28,3);

	    while(!feof(fp2))
	    {
	    	fgets(str,120,fp2);
	    	printf("%s ",str);
	    }
		fclose(fp2);
		printf("\n***Press any key to get back to subjectlist*** or ***Press Enter to Exit*** ");
		if(ch=getch())
		{
			if(ch==13)
			{
				exit(0);
			}
			subList();
		}
}


void schedule(){
		system("cls");

		gotoxy(21,2);
		printf("\t\t\tAcademic Schedule");
		gotoxy(6,4);
		printf("**Enter the Day No From 1 to 5 for a particular day schedule** or **Enter 6 for the whole week schedule**");
		int no,ch1;

		scanf("%d",&no);
		if(no>6)
		{
			printf("Invalid Choice:");
			sleep(1);
			schedule();
		}
		FILE *fp;
		char c[100],ch;
		fp=fopen("timetable.txt","r");
		if(no==6)
		{

		    for(i=0;fgets(c,100,fp)!=NULL;i++)
		        {
		     	printf("%s",c);
			    }

		}
		else{

		printf("\n\n     Day    ||   Course     ||      Faculty             ||       Time\n\n");
		for(i=0;fgets(c,100,fp)!=NULL;i++)
		{
			if(c[0]==no+48)
			{
				printf("%s\n",c);
			}
		}


	}
		printf("\n\t\t ***Press any Key to Re enter The Day*** ");
		printf("\n\t\t*Press ESC to go back to Student Section*");
		scanf("%c",&ch);
		if(ch=getch())
		{
			if(ch==27)
		{
			stdSec();
		}
			schedule();
		}
		fclose(fp);




}


void academicPerfomance(){
		system("cls");
	    gotoxy(15,2);
		printf("\t\t\tAcademic Perfomance");
		gotoxy(1,3);
		FILE *fp;
		fp=fopen("academicperfomance.txt","r");
		char ch[150],c;
		printf("Programme:    Bachelor of Technology in Computer Science and Engineering\n\nSchool:       School of Engineering and Applied Science\n");
		printf("\nWINTER SEMESTER 2020\n\nRollN0        Course     Course Title	                        Credits		Grade Points\n");
		for(i=0;fgets(ch,100,fp)!=NULL;i++)
		{
			if(ch[0]==passwords[0]&& ch[1]==passwords[1]&& ch[2]==passwords[2] )
			{
				printf("%s\n",ch);
			}
		}fclose(fp);
		printf("\n\n\t\t*Press ESC to go back to Student Section*");
		c=getch();
		  if(c==27)
		{
			stdSec();
		}


}











