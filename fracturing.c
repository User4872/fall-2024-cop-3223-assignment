#include <stdio.h>
#include <math.h>
#define pi 3.14159 //Preprocessor directive

double askForUserInput() //askForUserInput Function
{
    double range[4]; //Use range to store values for the input
    char sentence[] = "\nEnter points in the order of x1, y1, x2, y2 again for conformation: ";  //Output statement

    printf("%s \n", sentence); //Ask user for input
    for (int count = 0; count < 4; count++) //For loop that runs 4 times
    {
        scanf("%lf", &range[count]); //Assign values for the range
    }

    return range[4]; //Return values
}


double calculateDistance() //calculateDistance Function
{
    int range[4]; //Use range to store values for the input
    char sentence[] = "\nEnter points in the order of x1, y1, x2, y2 to calculate the distance: "; //Output statement
    printf("%s \n", sentence); //Ask user for input
    for (int count = 0; count < 4; count++) //For loop that runs 4 times
    {
        scanf("%i", &range[count]); //Assign values to range
    }
    printf("Point #1 entered: x1 = %i; y1 = %i\n" , range[0], range[1]); //Output point #1
    printf("Point #2 entered: x2 = %i; y2 = %i\n" , range[2], range[3]); //Output point #2

    int diffBetweenX = (range[2] - range[0]); //Subtract x1 from x2
    int diffBetweenY = (range[3] - range[1]); //Subtract y1 from y2
    int powerX = pow(diffBetweenX,2); //Square the result from x's
    int powerY = pow(diffBetweenY,2); //Square the result from y's
    int sumXY = powerX + powerY; //Sum x and y

    printf("The distance between the two points is: %.2lf \n", sqrt(sumXY));// Output Distance - Distance Formula = d=√((x2 – x1)² + (y2 – y1)²)
    return sqrt(sumXY); //Returns the distance
}

double calculatePerimeter() //calculatePerimeter Function
{
    int range[4]; //Use range to store values for the input
    char sentence[] = "\nEnter points in the order of x1, y1, x2, y2 to calculate the perimeter: "; //Output statement
    printf("%s \n", sentence); //Ask user for input
    for (int count = 0; count < 4; count++) //For loop that runs 4 times
    {
        scanf("%i", &range[count]); //Assign values to range
    }
    printf("Point #1 entered: x1 = %i; y1 = %i\n" , range[0], range[1]); //Output point #1
    printf("Point #2 entered: x2 = %i; y2 = %i\n" , range[2], range[3]); //Output point #2

    //Distance formula
    int diffBetweenX = (range[2] - range[0]);
    int diffBetweenY = (range[3] - range[1]);
    int powerX = pow(diffBetweenX,2);
    int powerY = pow(diffBetweenY,2);
    int sumXY = powerX + powerY;
    double squareRootSumXY = sqrt(sumXY);
    double Distance = squareRootSumXY;

    printf("The perimeter of the city encompassed by your request: %.2lf \n", pi*Distance);// Output Perimeter - Perimeter Formula = π*d
    //Note I used the whole distance/diameter and rounded after the calculation, if it is different from what you got try round last
    return 1.0; //Double indicating difficulty
}

double calculateArea() //calculateArea Function
{
    int range[4]; //Use range to store values for the input
    char sentence[] = "\nEnter points in the order of x1, y1, x2, y2 to calculate the Area: "; //Output statement
    printf("%s \n", sentence); //Ask user for input
    for (int count = 0; count < 4; count++) //For loop that runs 4 times
    {
        scanf("%i", &range[count]); //Assign values to range
    }
    printf("Point #1 entered: x1 = %i; y1 = %i\n" , range[0], range[1]); //Output point #1
    printf("Point #2 entered: x2 = %i; y2 = %i\n" , range[2], range[3]); //Output point #2

    //Distance formula
    int diffBetweenX = (range[2] - range[0]);
    int diffBetweenY = (range[3] - range[1]);
    int powerX = pow(diffBetweenX,2);
    int powerY = pow(diffBetweenY,2);
    int sumXY = powerX + powerY;
    double squareRootSumXY = sqrt(sumXY);
    double Distance = squareRootSumXY;
    double radius = Distance/2;
    double squaredRadius = pow(radius,2);


    printf("The area of the city encompassed by your request is: %.2lf \n", pi*squaredRadius); //Output area - area formula π*r^2
    return 1.0; //Double indicating difficulty
}

double calculateWidth() //calculateWidth Function
{
    int range[4]; //Use range to store values for the input
    char sentence[] = "\nEnter points in the order of x1, y1, x2, y2 to calculate the width: "; //Output statement
    printf("%s \n", sentence); //Ask user for input
    for (int count = 0; count < 4; count++) //For loop that runs 4 times
    {
        scanf("%i", &range[count]); //Assign values to range
    }
    printf("Point #1 entered: x1 = %i; y1 = %i\n" , range[0], range[1]); //Output point #1
    printf("Point #2 entered: x2 = %i; y2 = %i\n" , range[2], range[3]); //Output point #2

    //Distance formula
    int diffBetweenX = (range[2] - range[0]);
    int diffBetweenY = (range[3] - range[1]);
    int powerX = pow(diffBetweenX,2);
    int powerY = pow(diffBetweenY,2);
    int sumXY = powerX + powerY;
    printf("The width of the city encompassed by your request is: %.2lf \n", sqrt(sumXY));// Output Width/Distance - Distance Formula = d=√((x2 – x1)² + (y2 – y1)²)
    //Returns the width which is the same as the height and distance since it is a circle
    return 1.0; //Double indicating difficulty
}

double calculateHeight() //calculateHeight Function
{
    int range[4]; //Use range to store values for the input
    char sentence[] = "\nEnter points in the order of x1, y1, x2, y2 to calculate the height: "; //Output statement
    printf("%s \n", sentence); //Ask user for input
    for (int count = 0; count < 4; count++) //For loop that runs 4 times
    {
        scanf("%i", &range[count]); //Assign values to range
    }
    printf("Point #1 entered: x1 = %i; y1 = %i\n" , range[0], range[1]); //Output point #1
    printf("Point #2 entered: x2 = %i; y2 = %i\n" , range[2], range[3]); //Output point #2

    //Distance formula
    int diffBetweenX = (range[2] - range[0]);
    int diffBetweenY = (range[3] - range[1]);
    int powerX = pow(diffBetweenX,2);
    int powerY = pow(diffBetweenY,2);
    int sumXY = powerX + powerY;
    printf("The height of the city encompassed by your request is: %.2lf \n", sqrt(sumXY));// Output Distance/Height - Distance Formula = d=√((x2 – x1)² + (y2 – y1)²)
    //Returns the height which is the same as the width and distance since it is a circle
    return 1.0; //Double indicating difficulty
}

int main(int argc, char **argv) //Main function with two argument
{
    int range[4]; //Array that can store 4 inputs
    char sentence[46] = "\nEnter points in the order of x1, y1, x2, y2: "; //Statement that ask user for input
    argv =& sentence;

    printf("%s \n", argv); //Ask user for input
    for (int count = 0; count < 4; count++) //For loop that runs 4 times
    {
        scanf("%i", &argc); //Catches user input
        range[count]= argc; //Assign values to range
    }

    double Input = askForUserInput(); //Input function
    double Distance = calculateDistance(); //Distance function
    double Perimeter = calculatePerimeter(); //Perimeter function
    double Area = calculateArea(); //Area function
    double Width = calculateWidth(); //Width function
    double Height = calculateHeight(); //Height function

    return 0; //Return 0
}