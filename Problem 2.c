#include <stdio.h>
#include <math.h>

double degreeToRadians(double degree) {
    return degree * (M_PI / 180.0);
}

double radianToDegrees(double radian) {
    return radian * (180.0 / M_PI);
}

void calculateSecondOrderAngle(int m1, int m2, double lambda1, double lambda2, double theta1_deg) {
    double theta1_rad = degreeToRadians(theta1_deg);

    double sin_theta2 = (m2 * lambda2 * sin(theta1_rad)) / (m1 * lambda1);

    if (sin_theta2 > 1) {
        printf("Second order bright spot does not exist for red light\n");
    } 
    else {
        double theta2_rad = asin(sin_theta2);
        double theta2_deg = radianToDegrees(theta2_rad);
        printf("Second order bright spot angle for red light is: %.2lf degrees\n", theta2_deg);
    }
}

int main() {
    int m1 = 3;
    int m2 = 2;
    double lambda1_nm = 530;
    double lambda2_nm = 700;
    double theta1_deg = 65.0;

    calculateSecondOrderAngle(m1, m2, lambda1_nm, lambda2_nm, theta1_deg);

    return 0;
}

/* 
Variable Naming Reference:
----------------------------------------------------
m1           -->     greenOrder
m2           -->     redOrder
lambda1_nm   -->     greenWavelength_nm
lambda2_nm   -->     redWavelength_nm
theta1_deg   -->     greenAngle_deg
theta1_rad   -->     greenAngle_rad
sin_theta2   -->     sinRedAngle
theta2_rad   -->     redAngle_rad
theta2_deg   -->     redAngle_deg
*/  
