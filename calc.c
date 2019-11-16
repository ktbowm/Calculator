//Lab 4: Advanced Calculator
//Author: Kennedy Bowman
//Date: 1/30/14
//Section: 02

#include<stdio.h>

//Function prototypes
float Addition(float, float);
float Subtraction(float, float);
float Multiplication(float, float);
float Division(float, float);
int Modulus(int, int);
int PrimeTest(int);
int Factorial(int);
float Power(float, int);
void Sequence(int);

int main()

{

	//Variable for user's menu choice
	int iOperation = 0;
	
	do {
	
		//Menu output to user
		printf("Calculator Menu:\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modulus (Integers only))\n");
		printf("6. Test if prime (Integers only)\n");
		printf("7. Factorial (Integers only)\n");
		printf("8. Power\n");
		printf("9. Fibonacci Sequence\n");
		printf("0. Exit Calculator\n");

		//User input
		printf("\nChoose an operation: ");
		scanf("%d", &iOperation);

		switch (iOperation) {
	
			//Declaring and initializing variables
			float fFirstNumber = 0;
			float fSecondNumber = 0;
			int iFirstNumber = 0;
			int iSecondNumber = 0;
			float fAnswer = 0;
			int iAnswer = 0;
	
			//Addition
			case 1:
		
				printf("Enter first number to be added: ");
				scanf("%f", &fFirstNumber);
				printf("Enter second number to be added: ");
				scanf("%f", &fSecondNumber);
				printf("\nAnswer:\n");
				fAnswer = Addition(fFirstNumber, fSecondNumber);
				printf("%f + %f = %f\n\n", fFirstNumber, fSecondNumber, fAnswer);
		
				break;
	
			//Subtraction	
			case 2:
		
				printf("Enter first number: ");
				scanf("%f", &fFirstNumber);
				printf("Enter the number to be subtracted from the first number: ");
				scanf("%f", &fSecondNumber);
				printf("\nAnswer:\n");
				fAnswer = Subtraction(fFirstNumber, fSecondNumber);
				printf("%f - %f = %f\n\n", fFirstNumber, fSecondNumber, fAnswer);
		
				break;
	
			//Multiplication	
			case 3:
		
				printf("Enter first number to be multiplied: ");
				scanf("%f", &fFirstNumber);
				printf("Enter second number to be multiplied: ");
				scanf("%f", &fSecondNumber);
				printf("\nAnswer:\n");
				fAnswer = Multiplication(fFirstNumber, fSecondNumber);
				printf("%f * %f = %f\n\n", fFirstNumber, fSecondNumber, fAnswer);
		
				break;
	
			//Division	
			case 4:
		
				printf("Enter first number: ");
				scanf("%f", &fFirstNumber);
				printf("Enter number to divide the first number by: ");
				scanf("%f", &fSecondNumber);
		
				//Accounting for user error
				if (fSecondNumber == 0) {
					printf("\nYou cannot divide by zero.\n\n");
				}	
		
				else{
					printf("\nAnswer:\n");
					fAnswer = Division(fFirstNumber, fSecondNumber);
					printf("%f / %f = %f\n\n", fFirstNumber, fSecondNumber, fAnswer);
				}
		
				break;
	
			//Modulus	
			case 5: 
				
				printf("Enter first number: ");
				scanf("%d", &iFirstNumber);
				printf("Enter second number: ");
				scanf("%d", &iSecondNumber);
				
				if (iSecondNumber == 0) {
					printf("\nYou cannot divide by zero. \n\n");
				}
				
				else {
				printf("\nAnswer:\n");
				iAnswer = Modulus(iFirstNumber, iSecondNumber);
				printf("%d %% %d = %d\n\n", iFirstNumber, iSecondNumber, iAnswer);
				}
		
				break;
	
			//Prime test	
			case 6:
		
				printf("Enter number to test: ");
				scanf("%d", &iFirstNumber);
				
				if (PrimeTest(iFirstNumber) == 0) {
					printf("%d is not prime.\n\n", iFirstNumber);
				}
				
				else {
					printf("%d is prime.\n\n", iFirstNumber);
				}
		
				break;
			
			//Factorial	
			case 7:
				
				printf("Enter number: ");
				scanf("%d", &iFirstNumber);
				
				if (iFirstNumber < 0) {
					printf("\nInvalid entry. The factorial of a negative number cannnot be computed.\n\n");
				}
				
				else {
					printf("\nAnswer:\n");
					iAnswer = Factorial(iFirstNumber);
					printf("%d! = %d\n\n", iFirstNumber, iAnswer);	
				}
				
				break;
			
			//Power		
			case 8:
				
				printf("Enter base: ");
				scanf("%f", &fFirstNumber);
				printf("Enter power (integers only): "); 
				scanf("%d", &iFirstNumber);
				
				if (iFirstNumber == 0) {
					printf("\nAnswer:\n");
					printf("%f^%d = 1\n\n", fFirstNumber, iFirstNumber);
				}
				else {
					printf("\nAnswer:\n");
					fAnswer = Power(fFirstNumber, iFirstNumber);
					printf("%f^%d = %f\n\n", fFirstNumber, iFirstNumber, fAnswer);
				}
				
				break;
			
			//Sequence
			case 9:
				
				printf("Enter how many numbers of the sequence to calculate: ");
				scanf("%d", &iFirstNumber);
				printf("\nAnswer:\n");
				Sequence(iFirstNumber);
				printf("\n\n");
				
				break;
	
			//Exiting the program	
			case 0:
		
				printf("\nGoodbye.");
		
				break;
		
			default:
		
				printf("\nThe value you entered is not a valid option.\n\n");
		
		}

	} while (iOperation != 0); //Displays menu until user decides to exit
	
	system("PAUSE");
	return 0;
	
}

