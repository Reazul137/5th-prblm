#include<stdio.h>
int main()
{
    int height=7, width=5, perimeter, area;

    perimeter = 2*(height+width);
    printf("perimeter of the rectangle = %d inches \n",perimeter);

    area = (height*width);
    printf("area of the rectangle = %d square inches \n",area);


    return 0;
}
