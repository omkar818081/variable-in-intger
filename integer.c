#include <stdio.h>

int main(void)
{
	//variable definition 
	int i, j;
	char ch_01, ch_02;

	int a, result_int;
	float f, result_float;

	int i_explicit;
	float f_explicit;

	//code
	printf("\n\n");

	//INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'char' AND 'int' TYPES....
	i = 70;
	ch_01 = i;
	printf("I = %d\n", i);
	printf("Charater 1 (after ch_01 = i) = %c\n\n", ch_01);

	ch_02 = 'Q';
	j = ch_02;
	printf("Charater 2 %c\n", ch_02);
	printf(" (j after j = ch_02) %d\n\n", j);

	//IMPLICIT CONVERSION OF 'int' TO 'float'...
	a = 5;
	f = 7.8f;
	result_float = a + f;
	printf("Integer a %d And Floating-Point Number %f Added Gives Floating-Point Sum = %f\n\n", a, f, result_float);

	result_int = a + f;
	printf("Integer a = %d And Floating-Point Number %f Added Gives Integer Sum %d\n\n", a, f, result_int);

	//EXPLICIT TYPE-CASTING USING CAST OPERATOR...
	f_explicit = 30.121995;
	i_explicit = (int)f_explicit;

	printf("Floating Point Number Which Will Be Type Casted Explicitly %f\n", f_explicit);
	printf("Resultant Integer After Explicit Type Casting of %f = %d\n\n", f_explicit, i_explicit);

	return(0);
}
==================================================================================================================================================================================================================================================
  #include <stdio.h>

int main(void)
{
	//variable definition
	int a, b;
	int p, q;
	char ch_result_01, ch_result_02;
	int i_result_01, i_result_02;

	//code
	printf("\n\n");

	a = 7;
	b = 5;
	ch_result_01 = (a > b) ? 'A' : 'B';
	i_result_01 = (a > b) ? a : b;
	printf("Ternary Operator Answer 1 ----- %c and %d.\n\n", ch_result_01, i_result_01);

	p = 30;
	q = 30;
	ch_result_02=(p != q) ? 'p' : 'Q';
	i_result_02=(p != q) ? p : q;
	printf("Ternary Operator Answer 2 ----- %c and %d.\n\n", ch_result_02, i_result_02);

	printf("\n\n");
	return(0);
}
====================================================================================================================================
  #include <stdio.h> 
int main(void)
{
	//variable definition
	int a, b, p;

	//code
	a = 9;
	b = 30;
	p = 30;

	printf("\n\n");
	if (a < b)
	{
		printf("A Is Less Than B !!!\n\n");
	}

	if (b != p)
	{
		printf("B IS NOT Equal To P !!!\n\n");
	}
	printf("Both Comparisons Have Been Done !!!\n\n");

	return(0);
}
=================================================================================================================================================
  #include <stdio.h> 
int main(void)
{
	//variable definition
	int age;

	//code
	printf("\n\n");
	printf("Enter Age: ");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("You Are Eligible For Voting !!!\n\n");
	}
	return(0);
}
=======================================================================================================================================================
  #include <stdio.h> 
int main(void)
{
	//variable definition
	int num;

	//code
	printf("\n\n");

	printf("Enter Value For 'num': ");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("Num = %d Is Less Than 0 (NEGATIVE). \n\n", num);
	}
	if ((num > 0) && (num <= 100))
	{
		printf("Num = %d Is Between 0 And 100. \n\n", num);
	}

	if ((num > 100) && (num <= 200))
	{
		printf("Num = %d Is Between 100 And 200.\n\n", num);
	}
	if ((num > 200) && (num <= 300))
	{
		printf("Num = %d Is Is Between 200 And 300.\n\n", num);
	}

	if ((num > 300) && (num <= 400))
	{
		printf("Num = %d Is Between 300 And 400.\n\n", num);
	}

	if ((num > 400) && (num <= 500))
	{
		printf("Num = %d Is Between 400 And see. \n\n", num);
	}

	if (num > 500)
	{
		printf("Num = %d Is Greater Than 500. \n\n", num);
	}
	return(0);
}
===============================================================================================================================
  #include <stdio.h> 
int main(void)
{
	//variable definition
	int age;

	//code
	printf("\n\n");
	printf("Enter Age: ");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("You Are Eligible For Voting !!!\n\n");
	}
		printf("You Are NOT Eligible For Voting !!!\n\n");
	return(0);
}
================================================================================================================
  #include <stdio.h> 
