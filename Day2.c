// Q1.Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    
    area = length * breadth;
    perimeter = 2 * (length + breadth);

   
    printf("\nArea of the rectangle = %d", area);
    printf("\nPerimeter of the rectangle = %d", perimeter);

    return 0;
}

// Q2.Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float radius, area, circumference;

    
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;      
    circumference = 2 * 3.14 * radius;  

    
    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circumference);

    return 0;
}
