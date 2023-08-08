#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>


int main()
{


    int hr=0,min=0,sec=0,point=0,pd=0,record=0; char c,d;

    FILE *timer;
    timer=fopen("timer.txt","r");
    fscanf(timer,"%d",&record);
printf("Highest record = %d\n\nCan you break the record??\n\n",record);

    printf("Press ENTER to start timer ");
    scanf("%c",&c);

   if(c=='\n')
   { system("cls");
       printf("\n\n\n\n\n\n\n\t\t\t\t\t\tLOADING");
for(int i=1;i<=4;i++)
{
    printf(".");
    sleep(1);
}
 l1:     while(1)
      { system("cls");
      printf("\n\t\t\t\t*****STUDY TIMER*****");
            sec+=1;

            if(sec<60)
              printf("\n\t\t\t\t_____________________________\n\t\t\t\t|\t\t\t     |\n\t\t\t\t|   %02d hr : %02d min : %02d sec  |\n\t\t\t\t|____________________________|",hr,min,sec);

         if(min<60 && sec==60)
         { sec=0;
          min+=1;
          pd+=1;

          if(pd%25==0)
            point+=1;
          if(min<60)
                      printf("\n\t\t\t\t_____________________________\n\t\t\t\t|\t\t\t     |\n\t\t\t\t|   %02d hr : %02d min : %02d sec  |\n\t\t\t\t|____________________________|",hr,min,sec);
         }
         if(min==60 )
         { min=0;
             hr+=1;
             printf("\n\t\t\t\t_____________________________\n\t\t\t\t|\t\t\t     |\n\t\t\t\t|   %02d hr : %02d min : %02d sec  |\n\t\t\t\t|____________________________|",hr,min,sec);

         }
printf("\n\n\t\tPress SPACE BAR to pause\t\tPress s to stop");

if(kbhit())
{
    c=getch();
    if(c=='s')
    { if(point>record)
        { record=point;

         fclose(timer);
            timer=fopen("timer.txt","w");
            fprintf(timer,"%d",point);
            printf("\n\n\t\t\t\t\tWOW!! New Record!!!\n\t\t\t\t\tYour Score= %d",point);
fclose(timer);
printf("\n\n\n\n\t\t\t\t*****STATISTICS*****\n\n");

  for(int i=1;i<=record;i++)
          {
              printf("|||||");
          }
          printf("   [%d]   =>>  Highest Score graph\n\n",record);


  for(int i=5;i<=pd;i+=5)
          {
              printf("|");
          }
   printf("   [%d]   =>>  Your Score graph\n\n",point);
            }
            else if(point<=record)
            {

    printf("\n\n\t\t\t\t\t Highest Score= %d",record);
                printf("\n\t\t\t\t\t  Your Score= %d",point);
printf("\n\n\n\n\t\t\t\t*****STATISTICS*****\n\n");

  for(int i=1;i<=record;i++)
          {
              printf("|||||");
          }
          printf("   [%d]   =>>  Highest Score graph\n\n",record);


  for(int i=5;i<=pd;i+=5)
          {
              printf("|");
          }
   printf("   [%d]   =>>  Your Score graph\n\n",point);

                }
        getch();
    exit(0);}
    if(c==' ')
    {
        while(c!='c')
        { system("cls");
         printf("\n\t\t\t\t*****STUDY TIMER*****");
             printf("\n\t\t\t\t_____________________________\n\t\t\t\t|\t\t\t     |\n\t\t\t\t|   %02d hr : %02d min : %02d sec  |\n\t\t\t\t|____________________________|\n\n\t\t\t\t\tPress c to continue",hr,min,sec);
       printf("\n\n\n\n\t\t\t\t*****STATISTICS*****\n\n");
        for(int i=1;i<=record;i++)
          {
              printf("|||||");
          }
          printf("   [%d]   =>>  Highest Score graph\n\n",record);


  for(int i=5;i<=pd;i+=5)
          {
              printf("|");
          }
   printf("   [%d]   =>>  Your Score graph\n\n",point);
        if(kbhit())
        {
            c=getch();
            if(c=='c')goto l1;
        }
        }
    }
}
printf("\n\n\n\n\t\t\t\t*****STATISTICS*****\n\n");

  for(int i=1;i<=record;i++)
          {
              printf("|||||");
          }
          printf("   [%d]   =>>  Highest Score graph\n\n",record);


  for(int i=5;i<=pd;i+=5)
          {
              printf("|");
          }
   printf("   [%d]   =>>  Your Score graph\n\n",point);
          sleep(1);

      }




   }


}
