#include <stdio.h>
#include <stdbool.h>

// #include <string.h>
#include <math.h>
#include <ctype.h>

int main2(){

/*
    printf("I like Pizza!\n");
    printf("It's really good!\n");

    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("My full name is \"Otabek Tursunov\"");
*/

/*
    int x;
    x = 123;
    int y = 72;

    int age = 21;               // singel character
    float gpa = 4.76;           // float point number
    char grade = 'C';           // single character
    char name[] = "Otabek";     // list of characters as String

    printf("Your name is %s\n", name);
    printf("You are %d years old!\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
*/

/*
    float pi = 3.141592;            // 4 bytes (32 bit)  6-7 digits %f
    double d = 3.141592653589793;   // 8 bytes (64 bit)  15 - 16 digits %lf

    bool e = true;                  // 1 bytes (true or false) %d '#include <stdbool.h>'

    char a = 97;                    // 1 byte (-128 to +127) %d or %c
    printf("%d", a);        // index: 97  (ACII Table)
    printf("%c", a);        // char: a

    unsigned char g = 'a';          // 1 byte (0 to 255)  %d or %c 
    printf("%d", g);

    short int h = 32767;                // 2 bytes (-32768 to +32767) %d
    unsigned short int i = 65535;       // 2 bytes (0 to 65535)  %d 

    int j = 2147483674;                 // 4 bytes (-(2^31) to +2^31 - 1) %d
    unsigned int k = 4294967295;        // 4 bytes (0 to 2^32 - 1)  %u

    long long int l = 9223372036854775807; // 8 bytes (-2^63 to 2^63 - 1 (quintilion))  %lld
    unsigned long long int m = 18446744073709551615; 
*/

/*
    // format specifier %
    // %c - character
    // %s - string
    // %f - float
    // %lf - double
    // %d - int

    // %.1 -> decimal precision
    // %1  -> minimum field width
    // %-  -> left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);
*/

/*
    const float PI = 3.14;
    // PI = 1123.14; -> error!
    printf("%.2f", PI);
*/

/*
    // arithmetic operators

    // + (addition)         5 + 2 = 7
    // - (subtraction)      5 - 2 = 3
    // * (multiplication)   5 * 2 = 10
    // / (division)         5 / 2 = 2.5 (when use float or double) else
    //                      5 / 2 = 2   (when use only between integers)
    // % (modulus)          5 % 2 = 1   (hip part)
    // ++ increment
    // -- decrement
    // augmented: +=, -=, *=, /=, %=

    int x = 5;
    int y = 2;

    int z = x + y; // 7

    int a = x / y; // 2
    float b = x / (float) y; // 2.5

    int c = x % y; // 1
    printf("%d", --x);
*/

/*
    // user input

    char name[25]; //bytes
    int age;

    printf("\nWhat's your name: ");
    // scanf("%s", &name);          // only one word input
    fgets(name, 25, stdin);         // for more word input
    // #include <string.h>          
    name[strlen(name) - 1] = '\0';

    printf("How old are you: ");
    scanf("%d", &age);

    printf("Hello, %s. ", name);
    printf("You are %d years old!\n", age);
*/

/*
    // math functions
    // #include <math.h>


    double a = sqrt(9);   // sqrt - 2, sbrt - 3
    double b = pow(2, 4);
    double c = round(3.14);
    // ceil(3.14) -> 4
    // floor(3.14) -> 3
    // fabs(-100) -> 100
    printf("\n%.0lf", c);
*/

    // const double PI = 3.14;
    // double radius;
    // double circumference;
    // double area;

    // printf("\nEnter the radius of circle: ");
    // scanf("%lf", &radius);

    // circumference = 2 * PI * radius;
    // area = PI * pow(radius, 2);

    // printf("Circumference: %lf", circumference);
    // printf("\nArea: %lf", area);

/*
    // IF and SWITCH statements

    // int age;

    // printf("\nEnter your age: ");
    // scanf("%d", &age);

    // if (age >= 18){
    //     printf("You are welcome!");
    // } else if (age < 0) {
    //     printf("Invalid age!");
    // }
    //  else {
    //     printf("You are too young to sign up!");
    // }

    char grade;
    printf("Enter your grade >>> ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect");
        break;
    
    default:
    printf("Please enter only valid grade");
        break;
    }
*/


    // char unit;

    // printf("Temerauture (C or F): ");
    // scanf("%c", &unit);
    // unit = toupper(unit);

    // if (unit == 'C'){
    //     printf("%c temperatura", unit);
    // } else if (unit == 'F'){
    //     printf("%c temperatura", unit);
    // }

    ////////////////////////////////////////

    // char operator;
    // double num1;
    // double num2;
    // double result;

    // printf("\nEnter an operator (+, -, /, *): ");
    // scanf("%c", &operator);

    // printf("Enter number 1: ");
    // scanf("%lf", &num1);

    // printf("Enter number 2: ");
    // scanf("%lf", &num2);

    // switch (operator) {
    //     case '+':
    //         result = num1 + num2;
    //         break;
    //     case '-':
    //         result = num1 - num2;
    //         break;
    //     case '/':
    //         result = num1 / num2;
    //         break;
    //     case '*':
    //         result = num1 * num2;
    //         break;
    //     default:
    //         break;
    // }
    // printf("Result: %lf", result);
    return 0;
}