//Function definitions	
float Addition(float fOperand1, float fOperand2) {
	return fOperand1 + fOperand2;
}

float Subtraction(float fOperand1, float fOperand2)	{
	return fOperand1 - fOperand2;
}

float Multiplication(float fOperand1, float fOperand2) {
	return fOperand1 * fOperand2;
}

float Division(float fOperand1, float fOperand2) {
	return fOperand1/fOperand2;
}

int Modulus(int iOperand1, int iOperand2) {
	return iOperand1 % iOperand2;
}

int PrimeTest(int iOperand1) {
	if (iOperand1 == 0 || iOperand1 == 1) {
		return 0;			
	}
	int iPrimeCheck = iOperand1 - 1;
	for (iPrimeCheck; iPrimeCheck > 1; iPrimeCheck-- ) {				
		if (iOperand1%iPrimeCheck == 0) {
			printf("%d * %d = %d\n", iPrimeCheck, iOperand1/iPrimeCheck, iOperand1);
						return 0;			
		}
	}
}

int Factorial(int iOperand1) {
	if (iOperand1 == 0 || iOperand1 == 1) {
		return 1;
	}
	int iFactorial = iOperand1 - 1;
	for (iFactorial; iFactorial > 0; iFactorial-- ) {
		iOperand1 *= iFactorial;
	}
	return iOperand1;
}

float Power(float fOperand1, int iOperand1) {
	float fPower = fOperand1;
	if (iOperand1 > 0) {
		for (iOperand1; iOperand1 > 1; iOperand1-- ) {
			fOperand1 = fOperand1 * fPower;
		}
	return fOperand1;
	}
	else if (iOperand1 < 0) {
		for (iOperand1; iOperand1 > 1; iOperand1-- ) {
			fOperand1 = fOperand1 * fPower;
		}
		return 1/fOperand1;
	}
}

void Sequence(int iOperand1) {
	iOperand1 -= 1;
	int x = 0;
	int y = 0;
	int iSequence[iOperand1];
	iSequence[0] = 0;
	iSequence[1] = 1;
	for (x = 2; x <= iOperand1; x++) {
  		iSequence[x] = iSequence[x-1] + iSequence[x-2];
 	}
 	for (y = 0; y <= iOperand1; y++) {
		printf("%d ", iSequence[y]);
	}
}	
