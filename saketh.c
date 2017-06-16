#include<stdio.h>
#include<conio.h>
//#include<graphics.h>
#include<dos.h>
void main()
{
	int i,j,b,m,a[10]={0,0,0,0,0,0,0,0,0,0},x,y,c,d,e,f,g,h,k,l;
	char n1[20],n2[20];
       //	int gd= DETECT,gm;
	clrscr();
  //	initgraph(&gd,&gm,"C:\\tc\\bgi");
	setcolor(11);
       /*	line(100,110,100,270);
	line(150,110,150,270);
	line(50,220,200,220);
	line(50,160,200,160);*/
	printf("enter player1 [O] name ->");
	scanf("%s",&n1);
	printf("enter player 2 [X] name ->");
	scanf("%s",&n2);
	gotoxy(39,16);
	printf("HOW TO PLAY :-");
	for(i=17,j=1;i<=25,j<=9;i++,j++)
	{
	gotoxy(39,i);
	printf("==> press NUMBER %d + ENTER for box %d",j,j);
	}
	gotoxy(39,5);
    printf("PREVIOUS TURN:-");
	j=6;
	i=1;
	x=60;
	y=4;
	for(i=1;i<10;i++,j++)
    {
    b=i%2;
	gotoxy(2,4);
	scanf("%d",&m);
	if(m<=9)
	{
	goto a;
	}
	else
	{
	printf("only 1-9 numbers");
	i--;
	j--;
    }
	a:
	switch(m)
	{
	case 1:if(a[1]==3 || a[1]==2)
	{
    gotoxy(x,y);
	printf("already selected");
	y++;
	i--;
	j--;
	}
	else
	{
	if(b==0)
	{
	gotoxy(39,j);
	printf("%s",n2);
	gotoxy(9,9);
	printf("X");
	a[1]=3;
	}
	else
	{
	gotoxy(39,j);
	printf("%s",n1);
	gotoxy(9,9);
	printf("O");
	a[1]=2;
	}
	}
	break;
	case 2:if(a[2]==3 || a[2]==2)
	{
	gotoxy(x,y);
	printf("already selected");
	y++;
	i--;
	j--;
	}
	else
	{
	if(b==0)
	{
	gotoxy(39,j);
	printf("%s",n2);
	gotoxy(16,9);
	printf("X");
	a[2]=3;
	}
	else
	{
	gotoxy(39,j);
	printf("%s",n1);
	gotoxy(16,9);
	printf("O");
	a[2]=2;
	}
	}
	break;
	case 3:if(a[3]==3 || a[3]==2)
	{
	gotoxy(x,y);
	printf("already selected");
	y++;
	i--;
	j--;
	}
	else
	{
	if(b==0)
	{
    gotoxy(39,j);
	printf("%s",n2);
	gotoxy(22,9);
	printf("X");
	a[3]=3;
	}
	else
	{
	gotoxy(39,j);
	printf("%s",n1);
	gotoxy(22,9);
	printf("O");
	a[3]=2;
	}
	}
	break;
	case 4:if(a[4]==3 || a[4]==2)
	{
	gotoxy(x,y);
	printf("already selected");
	y++;
	i--;
	j--;
	}
	else
	{
	if(b==0)
	{
	gotoxy(39,j);
	printf("%s",n2);
	gotoxy(9,12);
	printf("X");
	a[4]=3;
	}
	else
    {
	gotoxy(39,j);
	printf("%s",n1);
    gotoxy(9,12);
    printf("O");
    a[4]=2;
	}
				   }
					    break;
				case 5:if(a[5]==3 || a[5]==2)
				   {
				   gotoxy(x,y);
					   printf("already selected");
					   y++;
					   i--;
					   j--;
				   }
				   else
				   {
					   if(b==0)
					   {
						gotoxy(39,j);
				    printf("%s",n2);
						gotoxy(16,12);
					    printf("X");
						a[5]=3;
					   }
					   else
					   {
						gotoxy(39,j);
						printf("%s",n1);
						gotoxy(16,12);
						printf("O");
						a[5]=2;
					   }
					   }
					    break;
				case 6:if(a[6]==3 || a[6]==2)
				   {
				   gotoxy(x,y);
					   printf("already selected");
					   y++;
					   i--;
					   j--;
				   }
				   else
				   {
					   if(b==0)
					   {
						gotoxy(39,j);
				printf("%s",n2);
					    gotoxy(22,12);
					printf("X");
						a[6]=3;
					   }
					   else
					   {
						gotoxy(39,j);
						printf("%s",n1);
						gotoxy(22,12);
						printf("O");
						a[6]=2;
					   }
					   }
					    break;
				case 7:if(a[7]==3 || a[7]==2)
				   {
				   gotoxy(x,y);
					   printf("already selected");
					   y++;
					   i--;
					   j--;
				   }
				   else
				   {
					   if(b==0)
					   {

	    gotoxy(39,j);
			printf("%s",n2);
						   gotoxy(9,16);
						  printf("X");
						   a[7]=3;
					   }
					   else
					   {
						gotoxy(39,j);
							printf("%s",n1);
						   gotoxy(9,16);
							   printf("O");
						   a[7]=2;
					   }
					   }
					    break;
				case 8:if(a[8]==3 || a[8]==2)
				   {
				   gotoxy(x,y);
					   printf("already selected");
					   y++;
					   i--;
					   j--;
				   }
				   else
				   {
					   if(b==0)
					   {
						gotoxy(39,j);
			printf("%s",n2);
						   gotoxy(16,16);
						   printf("X");
						   a[8]=3;
					   }
					   else
					   {
						gotoxy(39,j);
						       printf("%s",n1);
						   gotoxy(16,16);
							   printf("O");
						   a[8]=2;
					   }
					   }
					    break;
				case 9:if(a[9]==3 || a[9]==2)
				   {
				      gotoxy(x,y);
					   printf("already selected");
					   y++;
					   i--;
					   j--;
				   }
				   else
				   {
					   if(b==0)
					   {
						gotoxy(39,j);
			printf("%s",n2);
						   gotoxy(22,16);
						   printf("X");
						   a[9]=3;
					   }
					   else
					   {
						gotoxy(39,j);
						       printf("%s",n1);
						   gotoxy(22,16);
							   printf("O");
						   a[9]=2;
					   }
					   }
					   break;
					   }
					      gotoxy(2,4);

					   if(i>=5)
					   {
					      c=a[1]*a[2]*a[3];
					      d=a[4]*a[5]*a[6];
					      e=a[7]*a[8]*a[9];
					      f=a[1]*a[4]*a[7];
					      g=a[2]*a[5]*a[8];
					      h=a[3]*a[6]*a[9];
					      k=a[1]*a[5]*a[9];
					      l=a[3]*a[5]*a[7];
						if(c==27 || d==27 || e==27 || f==27 || g==27 || h==27 || k==27 || l==27)
						{
						  gotoxy(10,19);
						 printf("%s won",n2);
						  sleep(1);
						  gotoxy(10,20);
						  printf("bye -bye");
						  sleep(1);
						  gotoxy(1,18);
						  printf("GAME DEVOLEPED BY SAKETH,VINAY\nKAVYA,SRAVANI,SRAVYA");
						  i=11;
						sleep(5);
						  }
						else if(c==8 || d==8 || e==8 || f==8 || g==8 || h==8 || k==8 || l==8)
						{
					gotoxy(10,19);
						printf("%s won",n1);
						    gotoxy(10,20);
						    sleep(1);
						    printf("bye-bye");
						    sleep(1);
						    gotoxy(1,18);
						    clrscr();
						  printf("GAME DEVOLEPED BY SAKETH");						  i=11;
						sleep(5);
						  }						}
						else
						{
						if(i==9)
						{
						sleep(1);
						gotoxy(10,19);
						printf("tie");
						sleep(1);
						gotoxy(10,20);
						printf("bye");
						sleep(1);
						gotoxy(1,18);
						printf("GAME DEVOLEPED BY SAKETH,VINAY\nKAVYA,SRAVANI,SRAVYA");
						sleep(5);
						}
						}
}
getch();
					    }


