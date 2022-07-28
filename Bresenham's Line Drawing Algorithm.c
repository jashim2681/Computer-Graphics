#include <stdio.h>

float x1,y1,x2,y2,m,i,j,p;
int dx=0,dy=0;

int main()
{

    printf("Enter first point: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter second point: ");
    scanf("%f %f",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    p=(2*dy)-dx;
    for(i=x1,j=y1;i<=x2,j<=y2; ){
        if(p>=0){
            i=i+1;
            j=j+1;
            if((i>x2)||(j>y2)){
                break;
            }
            printf("%0.2f %0.2f\n",i,j);

            p=p+(2*dy)-(2*dx);
            }
            else if(p<0){
            i=i+1;
            if((i>x2)||(j>y2)){
                break;
            }
            printf("%0.2f %0.2f\n",i,j);

            p=p+(2*dy);
            }
        }

}

