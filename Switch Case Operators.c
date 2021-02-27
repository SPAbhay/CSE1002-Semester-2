#include<stdio.h>

int main()
{
	int n;
	printf("OPERATORS IN C\n");
	printf("1. Arithmetic Operators\n");
	printf("2. Relational Operators\n");
	printf("3. Increment or Decrement Operator\n");
	printf("4. Logical Operators\n");
	printf("5. Bitwise Operators\n");
	printf("6. Assignment Operators\n");
	printf("7. Other Operators\n");
	printf("Enter the respective number to perform that type of operation: \n");
	scanf("%d",&n);
	printf("\n\n");
	switch (n)
	{
	case 1:
		float x,y;
		int n1;
		printf("ARITHMETIC OPERATORS\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modlulus\n");
		printf("Enter the respective number to perform that type of operation: \n");
		scanf("%d",&n1);
		printf("Enter 2 numbers: \n");
		scanf("%f %f",&x,&y);
		switch(n1)
		{
			case 1:
			printf("ADDITION\n");
			printf("%.2f + %.2f = %.2f\n",x,y,x+y);
			break;

			case 2:
			printf("SUBTRACTION\n");
			printf("%.2f - %.2f = %.2f\n",x,y,x-y);
			break;

			case 3:
			printf("MULTIPLICATION\n");
			printf("%.2f * %.2f = %.2f\n",x,y,x*y);
			break;

			case 4:
			printf("Division\n");
			printf("%.2f / %.2f = %.2f\n",x,y,x/y);
			break;

			case 5:
			printf("Modulus\n");
			printf("%d",(int) x);
			printf(" %% ");
			printf("%d = %d",(int) y,((int) x)%((int) y));
			break;

			default:
			printf("I do not understand");
		}
		break;
	case 2:
		printf("RELATIONAL OPERATORS\n");
		printf("Enter 2 numbers: \n");
		scanf("%f %f",&x,&y);
		if (x>y)
		{
			printf("%.2f > %.2f",x,y);
		}		
		else if(x<y)
		{
			printf("%.2f < %.2f",x,y);
		}
		else
		{
			printf("%.2f == %.2f",x,y);
		}
		break;

	case 3:
		int n3,z;
		printf("INCREMENT OR DECREMENT OPERATOR\n");
		printf("1. Increment Operator\n");
		printf("2. Decrement Operator\n");
		printf("Enter the respective number to perform that type of operation: \n");
		scanf("%d",&n3);
		switch (n3)
		{
		case 1:
			printf("Increment Operator\n");
			printf("Enter a number to be increased by 1\n");
			scanf("%d",&z);
			printf("%d++ = ",z++);
			printf("%d",z);
			break;
		
		case 2:
			printf("Decrement Operator\n");
			printf("Enter a number to be decreased by 1\n");
			scanf("%d",&z);
			printf("%d-- = ",z--);
			printf("%d",z);
			break;
		
		default:
			break;
		}
		break;

	
	case 4:
		printf("LOGICAL OPERATORS\n");
		bool a,b;
		int n4;
		printf("1. And (&&)\n");
		printf("2. Or (||)\n");
		printf("Enter the respective number to perform that type of operation: \n");
		scanf("%d",&n4);
		printf("a and b are two booleans\n");
		printf("Enter 1 or 0 for true and false respectively\n");
		scanf("%d %d",&a,&b);
		switch (n4)
		{
		case 1:
			if (a&&b)
			{
				printf("true");
			}
			else
			{
				printf("false");
			}
			break;
		case 2:
			if (a||b)
			{
				printf("true");
			}
			else
			{
				printf("false");
			}
			break;
		
		default:
			printf("Sorry, I do not understand");
			break;
		}
		break;
	
	case 5:
		int n5;
		int c,d;
		printf("BITWISE OPERATORS\n");
		printf("1. Binary And (&)\n");
		printf("2. Binary Or (|)\n");
		printf("3. Binary Xor (^)\n");
		printf("4. Binary One's Compliment (~)\n");
		printf("5. Left Shift Operator\n");
		printf("6. Right Shift Operator\n");
		printf("Enter the respective number to perform that type of operation: \n");
		scanf("%d",&n5);
		switch(n5)
		{
			case 1:
			printf("Binary And (&)\n");
			printf("Enter 2 numbers: \n");
			scanf("%d %d",&c,&d);
			printf("%d & %d = %d",c,d,c&d);
			break;			

			case 2:
			printf("Binary Or (|)");
			printf("Enter 2 numbers: \n");
			scanf("%d %d",&c,&d);
			printf("%d | %d = %d",c,d,c|d);
			break;			

			case 3:
			printf("Binary Xor (^)\n");
			printf("Enter 2 numbers: \n");
			scanf("%d %d",&c,&d);
			printf("%d ^ %d = %d",c,d,c^d);
			break;			

			case 4:
			printf("Binary One's Compliment\n");
			printf("Enter a numbers: \n");
			scanf("%d",&c);
			printf("~%d = %d",c,~c);
			break;			

			case 5:
			printf("Left Shift Operator");
			printf("Enter a number\n");
			scanf("%d",&c);
			printf("%d << 1 = %d",c,c<<1);
			break;

			case 6:
			printf("Right Shift Operator");
			printf("Enter a number\n");
			scanf("%d",&c);
			printf("%d >> 1 = %d",c,c>>1);

		}
		break;
	
	
	case 6:
		printf("ASSIGNMENT OPERATORS\n");
		printf("The assignment operators are: \n");
		printf("=\n+=\n-=\n*=\n/=\n");
		break;
	
	case 7:
		printf("OTHER OPERATORS\n");
		printf("Conditional Operators\n");
		int f,g;
		f=10,g=5;
		printf("f = 10\ng = 5\n");
		printf("(f>g)?f:g\n");
		printf("%d is greater",(f>g)?f:g);
		break;

	default:
		printf("Sorry, I do not understand\n");
		break;
	}
}