void hello() {
    printf("\nHello, world!");
}

void hello_bro(char name[], int age) {
    printf("\nHello, %s!", name);
    printf("\nYou are %d years old!", age);
}

double square(int x){
    return x * x;
}

int findMax(int x, int y){
    return (x > y) ? x: y;
}

int main3() {
    char name[] = "Otabek";
    int age = 21;

    hello_bro(name, age);
    printf("\n%lf", square(5));

    printf("\n%d", findMax(11, 15));

    return 0;
}


// String functions
#include <string.h>
int main4() {
    char first_name[] = "Otabek";
    char last_name[] = "Tursunov";

    // strlwr(first_name);
    // strupr(first_name);
    // strcat(first_name, last_name);
    // strncat(first_name, last_name, 2);
    // strcpy(first_name, last_name);
    // strncpy(first_name, last_name, 3);

    // strset(first_name, '!');
    // strnset(first_name, 'A', 1);

    // strrev(first_name);

    // int result = strlen(first_name);
    // int result1 = strcmp(first_name, last_name);
    // int result2 = strncmp(first_name, last_name, 1);
    // int result3 = strcmpi(first_name, last_name);
    // int result4 = stricmp(first_name, last_name);


    // printf("%d", result1);
    // printf("%s", first_name);
}

// for & while loops
int main5(){
    // for (int i = 1; i <= 10; i++){
    //     printf("%d\n", i);
    // }

    // for (int i = 10; i >= 1; i--){
    //     printf("%d\n", i);
    // }

    // char name[25];

    // printf("\nWhat's your name: ");
    // fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';

    // while (strlen(name) == 0){
    //     printf("You did not enter your name!");
    //     printf("\nWhat's your name: ");
    //     fgets(name, 25, stdin);
    //     name[strlen(name) - 1] = '\0';
    // }
    // printf("Hello %s", name);

    // int n = 0;
    // int s = 0;

    // do {
    //     printf("Enter positive number: ");
    //     scanf("%d", &n);
    //     if (n > 0){
    //         s += n;
    //     }
    // } while (n > 0);


    // int rows;
    // int columns;
    // char symbol;

    // printf("\nEnter # of rows: ");
    // scanf("%d", &rows);
    
    // printf("\nEnter # of columns: ");
    // scanf("%d", &columns);

    // getchar();

    // printf("\nEnter a symbol to use: ");
    // scanf("%c", &symbol);

    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= columns; j++){
    //         printf("%c", symbol);
    //     }
    //     printf("\n");
    // }



    return 0;
}

