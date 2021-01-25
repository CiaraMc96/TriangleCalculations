#include <stdio.h>
#include <math.h> //for sin function

int main(void){
    double h, theta; //delcares doubles for the hypothenuse and angle theta
    printf("Enter a number for h, the hypothenuse: "); //instructions for the user to get input h
    if(scanf("%lf", &h) != 1) {
        printf("\aI didn’t manage to read a number.\n" ) ; //makes sure a number was entered for h
     } else {
        printf("The number that you entered for h is %.3f .\n" , h ) ; //confirms for the user their input for h
        }
    
    printf("Enter a number between 0 and 90 for the angle theta: "); //insturctions for the user to get input theta
    if(scanf("%lf", &theta) != 1) {
        printf("I didn’t manage to read a number.\n" ) ; //makes sure a number was entered for theta
        } else {
            printf("The number that you entered for angle theta is %.3f.\n" , theta ) ; //confirms for the user their input for theta
    }
    
    double o, a, oAngle, hAngle; //declares doubles for the other angles in the triangle
        oAngle= 90-theta; //angle opposite line o
        hAngle= 90; //angle opposite hypothenuse
        a= h*sin(theta*(3.14/180)); //pi/180 used since sin works in radians and the results should be in degrees
        o= h*sin(oAngle*(3.14/180));
        
        printf("The hypothenuse is %.3f.\nThe side, o, is %.3f.\nThe side, a, is %.3f.\n", h, o, a); //prints results
        printf("The angle opposite side a, theta, is %.3f degrees.\nThe angle opposite the side o is %.3f degress.\nThe angle opposite the hypothenuse is %.3f degrees.\n",theta, oAngle,hAngle); //prints results
    
    return 0;
}
