#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<unistd.h>


struct movie
{
    int movie_choice;
    char moviename[200];
    char storyline[1000];
    char cast[200];
    char director[100];
    char rating[100];
    char available_on[100];
};
struct movie m;


void project_intro();
void main_page();
void movie_page();
void series_page();
void movie_hollywood_page();
void movie_bollywood_page();
void movie_tollywood_page();
void series_english_page(); 
void english_series_page(int);
void series_hindi_page();
void movie_update();
void watchlist();
void documentary_page();
void documentary_action_page();
void movie_documentary_action_page(int);
void search_page();
void search_by_actor();
void search_by_director();
void search_by_movies_name();    
void hollywood_movie_search();
void korean_movie_search();
void hollywood_action_search();
void hollywood_thriller_search();



void hollywood_action_page();
void hollywood_thriller_page();
void hollywood_comedy_page();
void hollywood_romance_page();
void movie_hollywood_action_page(int); 
void movie_hollywood_thriller_page(int);
void movie_hollywood_comedy_page(int);
void movie_hollywood_romance_page(int);

void bollywood_action_page();
void bollywood_thriller_page();
void bollywood_comedy_page();
void bollywood_romance_page();
void movie_review_page();

void korean_action_page();
void movie_korean_action_page(int);
void movie_korean_page();

void tollywood_action_page();
void movie_tollywood_action_page();