// arrays
int main6() {
    // double prices[] = {5.0, 11.0, 12.99, 13.0, 44.5, 19.99};
    // // printf("Price: %.2lf", prices[2]);

    // for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++){
    //     printf("$ %.2lf\n", prices[i]);
    // }

// 2D arrays

    // int matrix[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // int rows = sizeof(matrix) / sizeof(matrix[0]);
    // int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    // printf("Rows: %d\n", rows);
    // printf("Columns: %d\n", columns);

    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < columns; j++){
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

// array of strings

    // char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    // // cars[0] = "Tesla"; ????!!!
    // strcpy(cars[0], "Tesla");

    // for(int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++){
    //     printf("%s\n", cars[i]);
    // }

// swap two element

    // char x = 'X';
    // char y = 'Y';
    // char temp;

    // temp = x;
    // x = y;
    // y = temp;

    // printf("x = %c\n", x);
    // printf("y = %c\n", y);

// *in string

    // char x[15] = "water";
    // char y[15] = "soda";
    // char temp[15];

    // strcpy(temp, x);
    // strcpy(x, y);
    // strcpy(y, temp);

    // printf("x = %s\n", x);
    // printf("y = %s\n", y);

    // return 0;
}

// Bubble sort funtion and use

// void sort(int array[], int size){
//     for(int i = 0; i < size - 1; i++){
//         for(int j = 0; j > size - 1; j++){
//             if(array[j] < array[j + 1]){
//                 int temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }

// void printArray(int array[], int size){
//     for (int i = 0; i < size; i++){
//         printf("%d ", array[i]);
//     }
// }

// int main(){
//     int nums[] = {9, 5, 8, 1, 4, 0, 3, 2, 6, 7};
//     int size = sizeof(nums) / sizeof(nums[0]);

//     sort(nums, size);
//     printArray(nums, size);
// }

// struct - as dataclass in Python

// struct Player
// {
//     char name[12];
//     int score;
// };

// int main(){

//     struct Player player1;
//     struct Player player2;

//     printf("Enter player name: ");
//     scanf("%s", &player1.name);

//     player1.score = 5;

//     printf("%s", player1.name);
//     return 0;
// }

// typedef - as as in Python

// typedef struct
// {
//     char username[20];
//     char password[12];
//     int id;
// } User; 

// typedef int Integer;


// int main(){

//     User user1;
//     User user2 = {"paul", "12345678", 2};

//     strcpy(user1.username, "john");
//     strcpy(user1.password, "qwer123/");
//     user1.id = 1;

//     printf("Username: %s\n", user1.username);
//     printf("Password: %s\n", user1.password);
//     printf("User ID: %d\n\n", user1.id);

//     printf("Username: %s\n", user2.username);
//     printf("Password: %s\n", user2.password);
//     printf("User ID: %d\n\n", user2.id);


//     Integer a = 7;
//     printf("%d", a);

//     return 0;
// }

// array in struct

// struct Student
// {
//     char name[12];
//     int age;
// };

// int main()
// {
//     struct Student s1 = {"Otabek", 21};
//     struct Student s2 = {"Aziza", 20};
//     struct Student s3 = {"Islombek", 22};
//     struct Student s4 = {"John", 17};

//     struct Student students[] = {s1, s2, s3, s4};

//     for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
//     {
//         printf("%-10s\t", students[i].name);
//         printf("%d\n", students[i].age);
//     }
//     return 0;
// }

// enum 

// enum Day {Yak=1, Du, Se, Chor, Pay, Ju, Sha};
// enum Svetafor {Red, Yellow, Green};

// int main(){

//     enum Day today;
//     today = Chor;

//     printf("%d", today);

//     enum Svetafor color;
//     color = Yellow;

//     if (color == Green){
//         printf("Yurishingiz mumkin!");
//     } else if (color == Yellow)
//     {
//         printf("Tayyorlaning");
//     } else {
//         printf("To'xtang!");
//     }
    

//     return 0;
// }

// random

#include <stdlib.h>
#include <time.h>

// int main(){
//     srand(time(0)); // srand(time(NULL));
    
//     int number1 = rand() % 9 + 1;  // 0 - 32 767
//     int number2 = rand() % 9 + 1;
//     int number3 = rand() % 9 + 1;

