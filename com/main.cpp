#include <stdio.h>
#include <stdlib.h>

void  addition(int   a,float n);
void  subtraction(int   a,float n);
void  multiplication(int a,float n);
float *ptr;

int main()
{ float n=10;
int m;
 ptr=(float*)malloc(n*sizeof(float));

//ptr returns address only of an array
//gotoxy(40,50);
 printf("                     \n  choose your operation\n");

 printf("                         press 1 for addition\n");
 printf("                         press 2 for subtraction\n");
 printf("                         press 3 for multiplicatio\n");
 printf("                         press 4 for division\n");

 scanf("%d",&m);

 switch (m)
  {

 case 1:



       addition(ptr,n);



        break;



case 2:
         subtraction(ptr,n);
          break;

case 3:
         multiplication(ptr,n);
             break;

default:
                  break;
 }







return 0;
}

void  addition( int  a, float n){
float sum=0;
int c;
  for(int i=0;i<n;i++) {

     scanf("%f",&ptr[i]);

              sum=sum+*&ptr[i];
            if(*&ptr[i]==0){


                    printf("%f",sum);}


   }

printf("\n do you wana continue further\n press 1 or press 0 t0 exic");
scanf("%d",&c);

      if(c==1){

        addition(ptr,n);


    }
else {

           main();
 }
printf("%f",sum);

}



void subtraction(int  a, float n){
int c;
float sum=0;
  for(int i=0;i<n;i++) {

     scanf("%f",&ptr[i]);

              sum=sum-*&ptr[i];
            if(*&ptr[i]==0){


                    printf("%f",sum);}

            }


printf("\n do you wana continue further\n press 1 or press 0 t0 exic");
scanf("%d",&c);

      if(c==1){

        subtraction(ptr,n);


    }
else {

           main();
 }
printf("%f",sum);


}


void  multiplication( int a, float n){
float mul;
int c;
float newsum;
float sum=1;
  for(int i=0;i<n;i++) {
int j=i;
     scanf("%f",&ptr[i]);


            if(*&ptr[i]!=0){
                    sum=sum * *&ptr[i];
                    newsum=sum;
                            }
            else{

                          printf("%f",newsum);

              }

            }
   printf("%f",sum);

printf("\n do you wana continue further\n press 1 or press 0 t0 exic");
scanf("%d",&c);

      if(c==1){

        multiplication(ptr,n);

        }
else {

      main();
 }
printf("%f",sum);



}

void division(int ptr,int n){

n=2;
float mul;
int c;
float newsum;
float sum=1;
  for(int i=0;i<n;i++){
//int j=i;
     scanf("%f",&ptr[i]);


            if(*&ptr[i]!=0){
                    sum=*&ptr[i]/(*&ptr[i+1]);
                    newsum=sum;
                            }
            else{

                          printf("%f",newsum);

              }

            }
   printf("%f",sum);

printf("\n do you wana continue further\n press 1 or press 0 t0 exic");
scanf("%d",&c);

      if(c==1){

        multiplication(ptr,n);

        }
else {

      main();
 }
printf("%f",sum);

}
