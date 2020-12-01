#include<stdio.h>
int main()
{
 int start=1,end=1000,BookID,count=0,temp;
 scanf("%d",&BookID);
 do
 {
    temp=(end+start)/2;
    count++;
    //printf("%d\n",temp);
    if(BookID==start || BookID==end)
        break;
    if(BookID<temp)
        end=temp;
    if(BookID>temp)
        start=temp;
 } while (BookID!=temp);
 
  //printf("Count is %d", count);
//  printf("\n%d %d",a,temp);
 if(count<5)
    printf("Collect the book from counter");
else
    printf("Searching and grabbing of book will take some time, Please wait");
 return 0;
 
 
}
