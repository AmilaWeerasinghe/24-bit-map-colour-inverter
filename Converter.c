#include<stdio.h>
 int main(){
int P,a,b,i,x,y,z,w,m;
/* P-Number of padding values
x-Number of Columns received when reader program runs
y-Number of Raws received when reader program runs   
*/
scanf("%d",&x);   //First integer is taken as number of columns
scanf("%d",&y);  //Second integer is taken as number of raws
printf("%d ",x); //print columns and raws to keep the inverted file in the same pattern 
printf("%d\n",y);
if (((x*3)%4)==0){
P=0;
}
else {
P=4-((x*3)%4);
}
for (a=1; a<=x; x++){ 
   for(b=1; b<=y; y++){
     for(i=1; i<=3; i=i+1){
              scanf("%d",&z);// three loops are taken to flow through the pixels in the given pattern and each RGB value is taken as z
     printf("%d ",255-z);// print the each rgb value in the given same pattern with space in between 
      }
          printf("\n");//after three RGB print new line
     }  
     
   for(w=1; w<=P; w++){
              scanf("%d",&m);//scan the number of padding values and print them again in the same pattern
           printf("%d\n",m);
}
  
    
   }
   return 0;
 }
/*
If else is used to  prevent printing zeros , when there is no padding values
*/