void search_by_actor()
{
   system("ClS");
    printf("\n\nCHOOSE ACTOR NAME DO YOU WANT TO WATCH\n\n");
    int choice;
    FILE*fp;
    fp=fopen("actorlist.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
        
            break;
        }
    
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE ACTOR NAME FROM[1-5] ?");
    printf("\n\nBACK MAIN MENU PRESS 6");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
            system("CLS");
            FILE*ft;
            ft=fopen("leonardo_dicaprio.txt","r");
            if(ft==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(ft);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(ft);
            break;

         
        case 2 :
            system("CLS");
            FILE*fk;
            fk=fopen("christian_bale.txt","r");
            if(fk==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(fk);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(fk);
            break;

        case 3 :
            system("CLS");
            FILE*fl;
            fl=fopen("robert_deniro.txt","r");
            if(fp==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(fl);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(fl);
            break;

        case 4 :
            system("CLS");
            FILE*fo;
            fo=fopen("prabhas.txt","r");
            if(fp==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(fo);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(fo);
            break;

        case 5 : 
            system("CLS");
            FILE*fi;
            fi=fopen("ayushmann_khurrana.txt","r");
            if(fi==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(fi);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(fi);
            break;

        case 6 :
            search_page();    
    }
}

void search_by_director()
{
    system("ClS");
    printf("\n\nCHOOSE DIRECTOR DO YOU WANT TO WATCH\n\n");
    int choice;
    FILE*fp;
    fp=fopen("directorlist.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE DIRECTOR NAME FROM[1-5] ?");
    printf("\n\nBACK MAIN MENU PRESS 6");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
            system("CLS");
            FILE*ft;
            ft=fopen("martin_scorsese.txt","r");
            if(ft==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(ft);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(ft);
            break;

         
        case 2 :
            system("CLS");
            FILE*fk;
            fk=fopen("quentin_tarantino.txt","r");
            if(fk==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(fk);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(fk);
            break;

        case 3 :
            system("CLS");
            FILE*fl;
            fl=fopen("christopher_nolan.txt","r");
            if(fp==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(fl);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(fl);
            break;

        case 4 :
            system("CLS");
            FILE*fo;
            fo=fopen("zoya_akhtar.txt","r");
            if(fp==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(fo);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(fo);
            break;

        case 5 : 
            system("CLS");
            FILE*fi;
            fi=fopen("anurag_kashyap.txt","r");
            if(fi==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            while(1)
            {
                char ch;
                ch=fgetc(fi);
                if(ch==EOF)
                {
                    break;
                }
                printf("%c",ch);
            }
            fclose(fi);
            break;

        case 6 :
            search_page();    
                
    }
}

void hollywood_action_search()
{
   system("CLS");
    char moviename[100];
    int choice;
    char name[100];
    int flag=0;

    FILE*fp;
    fp=fopen("hollywoodactionchoice.txt","rb");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    printf("\n\nENTER MOVIE NAME TO SEARCH :- ");
    fflush(stdin);
    gets(moviename);
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(strcmp(moviename,m.moviename)==0)
        {
            flag=1;
            printf("\n\nSEARCH SUCESSFULL AND MOVIE DETAILS ARE AS FOLLOW :- ");
            printf("\n\nMOVIE NAME :- %s",m.moviename);
            printf("\n\nSTORY LINE :- %s",m.storyline);
            printf("\n\nCAST:- %s",m.cast);
            printf("\n\nDIRECTOR:- %s",m.director);
            printf("\n\nRATING:- %s",m.rating);
            printf("\n\nAVAILABLE ON:-%s",m.available_on);

        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       search_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void hollywood_thriller_search()
{
   system("CLS");
    char moviename[100];
    int choice;
    char name[100];
    int flag=0;

    FILE*fp;
    fp=fopen("hollywoodthrillerchoice.txt","rb");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    printf("\n\nENTER MOVIE NAME TO SEARCH :- ");
    fflush(stdin);
    gets(moviename);
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(strcmp(moviename,m.moviename)==0)
        {
            flag=1;
            printf("\n\nSEARCH SUCESSFULL AND MOVIE DETAILS ARE AS FOLLOW :- ");
            printf("\n\nMOVIE NAME :- %s",m.moviename);
            printf("\n\nSTORY LINE :- %s",m.storyline);
            printf("\n\nCAST:- %s",m.cast);
            printf("\n\nDIRECTOR:- %s",m.director);
            printf("\n\nRATING:- %s",m.rating);
            printf("\n\nAVAILABLE ON:-%s",m.available_on);

        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       search_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void hollywood_movie_search()
{
  system("CLS");
  int choice;
  printf("\n\nCHOOSE CATEGORY");
  printf("\n\n1. ACTION");
  printf("\n\n2. THRILLER");
  printf("\n\n3. BACK TO MAIN MENU");
  printf("\n\n4. EXIT");
  printf("\n\nENTER YOUR CHOICE FROM [1-4] :-");
  scanf("%d",&choice);
  switch(choice)
  {
      case 1 :
         hollywood_action_search();
         break;

      case 2 :
          hollywood_thriller_search();
          break;

      case 3 :
            system("CLS");
            main_page();
            break;  

        case 4 :
            system("CLS");
            movie_review_page();
            exit(0);
            break;     

  }


}

void korean_movie_search()
{
    system("CLS");
    char moviename[100];
    int choice;
    char name[100];
    int flag=0;

    FILE*fp;
    fp=fopen("koreanactionchoice.txt","rb");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    printf("\n\nENTER MOVIE NAME TO SEARCH :- ");
    fflush(stdin);
    gets(moviename);
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(strcmp(moviename,m.moviename)==0)
        {
            flag=1;
            printf("\n\nSEARCH SUCESSFULL AND MOVIE DETAILS ARE AS FOLLOW :- ");
            printf("\n\nMOVIE NAME :- %s",m.moviename);
            printf("\n\nSTORY LINE :- %s",m.storyline);
            printf("\n\nCAST:- %s",m.cast);
            printf("\n\nDIRECTOR:- %s",m.director);
            printf("\n\nRATING:- %s",m.rating);
            printf("\n\nAVAILABLE ON:-%s",m.available_on);

        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       search_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void search_by_movies_name()
{
    system("CLS");
    char search[200];
    int choice;
    printf("\n\nCHOOSE CATEGORY DO YOU WANT TO SEARCH ");
    printf("\n\n1. HOLLYWOOD MOVIES ");
    printf("\n\n2. KOREAN MOVIES");
    printf("\n\n3. BACK TO MAIN MENU");
    printf("\n\n4. EXIT");
    printf("\n\nENTER YOUR CHOICE FROM [1-5] :-");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
            hollywood_movie_search();
            break;

        case 2 :
            korean_movie_search();
            break;

        case 3 :
            system("CLS");
            main_page();
            break;  

        case 4 :
            system("CLS");
            movie_review_page();
            exit(0);
            break;     


    }
    




}   


int conform_detail;
char name[100],name1[100];


void movie_review_page()
{
    system("CLS");
    int choice;
    printf("HELLO %s GIVE REVIEW THE MOVIE SELECTOR PAGE ",name);
    printf("\n\n1. EXCELLENT");
    printf("\n\n2. VERY GOOD");
    printf("\n\n3. GOOD");
    printf("\n\n4. AVERAGE");
    printf("\n\n5. BELOW AVERAGE");
    printf("\n\n6. GIVE LATER ON");
    printf("\n\nENTER CHOICE FROM[1-6] :-");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
            system("CLS");
            printf("\n\nTHNX FOR GIVING EXCELLENT REVIEW");
            break;

        case 2 :
            system("CLS");
            printf("\n\nTHNX FOR GIVING VERY GOOD REVIEW");
            break;

        case 3 :
            system("CLS");
            printf("\n\nTHNX FOR GIVING GOOD REVIEW");
            break;

        case 4 :
            system("CLS");
            printf("\n\nTHNX FOR AVERAGE REVIEW");
            printf("\n\nWE WILL UPDATE ACCORDING TO CUSTOMER NEED");
            break;

        case 5 :
            system("CLS");
            printf("\n\nTHNX FOR GIVING BELOW AVERAGE REVIEW");
            printf("\n\nWE WILL UPDATE ACCORDING TO CUSTOMER NEED");
            printf("\n\nSORRY WILL UPDATE OR CHANGE");
            break;

        case 6 :
            system("CLS");
            printf("\n\nTHNX FOR USING OUR SOFTWARE");
            printf("\n\nDONT FORGET TO REVIEW OUR PAGE");
            break;


        default :
               system("CLS");
               printf("\n\nINVALID CHOICE");
               sleep(1);
               movie_review_page();                       
    }
}

void movie_update()
{
    int choice;
    printf("\n\n1.MOVIE ENTRY");
    printf("\n\n2.UPDATE MOVIE ENTRY");
    printf("\n\n3.BACK TO MAIN PAGE");
    printf("\n\n4.EXIT");
    printf("\n\nENTER YOUR CHOICE FROM[1-4] :-");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
            system("CLS");
            printf("ENTER MOVIE DETAILS");
            FILE*fp;
            fp=fopen("documentaryactionchoice.txt","a");
            if(fp==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }

            printf("\n\n MOVIE CHOICE NUMBER :-");
            fflush(stdin);
            scanf("%d",&m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            fflush(stdin);
            gets(m.moviename);
            printf("\n\nSTORY LINE :-");
            fflush(stdin);
            gets(m.storyline);
            printf("\n\nCAST :-");
            fflush(stdin);
            gets(m.cast);
            printf("\n\nDIRECTOR:-");
            fflush(stdin);
            gets(m.director);
            printf("\n\nRATING :-");
            fflush(stdin);
            gets(m.rating);
            printf("\n\nAVAILABLE ON :-");
            fflush(stdin);
            gets(m.available_on);
            printf("\n\nPRESS 1 TO CONFORM MOVIE DETAILS :- ");
            scanf("%d",&conform_detail);
            if(conform_detail==1)
            {               
                fwrite(&m,sizeof(m),1,fp);
                fclose(fp);
                system("CLS");
                printf("\n\n");
                printf("YOUR MOVIE UPDATED ON LIST");
                sleep(1);
                main_page();
            }
            else
            {   
                system("CLS");
                movie_update();
            }
            break;

        case 2 :
            system("CLS");
            int choice,flag=0;
            printf("ENTER MOVIE DETAILS");
            FILE*ft;
            ft=fopen("documentaryactionchoice.txt","r");
            if(ft==NULL)
            {
                printf("FILE NOT FOUND");
                exit(1);
            }
            printf("\n\nENTER MOVIE CHOICE NUMBER TO EDIT");
            scanf("%d",&choice);
            while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
            {
                if(choice==m.movie_choice)
                {
                    flag=1;
                    printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
                    printf("\n\nMOVIE CHOICE NUMBER :-");
                    printf("%d",m.movie_choice);
                    printf("\n\nMOVIE NAME :-");
                    printf("%s",m.moviename);
                    printf("\n\nSTORY LINE :-");
                    printf("%s",m.storyline);
                    printf("\n\nCAST :-");
                    printf("%s",m.cast);
                    printf("\n\nDIRECTOR:-");
                    printf("%s",m.director);
                    printf("\n\nRATING :-");
                    printf("%s",m.rating);
                    printf("\n\nAVAILABLE ON :-");
                    printf("%s",m.available_on);
                    printf("\n\n NOW ENTER THE NEW DETAILS OF CUSTOMER TO UPDATE RECORD");
                    printf("\n\n MOVIE CHOICE NUMBER :-");
                    fflush(stdin);
                    scanf("%d",&m.movie_choice);
                    printf("\n\nMOVIE NAME :-");
                    fflush(stdin);
                    gets(m.moviename);
                    printf("\n\nSTORY LINE :-");
                    fflush(stdin);
                    gets(m.storyline);
                    printf("\n\nCAST :-");
                    fflush(stdin);
                    gets(m.cast);
                    printf("\n\nDIRECTOR:-");
                    fflush(stdin);
                    gets(m.director);
                    printf("\n\nRATING :-");
                    fflush(stdin);
                    gets(m.rating);
                    printf("\n\nAVAILABLE ON :-");
                    fflush(stdin);
                    gets(m.available_on);
                    printf("PRESS 1 TO CONFORM MOVIE DETAILS :- ");
                    scanf("%d",&conform_detail);
                    if(conform_detail==1)
                    {               
                        fseek(fp,-(long)sizeof(m),1);
                        fwrite(&m,sizeof(m),1,fp);
                        fclose(fp);
                        system("CLS");
                        printf("\n\n");
                        printf("YOUR MOVIE UPDATED ON LIST");
                        sleep(1);
                        movie_page();
                    }
                    else
                    {   
                        system("CLS");
                        movie_update();
                    }
                }
            }
            if(flag==0)
                {
                printf("\n\n\t\tNo Such Record Found !!!!!\n");
                }
            fclose(ft);
            break;


        case 3 :
            system("CLS");
            movie_page();
            break;

        case 4 :
            movie_review_page();
            exit(0);
            break;

    }
    

}


void movie_hollywood_action_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("hollywoodactionchoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       hollywood_action_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void movie_hollywood_thriller_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("hollywoodthrillerchoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       hollywood_thriller_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void movie_hollywood_comedy_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("hollywoodcomedychoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       hollywood_comedy_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void movie_hollywood_romance_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("hollywoodromancechoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       hollywood_romance_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void hollywood_action_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("hollywoodaction.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_hollywood_action_page(choice);
    }

}

void hollywood_thriller_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("hollywoodthriller.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_hollywood_thriller_page(choice);
    }
}

void hollywood_comedy_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("hollywoodcomedy.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
        if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_hollywood_comedy_page(choice);
    }

}

void hollywood_romance_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("hollywoodromance.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_hollywood_romance_page(choice);
    }
}



void  movie_bollywood_action_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("bollywoodactionchoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       bollywood_action_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void movie_bollywood_thriller_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("bollywoodthrillerchoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       bollywood_thriller_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void movie_bollywood_comedy_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("bollywoodcomedychoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       bollywood_comedy_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void movie_bollywood_romance_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("bollywoodromancechoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       bollywood_romance_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void bollywood_action_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("bollywoodaction.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_bollywood_action_page(choice);
    }

}

void bollywood_thriller_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("bollywoodthriller.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_bollywood_thriller_page(choice);
    }
}

void bollywood_comedy_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("bollywoodcomedy.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_bollywood_comedy_page(choice);
    }

}

void bollywood_romance_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("bollywoodromance.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_bollywood_romance_page(choice);
    }
}

void english_series_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("englishserieschoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       series_english_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}


void series_english_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("englishseries.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       main_page();
    }
    else
    {
    system("CLS");
    english_series_page(choice);
    }

}

void series_hindi_page()
{
    system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("hindiseries.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    
}

void movie_hollywood_page()
{
   int choice;
   printf("\n\n\n CHOOSE CATEGORY DO YOU WANT TO WATCH");
   printf("\n\n1. ACTION");
   printf("\n\n2. THRILLER");
   printf("\n\n3. COMDEY");
   printf("\n\n4. ROMANCE");
   printf("\n\n5. BACK");
   printf("\n\n6. EXIT");
   printf("\n\nENTER A CHOICE FROM [1- 6] :- ");
   scanf("%d",&choice);

   switch(choice)
   {
       case 1 :
           system("ClS");
           hollywood_action_page();
           break;
          
       case 2 :
           system("ClS");    
           hollywood_thriller_page();
           break;

       case 3 :
           system("ClS");
           hollywood_comedy_page();
           break;

       case 4 :
           system("ClS");
           hollywood_romance_page();
           break;

       case 5 :
           system("ClS");
           movie_page();
           break;

       case 6 :
           movie_review_page();
           exit(0);
           break;


       default:
        printf("\nINVALID CHOICE\n\n");
        //clrscr();
        main_page();
        break;


   }


}

void movie_bollywood_page()
{
   int choice;
   printf("\n\n\n CHOOSE CATEGORY DO YOU WANT TO WATCH");
   printf("\n\n1. ACTION");
   printf("\n\n2. THRILLER");
   printf("\n\n3. COMDEY");
   printf("\n\n4. ROMANCE");
   printf("\n\n5. BACK");
   printf("\n\n6. EXIT");
   printf("\n\nENTER A CHOICE FROM [1- 6] :- ");
   scanf("%d",&choice);

   switch(choice)
   {
       case 1 :
           system("ClS");
           bollywood_action_page();
           break;
          
       case 2 :
           system("ClS");    
           bollywood_thriller_page();
           break;

       case 3 :
           system("ClS");
           bollywood_comedy_page();
           break;

       case 4 :
           system("ClS");
           bollywood_romance_page();
           break;

       case 5 :
           system("ClS");
           movie_page();
           break;

       case 6 :
           movie_review_page();
           exit(0);
           break;


       default:
        printf("\nINVALID CHOICE\n\n");
        //clrscr();
        main_page();
        break;
   }

}

void movie_tollywood_action_page(int moviechoicenumber)
{
   int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("tollywoodactionchoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       tollywood_action_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void tollywood_action_page()
{
   printf("\n\n\n CHOOSE CATEGORY DO YOU WANT TO WATCH");
   system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("tollywoodaction.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-10] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 11");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==11)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_tollywood_action_page(choice);
    }

}

void movie_tollywood_page()
{
   tollywood_action_page();
}

void movie_korean_action_page(int moviechoicenumber)
{
   int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("koreanactionchoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       korean_action_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void korean_action_page()
{
   printf("\n\n\n CHOOSE CATEGORY DO YOU WANT TO WATCH");
   system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("koreanaction.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-5] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 6");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==6)
    {
       movie_page();
    }
    else
    {
    system("CLS");
    movie_korean_action_page(choice);
    }

}

void movie_korean_page()
{
   korean_action_page();

}

void movie_page()
{
   int choice;
   system("ClS");
   printf("\n\n CHOOSE THE MOVIE CATEGORY DO YOU WANT TO WATCH...");
   printf("\n\n1. HOLLYWOOD");
   printf("\n\n2. BOLLYWOOD");
   printf("\n\n3. TOLLYWOOD");
   printf("\n\n4. KOREAN");
   printf("\n\n5. BACK TO MAIN MENU");
   printf("\n\n6. EXIT");

    printf("\n\nENTER A CHOICE FROM [1- 6] :- ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
        system("ClS");
        movie_hollywood_page(); 
        break;

    case 2 :
        system("ClS");
        movie_bollywood_page();
        break;

    case 3 :
        system("ClS");
        movie_tollywood_page();
        break;

    case 4 :
        system("ClS");
        movie_korean_page();
        break;

    case 5 :
        system("ClS");
        main_page();
        break;

    case 6 :
        movie_review_page();
        exit(0);
        break;                      
    
    default:
        printf("\nINVALID CHOICE\n\n");
        //clrscr();
        system("ClS");
        movie_page();
        break;
    }
}

void series_page()
{
   int choice;
   system("ClS");
   printf("\n\n1. ENGLISH");
   printf("\n\n2. HINDI");
   printf("\n\n3. BACK TO MAIN MENU");
   printf("\n\n4. EXIT");

    printf("\n\nENTER A CHOICE FROM [1- 4] :- ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
        system("ClS");
        series_english_page(); 
        break;

    case 2 :
        system("ClS");
        series_hindi_page();
        break;

    case 3 :
        system("ClS");
        main_page();
        break;

    case 4 :
        movie_review_page();
        exit(0);
        break;                      
    
    default:
        printf("\nINVALID CHOICE\n\n");
        //clrscr();
        system("ClS");
        series_page();
        break;
    }

}

void project_intro()
{
    //textcolor(GREEN);
    system("color 1");
    printf("\n\n\n\n\n\n\t\t\t\t  PROJECT NAME :-  CINE-SEARCH ENGINE\n\n");
    printf("\n\t\t\t\t\t\tGOOGLE FOR CINEPHILES");
    printf("\n\n\n\t\t\t\t  MADE BY : - VAMSI,YASH,KARAN \n\n");
    printf("\n\t\t\t\t  COLLEGE NAME :- BHARATI VIDYAPEETH COLLEGE OF ENGINEERING KOLHAPUR\n\n\n");
    //clrscr();
    sleep(2);
    system("CLS");
}

void watchlist()
{
    system("CLS");
    char moviename[100];
    printf("******** %s CREATE YOUR WATCHLIST ********",name);
    printf("\n\n %s ENTER YOUR NAME IN FROM OF NAME.TXT[VAMSI.TXT]:-",name);
    fflush(stdin);
    gets(name1);
    system("CLS");
    FILE*fp;
    fp=fopen(name1,"a+");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    printf("%s YOUR WATCHLIST DETAILS...\n\n",name);
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }

    printf("\n\nENTER MOVIE NAME OR SERIES NAME TO ADD INTO YOUR WATCHLIST :-");
    gets(moviename);
    fprintf(fp,"\n*\t%s",moviename);
    system("CLS");
    printf("\n\n%s YOUR WATCHLIST UPDATED SUCCESSFULLY",name);
    fclose(fp);

}

void movie_documentary_action_page(int moviechoicenumber)
{
    int choice;
    int flag=0;
    FILE*fp;
    fp=fopen("documentaryactionchoice.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }   
    while(fread(&m,sizeof(m),1,fp)>0 && flag==0)
    {
        if(moviechoicenumber==m.movie_choice)
        {
            flag=1;
            printf("\n\nMOVIE DETAILS AS FOLLOW:- ");
            printf("\n\nMOVIE CHOICE NUMBER :-");
            printf("%d",m.movie_choice);
            printf("\n\nMOVIE NAME :-");
            printf("%s",m.moviename);
            printf("\n\nSTORY LINE :-");
            printf("%s",m.storyline);
            printf("\n\nCAST :-");
            printf("%s",m.cast);
            printf("\n\nDIRECTOR:-");
            printf("%s",m.director);
            printf("\n\nRATING :-");
            printf("%s",m.rating);
            printf("\n\nAVAILABLE ON :-");
            printf("%s",m.available_on);
        }
    }
    if(flag==0)
    {
    printf("\n\n\t\tNo Such Record Found !!!!!\n");
    }
    fclose(fp);
    printf("\n\nIF YOU WANT TO GO BACK PRESS 1 OR 2 TO EXIT ?");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==1)
    {
       system("CLS");
       documentary_action_page(); 
    }
    else
    {
        movie_review_page();
        exit(0);
    }
}

void documentary_action_page()
{
   printf("\n\n\n CHOOSE CATEGORY DO YOU WANT TO WATCH");
   system("ClS");
    int choice;
    FILE*fp;
    fp=fopen("documentaryaction.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }
    while(1)
    {
        char ch;
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    fclose(fp);
    printf("\n\nCHOOSE MOVIE FROM[1-5] ?");
    printf("\n\nBACK TO MAIN MENU PRESS 6");
    printf("\n\nENTER YOUR CHOICE :-");
    scanf("%d",&choice);
    if(choice==6)
    {
       main_page();
    }
    else
    {
    system("CLS");
    movie_documentary_action_page(choice);
    }

}

void documentary_page()
{
   documentary_action_page();
}

void search_page()
{
    system("CLS");
    int choice;
    printf("\n\n1. SEARCH BY ACTOR");
    printf("\n\n2. SEARCH BY DIRECTOR");
    printf("\n\n3. SEARCH BY MOVIES/SERIES");
    printf("\n\n4. BACK TO MAIN MENU");
    printf("\n\n5. EXIT");
    printf("\n\nENTER A YOUR CHOICE FROM [1-5] :-");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
            system("CLS");
            search_by_actor();
            break;

        case 2 :
            system("CLS");
            search_by_director();
            break;

        case 3 :
            system("CLS");
            search_by_movies_name();
            break;    

        case 4 :
            system("CLS");
            main_page();
            break;  

        case 5 :
            system("CLS");
            movie_review_page();
            exit(0);
            break;          
    }


}

void main_page()
{
   system("CLS");
   int choice;
   printf("\n\n\n\t\t\t WELCOME TO CINE-SEARCH ENGINE\n\n\n");
   printf("\n\nHI WHAT IS YOUR NAME ?");
   printf("\n\nENTER YOUR NAME:-");
   scanf("%s",name);
   system("CLS");
   printf("HI %s WHAT DO YOU WANT TO WATCH ?",strupr(name));
   printf("\n\n1. MOVIES");
   printf("\n\n2. SERIES");
   printf("\n\n3. DOCUMENTARIES");
   printf("\n\n4. SEARCH");
   printf("\n\n5. MOVIE UPDATES[NOT FOR USERS]");
   printf("\n\n6. MAKE YOUR WATCHLIST");
   printf("\n\n7. EXIT");

   printf("\n\nENTER A CHOICE FROM [1- 7] :- ");
   scanf("%d",&choice);

   switch(choice)
   {
    case 1 :
        system("ClS");
        movie_page();
        break;

    case 2 :
        system("ClS");
        series_page();
        break;

    case 3 :
        documentary_page();
        system("CLS");
        break;

    case 4 :
        system("CLS");
        search_page();
        break;        

    case 5 :
        system("ClS");
        movie_update(); 
    
    case 6 :
        watchlist();
        break;

    case 7 :
        movie_review_page();
        exit(0);
        break;

    default:
        printf("\nINVALID CHOICE\n\n");
        //clrscr();
        system("ClS");
        main_page();
        break;
   }
   
}

int main()
{
   
   //clrscr();
   system("CLS");
   //system("color 9");
   project_intro();
   main_page();
   //getch();
}