int main(void)
{
	//variable definition
	int a;

	//code
	printf("\n\n");

	a = 5;
	if(a) // Non-zero Positive Value
	{
		printf("if-block 1: 'A' Exists And Has Value = %d !!!\n\n", a);
	}

	a = -5;
	if(a) // Non-zero Negative Value
	{
		printf("if-block 2: 'A' Exists And Has Value = %d !!!\n\n", a);
	}

	a = 0;
	if(a) // Zero Value
	{
		printf("if-block 3: 'A' Exists And Has Value = %d !!!\n\n", a);
	}
	printf("All Three if-statements Are Done !!!\n\n");

	return(0);
}
========================================================================================================================================
  
#include <stdio.h>
int main(void)
{
	//variable definition
	int a, b, p;
	
	//code
	a = 9;
	b = 30;
	p = 30;

	//*** FIRST if-else PAIR *** 
	printf("\n\n");
	if (a < b)
	{
		printf("Entering First if-block...\n\n");
		printf("A Is Less Than B !!!\n\n");
	}
	else
	{
		printf("Entering First else-block...\n\n");
		printf("A IS NOT Less Than B !!!\n\n");
	}
	printf("First if-else Pair Done !!!\n\n");

	// *** SECOND if-else PAIR ***
	printf("\n\n");
	if (b != p)
	{
		printf("Entering Second if-block...\n\n");
		printf("B IS NOT Equal To P !!!\n\n");
	}
	else
	{
		printf("Entering Second else-block...\n\n");
		printf("B Is Equal To P !!!\n\n");
	}
	printf("Second if-else Pair Done !!!\n\n");

	return(0);
}
==========================================================================================================================================
  #include<stdio.h> 
int main(void)
{
	//variable definition
	int age;

	//code
	printf("\n\n");
	printf("Enter Age: ");
	scanf("%d", &age);
	printf("\n\n");
	if (age >= 18)
	{
		printf("Entering if-block...\n\n");
		printf("You Are Eligible For Voting !!!\n\n");
	}
	else
	{
		printf("Entering else-block...\n\n");
		printf("You Are NOT Eligible For Voting !!!\n\n");
	}
	printf("Bye!!!\n\n");
	return(0);
}
==========================================================================================================================
  #include <stdio.h> 