//     printf("%d\n", number1);
//     printf("%d\n", number2);
//     printf("%d\n", number3);
    
//     return 0;
// }

// random game

// int main(){
//     const int MIN = 1;
//     const int MAX = 1000;

//     int guess;
//     int guesses = 0;
//     int answer;

//     // uses the current time as a seed 
//     srand(time(NULL));

//     // generate random number between MIN & MAX
//     answer = (rand() % MAX) + MIN;

//     do {
//         printf("Enter a guess: ");
//         scanf("%d", &guess);
//         if (guess > answer)
//         {
//             printf("Too high!\n");
//         } else if (guess < answer)
//         {
//             printf("Too low!\n");
//         } else {
//             printf("Correct!\n");
//         }
//         guesses++;
//     } while (guess != answer);

//     printf("***********************\n");
//     printf("answer: %d\n", answer);
//     printf("guesses: %d\n", guesses);


//     return 0;
// }

// quiz game 

// int main()
// {
//     char questions[][100] = {
//         "1. What year did the C language debut?",
//         "2. Who is credited with creating C?",
//         "3. What is the predecessor of C?"
//     };

//     char options[][100] = {
//         "A. 1969", "B. 1972", "C. 1975", "D. 1999",
//         "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brain",
//         "A. Objective C", "B. B", "C. C++", "D. C#"  
//     };

//     char answers[] = {'B', 'A', 'B'};
//     int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

//     char guess;
//     int score = 0;

//     printf("QUIZ GAME!\n\n");
    
//     for(int i = 0; i < numberOfQuestions; i++)
//     {
//         printf("%s\n", questions[i]);
//         for(int j = i * 4; j < i * 4 + 4; j++)
//         {
//             printf("%s    ", options[j]);
//         }
//         printf("\n\nguess: ");
//         scanf(" %c", &guess);
//         // getchar();

//         guess = toupper(guess);
        
//         if (guess == answers[i])
//         {
//             printf("CORRECT!\n\n");
//             score++;
//         } else {
//             printf("WRONG!\n\n");
//         }
//     }

//     printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);


//     return 0;
// }

// memory address & pointers

// int main(){
    // char a = 'X';
    // char b = 'Y';
    // char c = 'Z';

    // printf("%d bytes\n", sizeof(a));
    // printf("%d bytes\n", sizeof(b));
    // printf("%d bytes\n", sizeof(c));

    
    // printf("%p\n", &a);
    // printf("%p\n", &b);
    // printf("%p\n", &c);

    // decimal: 0-9
    // hexadecimal: 0-9 + A-F

    // int age = 21;
    // int *pAge = &age;


    // printf("Value of age: %d\n", age);
    // printf("Address of age: %p\n", pAge);

//     return 0;
// }


// files

int main()
{
    // FILE *pF = fopen("test.txt", "a");
    // fprintf(pF, "\nShukron, Sabina, Ifora");
    // fclose(pF);

    // if (remove("test.txt") == 0){
    //     printf("Deleted successfully!");
    // } else {
    //     printf("Not deleted!");
    // }

// fprintf(): Formatlangan ma'lumotni faylga yozadi (printf ga o'xshash).
// fputc(): Faylga bitta belgini yozadi.
// fputs(): Stringni faylga yozadi.

// fscanf(): Formatlangan ma'lumotni fayldan o'qish.
// fgetc(): Fayldan bitta belgi o'qish.
// fgets(): Fayldan string o'qish.


    // FILE *pF = fopen("test.txt", "w");
    // fprintf(pF, "Otabek, Otabek, Otabek\nShukron, Sabina, Ifora");
    // fclose(pF);

    // FILE *pF = fopen("test.txt", "r");
    // char line1[255];
    // char line2[255];

    // // fgets(line1, 255, pF);
    // // fgets(line2, 255, pF);

    // // printf("%s", line1);
    // // printf("%s", line2);
    // while (fgets(line1, 255, pF) != NULL)
    // {   
    //     printf("%s", line1);
    // }
    

    // fclose(pF);

    // return 0;
}