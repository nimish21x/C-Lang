/*Write a structure capable of storing date. Write a function to compare those 
dates.*/

#include <stdio.h>

struct date {
    int DD;
    int MM;
    int YY;
};

int main(){
  struct date A = {12, 2, 25};
  printf("The date is %d-%d-%d\n", A.DD, A.MM, A.YY);
   
   struct date B = {12, 3, 25};
   printf("The date is %d-%d-%d", B.DD, B.MM, B.YY);

   if (A.DD = B.DD){
    if (A.MM = B.MM){
        if (A.YY = B.YY){
            printf("\nThe dates are equal.");
        }
    }
   }
   else {
    printf("\nThe dates are not equal");
   }
    return 0;
}


/*

#include <stdio.h>

typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} DT;

int compare(DT d1, DT d2)
{
    // if d1 is in the future, return 1
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    DT d1 = {12, 4, 2154};
    DT d2 = {12, 8, 2154};
    printf("%d", compare(d1, d2));
    return 0;
}

*/