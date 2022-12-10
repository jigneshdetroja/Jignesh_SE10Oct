#include<stdio.h>
void main()
{
	char c;
	
	printf("Enter a character to check if its a vowel or not\n\n");
	printf("%d",&c);
	
	scanf("%c",&c);
	printf("\n");
	
	switch(c)
	{
		case 'a':
			printf("This is a vowel\n");
			break;
				case 'e':
					printf("This is a vowel\n");
					break;
						case 'i':
							printf("This is a vowel\n");
							break;
								case 'o':
									printf("This is a vowel\n");
									break;
										case 'u':
											printf("This is a vowel\n");
											break;
												default:
													printf("This is a consonant\n");
													break;
	}
}