int main(void)
{
	//variable definition
	int num;

	//code
	printf("\n\n");

	printf("Enter Value For 'num'");
	scanf("%d", &num);

	if (num < 0) // 'if ' -01
	{
		printf("Num = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num);
	}
	else //'else' - 01
	{
		if ((num > 0) && (num < 100)) // 'if''- 02
		{
			printf("Num = %d Is Between 0 And 100 !!!\n\n", num);
		}
		else // 'else' - 02
		{
			if ((num > 100) && (num <= 200)) //  'if '- 03
			{
				printf("Num = %d Is Between 100 And 200 !!!\n\n", num);
			}

			else // 'else' - 03
			{
				if ((num > 200) && (num <= 300)) // 'if '- 04
				{
					printf("Num = %d Is Between 200 And 300 !!!\n\n", num);
				}
				else // 'else' - 04
				{
					if ((num > 300) && (num <= 400)) // 'if '- 05
					{
						printf("Num = %d Is Between 300 And 400 !!!\n\n", num);
					}
					else // 'else' - 05
					{
						if ((num > 400) && (num <= 500)) // 'if '- 06
						{
							printf("Num = %d Is Between 400 And 500 !!!\n\n", num);
						}
						else // 'else' - 06
						{
							printf("Num = %d Is Greater Than 500 !!!\n\n", num);
						}// closing brace of 'else' - 06
					} // closing brace of 'else' - 05 
				}// closing brace of 'else' - 04
			} // closing brace of 'else' - 03
		} // closing brace of 'else' - 02
	} // closing brace of 'else' - 01

	return(0);
}
==============================================================================..>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>========================================
  #include <stdio.h>
int main(void)
{
	//variable definition
	int num;

	//code
	printf("\n\n");

	printf("Enter Value For 'num': ");
	scanf("%d", &num);

	// IF ELSE IF LADDER BEGINS FROM HERE... 
	if (num < 0)
		printf("Num = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num);

	else if ((num > 0) && (num <= 100))
		printf("Num = %d Is Between 0 And 100 !!!\n\n", num);

	else if ((num > 100) && (num <= 200))
		printf("Num = %d Is Between 100 And 200 !!!\n\n", num);

	else if ((num > 200) && (num <= 300))
		printf("Num = %d Is Between 200 And 300 !!!\n\n", num);

	else if ((num > 300) && (num <= 400))
		printf("Num = %d Is Between 300 And 400 !!!\n\n", num);

	else if ((num > 400) && (num <= 500))
		printf("Num = %d Is Between 400 And 500 !!!\n\n", num);

	else if (num > 500)
		printf("Num = %d Is Greater Than 500 !!!\n\n", num);

	// *** NO TERMINATING 'ELSE' IN THIS LADDER !!! ***

	return(0);
}
=====================================================================================================================
  #include <stdio.h>
int main(void)
{
	//variable definition
	int num;

	//code
	printf("\n\n");

	printf("Enter Value For 'num': ");
	scanf("%d", &num);

	// IF ELSE IF LADDER BEGINS FROM HERE... 
	if (num < 0)
		printf("Num = %d Is Less Than 0  (NEGATIVE) !!!\n\n", num);

	else if ((num > 0) && (num <= 100))
		printf("Num = %d Is Between 0 And 100 !!!\n\n", num);

	else if ((num > 100) && (num <= 200))
		printf("Num = %d Is Between 100 And 200 !!!\n\n", num);

	else if ((num > 200) && (num <= 300))
		printf("Num = %d Is Between 200 And 300 !!!\n\n", num);

	else if ((num > 300) && (num <= 400))
		printf("Num = %d Is Between 300 And 400 !!!\n\n", num);

	else if ((num > 400) && (num <= 500))
		printf("Num = %d Is Between 400 And 500 !!!\n\n", num);

	else if (num > 500)
		printf("Num = %d Is Greater Than 500 !!!\n\n", num);

	else // *** THIS IS THE TERMINATING ELSE' OF THIS "IF - ELSE IF - ELSE' LADDER !!! ***
		printf("Invalid Value Entered !!!\n\n");

	return(0);
}
============================================================================================================================
  #include <stdio.h>
int main(void)
{
	//variable definition
	int num_month;

	//code
	printf("\n\n");

	printf("Enter Number Of Month (1 to 12):");
	scanf("%d", &num_month);

	printf("\n\n");

	switch (num_month)
	{
	case 1: //like 'if'
		printf("Month Number %d Is JANUARY !!!\n\n", num_month);
		break;

	case 2: //like 'else if'
		printf("Month Number %d Is FEBRUARY !!!\n\n", num_month);
		break;

	case 3: //like 'else if'
		printf("Month Number %d Is MARCH!!!\n\n", num_month);
		break;

	case 4: //like 'else if'
		printf("Month Number %d Is APRIL !!!\n\n", num_month);
		break;

	case 5: //like 'else if'
		printf("Month Number %d Is MAY !!!\n\n", num_month);
		break;

	case 6://like 'else if
		printf("Month Number %d Is JUNE !!!\n\n", num_month);
		break;

	case 7://like 'else if'
		printf("Month Number %d Is JULY !!!\n\n", num_month);
		break;

	case 8://like 'else if'
		printf("Month Number %d Is AUGUST !!!\n\n", num_month);
		break;

	case 9: //like 'else if'
		printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month);
		break;

	case 10: //like 'else if'
		printf("Month Number %d Is OCTOBER !!!\n\n", num_month);
		break;

	case 11: //like 'else if'
		printf("Month Number %d Is NOVEMBER !!!\n\n", num_month);
		break;

	case 12://like 'else if"
		printf("Month Number %d Is DECEMBER !!!\n\n", num_month);
		break;

	default: //like ending OPTIONAL 'else'...just like terminating 'else' is optional in if-else if-else ladder, so is the 'default' case optional in switch-case

		printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", num_month);
		break;
	}
	printf("Switch Case Block Complete !!!\n");

	return(0);
}
====================================================================================================================
  #include <stdio.h>
int main(void)
{
	//variable definition
	int num_month;

	//code
	printf("\n\n");

	printf("Enter Number Of Month (1 to 12): ");
	scanf("%d", &num_month);

	printf("\n\n");

	// IF-ELSE-IF LADDER BEGINS FROM HERE...
	if (num_month == 1) //like 'case 1'
		printf("Month Number %d Is JANUARY !!!\n\n", num_month);

	else if (num_month == 2) //like 'case 2'
		printf("Month Number %d Is FEBRUARY !!!\n\n", num_month);

	else if (num_month == 3) //like 'case 3'
		printf("Month Number %d Is MARCH!!!\n\n", num_month);

	else if (num_month == 4) //like 'case 4'
		printf("Month Number %d Is APRIL !!!\n\n", num_month);

	else if (num_month == 5) //like 'case 5'
		printf("Month Number %d IS MAY !!!\n\n", num_month);

	else if (num_month == 6) //like 'case 6'
		printf("Month Number %d Is JUNE !!!\n\n", num_month);

	else if (num_month == 7) //like 'case 7'
		printf("Month Number %d Is JULY !!!\n\n", num_month);

	else if (num_month == 8) //like 'case 8'
		printf("Month Number %d Is AUGUST !!!\n\n", num_month);

	else if (num_month == 9) //like 'case 9'
		printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month);

	else if (num_month == 10) //like 'case 10'
		printf("Month Number %d Is OCTOBER !!!\n\n", num_month);

	else if (num_month == 11) //like 'case 11'
		printf("Month Number %d Is NOVEMBER !!!\n\n", num_month);

	else if (num_month == 12) //like 'case 12'
		printf("Month Number %d Is DECEMBER !!!\n\n", num_month);

	else //like 'default'...just like 'default' is optional in switch-case, so is
		//'else' in the if - else if - else ladder...
		printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", num_month);

	printf("If - Else If-Else Ladder Complete !!!\n");
    
	return(0);
}
======================================================================================================================
  #include<stdio.h> //for printf() 
