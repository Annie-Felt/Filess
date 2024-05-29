#include <stdio.h>

int main()
{
    int decimal;     
    printf("Enter decimal number:"); 
    scanf("%d", &decimal);

	char reversedDigits[100];
	int i = 0;
	
	while(decimal > 0) {
		
		int remain = decimal % 16;
		
		if(remain < 10)
			reversedDigits[i] = '0' + remain;
		else
			reversedDigits[i] = 'A' + (remain - 10);
		
		decimal = decimal / 16;
		i++;
	}
	
	printf("Hexadecimal number: ");
	while(i--) {
		
		printf("%c", reversedDigits[i]);
	}
	
    return 0;
}