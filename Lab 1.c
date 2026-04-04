#include<stdio.h> 
#include<math.h> 
#define pi 3.14 
float X1,X2,Y1,Y2,D,R; 
void radius(); 
void area(); 
void perimeter();
int main()
{ 
  printf("Enter the coordinates:"); 
  scanf("%f %f %f %f",&X1,&Y1,&X2,&Y2);
  radius(); 
  area(); 
  perimeter(); 
  return 0;
}
void radius() 
{ 
  D=sqrt(pow(X2-X1,2)+pow(Y2-Y1,2)); 
  R=D/2; 
  printf("\nDiameter of circle is %f",D);  
  printf("\nRadius of circle is %f",R); 
  printf("\nRadius of circle after typecasting is %d",(int)R); 
} 
void area() 
{  
  float area=pi*pow(R,2); 
  printf("\nArea of circle is %f",area); 
}  
  void perimeter() 
{
  int p; 
  float perimeter=2*pi*R; 
  printf("\nPerimeter of circle is %f",perimeter);   
}
