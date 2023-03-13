void main()
{
	
	int a,b,ch;
	char choice;
	printf("\nEnter two numbers: ");
	scanf("%d%d" ,&a,&b);
	printf("\nA = %d,  B = %d" ,a,b);
	printf("\n\nPress 1. Addition\nPress 2. Subtraction\nPress 3. Multiplication\nPress 4. Division");
	printf("\n\nEnter your choice ?");
	scanf("%d" ,&ch);
	
	switch(ch)
	{
		case 1: printf("\nAddition : %d" ,(a+b));
		      break;
		      
		case 2: printf("\nSubtraction : %d" ,(a-b));
		      break;
		      
		case 3: printf("\nMultiplication : %d" ,(a*b));
		      break;
		      
		case 4: printf("\nDivision : %.2f" ,((float)a/b));
		      break;
		      
		default:printf("\nInvalid Choice");
			  break;
			  		  
	}
	
	
	
	
	
}