#include<ctype.h>

// ASCII Values for "A" to 2" 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65 
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII Values For "a" to "2" 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97 
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

// ASCII Values For "0" to "9" 48 to 57 
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
//variable definition
char ch;
int ch_value;

//code
printf("\n\n");

printf("Enter Character: ");
ch = getc(stdin);

printf("\n\n");

switch(ch)
{
	// FALL THROUGH CONDITION...
case 'A':
case 'a':

case 'E':
case 'e':

case 'I':
case 'i':

case 'O':
case 'o':

case 'U':
case 'u':

	printf("Character \'%c\' Entered By You, IS A VOMEL CHARACTER From The English Alphabet !!!\n\n",ch);
		break;
default:
	ch_value = (int)ch;

	//If The Character Has ASCII Value Between 65 AND 90 OR Between 97 AND 122, It Is Still A Letter Of The Alphabet, But It Is A 'CONSONANT', and NOT a 'VOWEL'...
	
    if((ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
	{
		printf("Character \'%c\' Entered By You, IS A CONSONANT CHARACTER From The English Alphabet !!!\n\n", ch);
	}
	else if (ch_value >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DIGIT_ENDING)
	{
		printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER !!!\n \n", ch);
	}
	else
	{
		printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n \n", ch);
	}
	break;
}
printf("Switch Case Block Complete !!!\n");

return(0);
}

==========================================================================================================================
  #include <stdio.h> //for printf() 

// ASCII Values For 'A' to 'Z' => 65 to 90 
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65 
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

// ASCII Values For 'a' to 'z' => 97 to 122 
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97 
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

// ASCII Values For '0' to '9' => 48 to 57 
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable definition
	char ch;
	int ch_value;

	//code
	printf("\n\n");

	printf("Enter Character: ");
	ch = getc(stdin);

	printf("\n\n");

	if ((ch == 'A' || ch == 'a') || (ch == 'E' || ch == 'e') || (ch == 'I' || ch == 'i') || (ch == 'O' || ch == 'o') || (ch == 'U' || ch == 'u'))

	{
		printf("Character \'%c\' Entered By You, Is A VOWEL CHARACTER From The English Alphabet !!!\n\n", ch);
	}
	else
	{
		ch_value = (int)ch;

		//If The Character Has ASCII Value Between 65 AND 90 OR Between 97 AND 122, It Is Still A Letter Of The Alphabet, But It Is A 'CONSONANT', and NOT a 'VOWEL...

		if ((ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, IS A CONSONANT CHARACTER From The English Alphabet !!!\n\n", ch);
		}
		else if (ch_value >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \"%c\' Entered By You, IS A DIGIT CHARACTER !!!\n \n", ch);
		}
		else
		{
			printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n\n", ch);
		}
	}
	return(0);
}
======================================================================================================================ext============================================================================================================================
