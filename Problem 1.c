#include <stdio.h>
#include <math.h>
int main()
{
    double angle_θ, distance_d, fringe_order, lamda_λ;
    int choice;

    printf("Enter angle in Degree (θ°): ");
    scanf("%lf", &angle_θ);
    angle_θ = (angle_θ * 3.1416) / 180;

    printf("Enter fringe order (m) : ");
    scanf("%lf", &fringe_order);

    printf("If you give the distance in (µm) Type --> 1 : \n");
    printf("If you give the distance in (mm) Type --> 2 : \n");
    printf("If you give the distance in (m)  Type --> 3 : \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
             printf("Enter distance in µm : ");
             scanf("%lf", &distance_d);
             lamda_λ = (distance_d * sin(angle_θ)) / fringe_order;
             lamda_λ *= pow(10, 3);
             printf("\nWavelength lamda(λ) is %.2lf nanometer \n", lamda_λ);
    break;

    case 2:
             printf("Enter distance in mm : ");
             scanf("%lf", &distance_d);
             lamda_λ = (distance_d * sin(angle_θ)) / fringe_order;
             lamda_λ *= pow(10, 6);
             printf("\nWavelength lamda(λ) is %.2lf nanometer \n", lamda_λ);
    break;

    case 3:
             printf("Enter distance in m : ");
             scanf("%lf", &distance_d);
             lamda_λ = (distance_d * sin(angle_θ)) / fringe_order;
             lamda_λ *= pow(10, 9);
             printf("\nWavelength lamda(λ) is %.2lf nanometer \n", lamda_λ);
    break;

    default:
             printf("invalid input\n");
    }
    
    if (lamda_λ <= 380 || lamda_λ >= 750)
    {
          printf("The Colour is Not Visible\n");
    }

    else if (lamda_λ >= 380 || lamda_λ <= 450)
    {
          printf("The Colour is Violet\n");
    }

    else if (lamda_λ >= 351 || lamda_λ <= 485)
    {
          printf("The Colour is Blue\n");
    }

    else if (lamda_λ >= 486 || lamda_λ <= 500)
    {
          printf("The Colour is Cyan\n");
    }

    else if (lamda_λ >= 501 || lamda_λ <= 565)
    {
          printf("The Colour is Green\n");
    }

    else if (lamda_λ >= 566 || lamda_λ <= 590)
    {
          printf("The Colour is Yellow\n");
    }

    else if (lamda_λ >= 591 || lamda_λ <= 625)
    {
          printf("The Colour is Orange\n");
    }

    else if (lamda_λ >= 626 || lamda_λ <= 750)
    {
          printf("The Colour is Red\n");
    }
    return 0;
}
