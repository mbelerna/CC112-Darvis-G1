#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265

void loading(){
    printf("\n\n\t\033[1;32mDarvis is preparing your next screen");
    for(int i=0; i<4; i++){
        Sleep(200);
        printf(".\033[0m");
    }
    Sleep(250);
    system("cls");
}

int main (){
    char name[50];
    int a,b,choice,subChoice; 
	float c,d,r,pi=3.14159,temp,kelvin,celsius,fahrenheit,weight,kilogram,gram,milligram,length,meter,centimeter,millimeter;

        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    char screen[25][81];
    char symbols[] = "@#$*+=-:. ";

    double angle, radius;
    int x, y;

    int centerX = 40;
    int centerY = 11;

    CONSOLE_CURSOR_INFO cursor;
    GetConsoleCursorInfo(h, &cursor);

    cursor.bVisible = FALSE;
    SetConsoleCursorInfo(h, &cursor);

    system("cls");

    // Swirl animation for 1 second
    for (int frame = 0; frame < 25; frame++) {

        for (int row = 0; row < 25; row++) {
            for (int col = 0; col < 80; col++) {
                screen[row][col] = ' ';
            }
            screen[row][80] = '\0';
        }

        for (int arm = 0; arm < 3; arm++) {

            for (radius = 0.5; radius <= 9.5; radius += 0.025) {

                angle = (radius * 0.85)
                      + (frame * 0.12)
                      + (arm * 2 * PI / 3);

                x = centerX + (int)(radius * 2 * cos(angle));
                y = centerY + (int)(radius * sin(angle));

                if (x >= 0 && x < 80 &&
                    y >= 0 && y < 25) {

                    int shade = (int)(radius * 1.2) % 9;
                    screen[y][x] = symbols[shade];
                }
            }
        }

        COORD pos = {0, 0};
        SetConsoleCursorPosition(h, pos);

        SetConsoleTextAttribute(h, 7);

        for (int row = 0; row < 25; row++) {
            printf("%s\n", screen[row]);
        }

        Sleep(40);
    }

    system("cls");

    cursor.bVisible = TRUE;
    SetConsoleCursorInfo(h, &cursor);
	start:
    system("cls");
    
    printf("\n\n");
	printf("\t\t\033[1;32mDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDV\n");
	printf("\t\tDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDV\n");
	printf("\t\tDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDV\n");
	printf("\t\tDVDVDV  	  DVDVDVDV     DVDVDVDV     DVDVDVDV\n");
	printf("\t\tDVDVDV	    DVDVDV    DVDVDV    DVDVDV    DVDVDVDVDV\n");
	printf("\t\tDVDVDV	    DVDVDV    DVDVDV    DVDVDV    DVDVDVDVDV\n");
	printf("\t\tDVDVDV	    DVDVDV    DVDVDV    DVDVDV    DVDVDVDVDV\n");
	printf("\t\tDVDVDV	    DVDVDV    DVDVDVDV    DV    DVDVDVDVDVDV\n");
	printf("\t\tDVDVDV	    DVDVDV    DVDVDVDV    DV    DVDVDVDVDVDV\n");
	printf("\t\tDVDVDV	    DVDVDV    DVDVDVDVDV       DVDVDVDVDDVDV\n");
	printf("\t\tDVDVDV	          DVDVDVDVDVDVDV      DVDVDVDVDVDVDV\n");
	printf("\t\tDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDV\n");
	printf("\t\tDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDV\n");
	printf("\t\tDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDVDV\033[0m\n\n\n");

    printf("      ------------------------------------------------------------------------\n");
    printf("              Hello, I am \033[1;32mDarvis\033[0m! I will be your assistant.                   \n");
    printf("       My role is to guide you through the program and fulfill your needs.    \n");
    printf("      ------------------------------------------------------------------------\n");   

	printf("                Please Enter your name : ");
	fgets(name, sizeof(name), stdin);
	
	name[strcspn(name, "\n")] = '\0';
	
	// Checks if the name contains numbers
	int hasNumber = 0;
	
	for(int j = 0; name[j] != '\0'; j++){
	    if(name[j] >= '0' && name[j] <= '9'){
	        hasNumber = 1;
	        break;
	    }
	}
	
	if(hasNumber){
	    printf("\n\tNumbers are not allowed in your name. Please enter your real name.");
	    printf("\n\tPress any key to try again...");
	    getch();
	    loading();
	    goto start;
	}
	
	int i = 0;
	while(name[i] == ' '){
	    i++;
	}
	
	if(name[i] == '\0'){
	    printf("\n\tI didn't catch your name. Please enter it before we continue.");
	    printf("\n\tPress any key...");
	    getch();
	    loading();
	    goto start;
	}


    system("cls");

    printf("-------------------------------------------------------------------------\n");
    printf(" \033[1;32mDarvis\033[0m : It's nice to meet you %s! I am excited to work with you today.         \n", name);
    printf("    Let's get started, I'll send you to the Main Menu unless you         \n");
    printf("                  wish to change your name.                              \n");
    printf("-------------------------------------------------------------------------\n\n");

    printf("(1) I would like to change my name.\n");
    printf("(2) Please continue to the Main Menu.\n\n");

    printf("Please enter your choice : ");
    choice = getch() - '0';
    loading();

    switch (choice){
        case 1:
            goto start;

        case 2:

            main:

        	printf("                     ********************             \n");
            printf("                    \033[1;32mDarvisions\033[0m : Main Menu       \n");
            printf("                     ********************              \n\n");
                    

            printf("      ______________________________________________________\n");
            printf("      - These are your options :                           -\n");
            printf("      -             [1] Arithmetic Operators               -\n");
            printf("      -             [2] Conversions                        -\n");
            printf("      -             [3] About Numbers                      -\n");
            printf("      -             [4] About Us                           -\n");
            printf("      -             {5} Exit                               -\n");
            printf("      ______________________________________________________\n\n");

            printf("--------------------------------------------------------------------\n");
            printf("\033[1;32mDarvis\033[0m: Hey %s, this is the Main Menu! Go ahead and look around,\n", name);
            printf("    simply press a button that corresponds to the\n");
            printf("        option you'd like to visit %s.\n", name);
            printf("--------------------------------------------------------------------\n");

            printf("                Please enter your choice : ");
            choice = getch() - '0';
            loading();

            switch(choice){

                
case 1:
    

    arithmetic:

	    	system("cls");
	
	        printf("                     ********************             \n");
	        printf("           \033[1;32mDarvisions\033[0m : Arithmetic Operators Sub Menu       \n");
	        printf("                     ********************              \n\n");
	
	        printf("      ______________________________________________________\n");
	        printf("      - These are your options :                           -\n");
	        printf("      -             [1] Addition                           -\n");
	        printf("      -             [2] Subtraction                        -\n");
	        printf("      -             [3] Multiplication                     -\n");
	        printf("      -             [4] Division                           -\n");
	        printf("      -             [5] Division w/ Decimal                -\n");
	        printf("      -             [6] Remainder                          -\n");
	        printf("      -             {7} Return to Main Menu                -\n");
	        printf("      ______________________________________________________\n\n");
	        
	        printf("--------------------------------------------------------------------\n");
	        printf("\033[1;32mDarvis\033[0m: Hey %s, this is the Arithmetic Sub Menu! Here, you can perform\n", name);
	        printf("    basic logical operations just simply press a button that\n");
	        printf("        corresponds to the option you'd like to try %s.\n", name);
	        printf("--------------------------------------------------------------------\n\n");
	
	        printf("Choose operator: ");
	    	subChoice = getch() - '0';
	    	
	    	system("cls");

		        switch(subChoice) {
		
		            case 1:
		            	
		            	printf("                         ******               \n");
					    printf("                        \033[1;32mAddition\033[0m       \n");
					    printf("                         ******               \n\n");
					    
		                printf("Enter the first number: ");
		                if (scanf("%d", &a) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                printf("Enter the second number: ");
		                if (scanf("%d", &b) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                while (getchar() != '\n');
		
		                printf("Total: %d\n", a+b);
		                break;
		
		            case 2:
		            	
		            	printf("                         ******               \n");
					    printf("                      \033[1;32mSubtraction\033[0m       \n");
					    printf("                         ******               \n\n");
					    
		                printf("Enter the first number: ");
		                if (scanf("%d", &a) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                printf("Enter the second number: ");
		                if (scanf("%d", &b) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                while (getchar() != '\n');
		
		                printf("Total: %d\n", a-b);
		                break;
		
		            case 3:
		            	printf("                         ******               \n");
					    printf("                     \033[1;32mMultiplication\033[0m       \n");
					    printf("                         ******               \n\n");
					    
		                printf("Enter the first number: ");
		                if (scanf("%d", &a) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                printf("Enter the second number: ");
		                if (scanf("%d", &b) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                while (getchar() != '\n');
		
		                printf("Total: %d\n", a*b);
		                break;
		
		            case 4:
		            	printf("                         ******               \n");
					    printf("                        \033[1;32mDivision\033[0m       \n");
					    printf("                         ******               \n\n");
		            	
		                printf("Enter the first number: ");
		                if (scanf("%d", &a) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                printf("Enter the second number: ");
		                if (scanf("%d", &b) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                while (getchar() != '\n');
		
		                if (b != 0) {
		                    printf("Total: %d\n", a/b);
		                } else {
		                    printf("You can't divide by zero. Please enter a non-zero second number.\n");
		                }
		                break;
		
		            case 5:
		            	printf("                         ******               \n");
					    printf("                   \033[1;32mDivision w/ Decimal\033[0m       \n");
					    printf("                         ******               \n\n");
		            	
		                printf("Enter the first number: ");
		                if (scanf("%f", &c) != 1) {
		                    printf("\nPlease enter a valid number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                printf("Enter the second number: ");
		                if (scanf("%f", &d) != 1) {
		                    printf("\nPlease enter a valid number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                while (getchar() != '\n');
		
		                if (d != 0) {
		                    printf("Total: %.2f\n", c/d);
		                } else {
		                    printf("You can't divide by zero. Please enter a non-zero second number.\n");
		                }
		                break;
		
		            case 6:
		            	printf("                         ******               \n");
					    printf("                   \033[1;32mRemainder / Modulus\033[0m       \n");
					    printf("                         ******               \n\n");
		            	
		                printf("Enter the first number: ");
		                if (scanf("%d", &a) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                printf("Enter the second number: ");
		                if (scanf("%d", &b) != 1) {
		                    printf("\nPlease enter a whole number. Let's try that again.");
		                    while (getchar() != '\n');
		                    break;
		                }
		                while (getchar() != '\n');
		
		                if (b != 0) {
		                    printf("Total: %d\n", a%b);
		                } else {
		                    printf("You can't get a remainder using zero as the second number.\n");
		                }
		                break;
		
		            case 7:
		                goto main;
		
		            default:
		                printf("That option isn't available. Please choose a number from 1 to 7.\n");
		                break;
				        }
				
				        printf("\nPress any key to return to the Arithmetic Menu...");
            			getch();
			            loading();
			            goto arithmetic;
			
		


case 2:
			system("cls");
			converter:
    		printf("                     ********************             \n");
	        printf("                \033[1;32mDarvisions\033[0m : Converter Sub Menu       \n");
	        printf("                     ********************              \n\n");
	
	        printf("      ______________________________________________________\n");
	        printf("      - These are your options :                           -\n");
	        printf("      -             [1] Temperature                        -\n");
	        printf("      -             [2] Mass                               -\n");
	        printf("      -             [3] Length                             -\n");
	        printf("      -             {4} Return to Main Menu                -\n");
	        printf("      ______________________________________________________\n\n");
	        
	        printf("--------------------------------------------------------------------\n");
	        printf("\033[1;32mDarvis\033[0m: Hey %s, this is the Conversions Sub Menu! Here, you can perform\n", name);
	        printf("    basic conversions just simply press a button that\n");
	        printf("        corresponds to the option you'd like to try %s.\n", name);
	        printf("--------------------------------------------------------------------\n\n");
	
	        printf("Choose operator: ");
	    	choice = getch() - '0';
	    	
	    	system("cls");
			
			
switch(choice) {

    case 1:
    temperature:

        printf("                        ***********             \n");
        printf("                      \033[1;32mTemperature Sub Menu\033[0m       \n");
        printf("                        ***********              \n\n");

        printf("      ______________________________________________________\n");
        printf("      - These are your options :                           -\n");
        printf("      -             [1] Kelvin                             -\n");
        printf("      -             [2] Celcius                            -\n");
        printf("      -             [3] Fahrenheit                         -\n");
        printf("      -             {4} Back to Converter Menu             -\n");
        printf("      ______________________________________________________\n\n");

        printf("--------------------------------------------------------------------\n");
        printf("\033[1;32mDarvis\033[0m: Hey %s, this is the Conversions Sub Menu! Here, you can perform\n", name);
        printf("    basic conversions just simply press a button that\n");
        printf("        corresponds to the option you'd like to try %s.\n", name);
        printf("--------------------------------------------------------------------\n\n");

        printf("Choose operator: ");
        subChoice = getch() - '0';
        loading();

        switch(subChoice) {

            case 1:
                printf("                         ******               \n");
                printf("                         \033[1;32mKelvin\033[0m       \n");
                printf("                         ******               \n\n");

                printf("Enter the temperature: ");

                if (scanf("%f", &temp) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (temp < 0) {
                    while (getchar() != '\n');
                    printf("\nKelvin cannot be negative. Please enter 0 or a higher value.");
                }
                else {
                    while (getchar() != '\n');
                    kelvin = temp;
                    celsius = kelvin - 273.15;
                    fahrenheit = (celsius * 9.0 / 5.0) + 32;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");


                    printf("\nKelvin: %.2f K", kelvin);
                    printf("\nCelsius: %.2f C", celsius);
                    printf("\nFahrenheit: %.2f F", fahrenheit);
                }
                break;

            case 2:
                printf("                         *****               \n");
                printf("                        \033[1;32mCelcius\033[0m       \n");
                printf("                         *****               \n\n");

                printf("Enter the temperature: ");

                if (scanf("%f", &temp) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (temp < -273.15) {
                    while (getchar() != '\n');
                    printf("\nCelsius cannot be lower than -273.15.");
                }
                else {
                    while (getchar() != '\n');
                    celsius = temp;
                    kelvin = celsius + 273.15;
                    fahrenheit = (celsius * 9.0 / 5.0) + 32;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");


                    printf("\nKelvin: %.2f K", kelvin);
                    printf("\nCelsius: %.2f C", celsius);
                    printf("\nFahrenheit: %.2f F", fahrenheit);
                }
                break;

            case 3:
                printf("                         ******               \n");
                printf("                       \033[1;32mFahrenheit\033[0m       \n");
                printf("                         ******               \n\n");

                printf("Enter the temperature: ");

                if (scanf("%f", &temp) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (temp < -459.67) {
                    while (getchar() != '\n');
                    printf("\nFahrenheit cannot be lower than -459.67.");
                }
                else {
                    while (getchar() != '\n');
                    fahrenheit = temp;
                    celsius = (fahrenheit - 32) * 5.0 / 9.0;
                    kelvin = celsius + 273.15;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");


                    printf("\nKelvin: %.2f K", kelvin);
                    printf("\nCelsius: %.2f C", celsius);
                    printf("\nFahrenheit: %.2f F", fahrenheit);
                }
                break;

            case 4:
                goto converter;

            default:
                printf("\nThat option isn't available. Please choose from 1 to 4.");
                break;
        }

        printf("\n\nPress any key to return to the Temperature Menu...");
        getch();
        loading();
        goto temperature;


    case 2:
    weight:

        printf("                        ***********             \n");
        printf("                       \033[1;32mMass Sub Menu\033[0m       \n");
        printf("                        ***********              \n\n");

        printf("      ______________________________________________________\n");
        printf("      - These are your options :                           -\n");
        printf("      -             [1] Kilogram                           -\n");
        printf("      -             [2] Gram                               -\n");
        printf("      -             [3] Milligram                          -\n");
        printf("      -             {4} Back to Converter Menu             -\n");
        printf("      ______________________________________________________\n\n");

        printf("--------------------------------------------------------------------\n");
        printf("\033[1;32mDarvis\033[0m: Hey %s, this is the Conversions Sub Menu! Here, you can perform\n", name);
        printf("    basic conversions just simply press a button that\n");
        printf("        corresponds to the option you'd like to try %s.\n", name);
        printf("--------------------------------------------------------------------\n\n");

        printf("Choose operator: ");
        subChoice = getch() - '0';
        loading();

        switch(subChoice) {

            case 1:
                printf("                         ******               \n");
                printf("                        \033[1;32mKilogram\033[0m       \n");
                printf("                         ******               \n\n");

                printf("Enter the weight: ");

                if (scanf("%f", &weight) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (weight < 0) {
                    while (getchar() != '\n');
                    printf("\nWeight cannot be negative. Please enter 0 or a positive value.");
                }
                else {
                    while (getchar() != '\n');
                    kilogram = weight;
                    gram = kilogram * 1000;
                    milligram = kilogram * 1000000;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");


                    printf("\nKilogram: %.2f kg", kilogram);
                    printf("\nGram: %.2f g", gram);
                    printf("\nMilligram: %.2f mg", milligram);
                }
                break;

            case 2:
                printf("                         ****               \n");
                printf("                         \033[1;32mGram\033[0m       \n");
                printf("                         ****               \n\n");

                printf("Enter the weight: ");

                if (scanf("%f", &weight) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (weight < 0) {
                    while (getchar() != '\n');
                    printf("\nWeight cannot be negative. Please enter 0 or a positive value.");
                }
                else {
                    while (getchar() != '\n');
                    gram = weight;
                    kilogram = gram / 1000;
                    milligram = gram * 1000;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");


                    printf("\nKilogram: %.2f kg", kilogram);
                    printf("\nGram: %.2f g", gram);
                    printf("\nMilligram: %.2f mg", milligram);
                }
                break;

            case 3:
                printf("                         ******               \n");
                printf("                       \033[1;32mMilligram\033[0m       \n");
                printf("                         ******               \n\n");

                printf("Enter the weight: ");

                if (scanf("%f", &weight) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (weight < 0) {
                    while (getchar() != '\n');
                    printf("\nWeight cannot be negative. Please enter 0 or a positive value.");
                }
                else {
                    while (getchar() != '\n');
                    milligram = weight;
                    gram = milligram / 1000;
                    kilogram = gram / 1000;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");

                    printf("\nKilogram: %.2f kg", kilogram);
                    printf("\nGram: %.2f g", gram);
                    printf("\nMilligram: %.2f mg", milligram);
                }
                break;

            case 4:
                goto converter;

            default:
                printf("\nThat option isn't available. Please choose from 1 to 4.");
                break;
        }

        printf("\n\nPress any key to return to the Mass Menu...");
        getch();
        loading();
        goto weight;


    case 3:
    lengthMenu:

        printf("                        ***********             \n");
        printf("                       \033[1;32mLength Sub Menu\033[0m       \n");
        printf("                        ***********              \n\n");

        printf("      ______________________________________________________\n");
        printf("      - These are your options :                           -\n");
        printf("      -             [1] Meter                              -\n");
        printf("      -             [2] Centimeter                         -\n");
        printf("      -             [3] Millimeter                         -\n");
        printf("      -             {4} Back to Converter Menu             -\n");
        printf("      ______________________________________________________\n\n");

        printf("--------------------------------------------------------------------\n");
        printf("\033[1;32mDarvis\033[0m: Hey %s, this is the Conversions Sub Menu! Here, you can perform\n", name);
        printf("    basic conversions just simply press a button that\n");
        printf("        corresponds to the option you'd like to try %s.\n", name);
        printf("--------------------------------------------------------------------\n\n");

        printf("Choose operator: ");
        subChoice = getch() - '0';
        loading();

        switch(subChoice) {

            case 1:
                printf("                         ******               \n");
                printf("                         \033[1;32mMeter\033[0m       \n");
                printf("                         ******               \n\n");

                printf("Enter the length: ");

                if (scanf("%f", &length) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (length < 0) {
                    while (getchar() != '\n');
                    printf("\nLength cannot be negative. Please enter 0 or a positive value.");
                }
                else {
                    while (getchar() != '\n');
                    meter = length;
                    centimeter = meter * 100;
                    millimeter = meter * 1000;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");

                    printf("\nMeter: %.2f m", meter);
                    printf("\nCentimeter: %.2f cm", centimeter);
                    printf("\nMillimeter: %.2f mm", millimeter);
                }
                break;

            case 2:
                printf("                         ******               \n");
                printf("                      \033[1;32mCentimeter\033[0m       \n");
                printf("                         ******               \n\n");

                printf("Enter the length: ");

                if (scanf("%f", &length) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (length < 0) {
                    while (getchar() != '\n');
                    printf("\nLength cannot be negative. Please enter 0 or a positive value.");
                }
                else {
                    while (getchar() != '\n');
                    centimeter = length;
                    meter = centimeter / 100;
                    millimeter = centimeter * 10;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");

                    printf("\nMeter: %.2f m", meter);
                    printf("\nCentimeter: %.2f cm", centimeter);
                    printf("\nMillimeter: %.2f mm", millimeter);
                }
                break;

            case 3:
                printf("                         ******               \n");
                printf("                       \033[1;32mMillimeter\033[0m       \n");
                printf("                         ******               \n\n");

                printf("Enter the length: ");

                if (scanf("%f", &length) != 1) {
                    printf("\nThat doesn't look like a number. Please try again.");
                    while (getchar() != '\n');
                }
                else if (length < 0) {
                    while (getchar() != '\n');
                    printf("\nLength cannot be negative. Please enter 0 or a positive value.");
                }
                else {
                    while (getchar() != '\n');
                    millimeter = length;
                    centimeter = millimeter / 10;
                    meter = millimeter / 1000;
                    
                    printf("           *************         \n");
	            	printf("               \033[1;32mRESULT\033[0m            \n");
	            	printf("           *************         \n");

                    printf("\nMeter: %.2f m", meter);
                    printf("\nCentimeter: %.2f cm", centimeter);
                    printf("\nMillimeter: %.2f mm", millimeter);
                }
                break;

            case 4:
                goto converter;
				
            default:
                printf("\nThat option isn't available. Please choose from 1 to 4.");
                break;
        }

        printf("\n\nPress any key to return to the Length Menu...");
        getch();
        loading();
        goto lengthMenu;

    case 4:
        goto main;

    default:
        printf("\nThat option is not available. Please choose from 1 to 4.");
        getch();
        loading();
        goto converter;
}


case 3:
    system("cls");

    numbers:

    printf("                  *********************               \n");
    printf("            \033[1;32mDarvisions\033[0m : About Numbers Sub Menu       \n");
    printf("                  *********************               \n\n");

    printf("         _______________________________________________\n");
    printf("         -  These are your options :                   -\n");
    printf("         -        [1] Area                             -\n");
    printf("         -        [2] Circumference                    -\n");
    printf("         -        {3} Return to Main Menu              -\n");
    printf("         _______________________________________________\n");

    printf(" --------------------------------------------------------------------\n");
    printf("   \033[1;32mDarvis\033[0m: Hey %s, this is the About Numbers Sub Menu! Here, you can\n", name);
    printf("     calculate the Area and Circumference of a circle. Simply press the\n");
    printf("                button you'd like to try, %s.\n", name);
    printf(" --------------------------------------------------------------------\n");

    printf("                 Please enter your choice : ");
    choice = getch() - '0';
    loading();

    switch(choice){

        case 1:
            system("cls");
            printf("Enter radius: ");

            if (scanf("%f", &r) != 1){
                printf("Darvis: I couldn't read that number. Please enter numbers only.\n");
                while (getchar() != '\n');
            } 
            else if (r > 0 && r == r){
                while (getchar() != '\n');
            	printf("           *************         \n");
            	printf("               \033[1;32mRESULT\033[0m            \n");
            	printf("           *************         \n");
            	
                printf("Area : %.2f\n", pi*r*r);
            } 
            else {
                while (getchar() != '\n');
                printf("Darvis: Radius must be greater than 0. Please try again.\n");
            }

            printf("\nPress any key to return to the About Numbers Menu...");
            getch();
            loading();
            goto numbers;

        case 2:
            system("cls");
            printf("Enter radius: ");

            if (scanf("%f", &r) != 1){
                printf("\nDarvis: I couldn't read that number. Please enter numbers only.\n");
                while (getchar() != '\n');
            } 
            else if (r > 0 && r == r){
                while (getchar() != '\n');
            	printf("           *************         \n");
            	printf("               \033[1;32mRESULT\033[0m            \n");
            	printf("           *************         \n");
                printf("Circumference : %.2f\n", 2*pi*r);
            } 
            else {
                while (getchar() != '\n');
                printf("Darvis: Radius must be greater than 0. Please try again.\n");
            }

            printf("\nPress any key to return to the About Numbers Menu...");
            getch();
            loading();
            goto numbers;

        case 3:
            goto main;

        default:
            printf("\nThat option isn't available. Please choose one of the options shown.");
            getch();
            loading();
            goto numbers;
    }

                case 4:
                    system("cls");

                    printf("           *********************               \n");
                    printf("   \033[1;32mDarvisions\033[0m : About the Programmers Sub Menu \n");
                    printf("           *********************               \n\n");

                    printf("_______________________________________________\n");
                    printf("- They are the Programmers:                   -\n");
                    printf("-        [1] Leader: Erna, Maribel S.         -\n");
                    printf("-        [2] Boaquin, Jaira Marie D.          -\n");
                    printf("-        [3] Castro, John Jade A.             -\n");
                    printf("-        [4] Colorado, Vince Angelo Q.        -\n");
                    printf("-        [5] Soreta, Charles Godwin M.        -\n");
                    printf("_______________________________________________\n");

                    printf("\nPress any key to return to the Main Menu...");
		            getch();
		            loading();
		            
		            goto main;

                    break;

                case 5:
                    system("cls");
                    printf("Thank you for using \033[1;32mDarvis\033[0m, %s!", name);
                    return 0;

                default:
                    printf("That option isn't available. Please choose from 1 to 5.");
                    getch();
                    loading();
                    goto main;
            }

        default:
            system("cls");
            printf("That option isn't available. Please choose one of the options shown.");
            getch();
            loading();
            goto start;
    }

    return 0;
}
