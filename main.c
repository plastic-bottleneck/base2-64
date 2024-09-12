#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX_BASE 64
const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";

int char_to_val(char c) {
    	if (isdigit(c)) return c - '0';
    	else if (isupper(c)) return c - 'A' + 10;
    	else if (islower(c)) return c - 'a' + 36;
	else if (c == '+') return 62;
	else if (c == '/') return 63;
    	return -1;
}

unsigned long long to_base_10(const char *num_str, int base) {
    	unsigned long long result = 0;
    	int len = strlen(num_str);
    	for (int i = 0; i < len; i++) {
        result = result * base + char_to_val(num_str[i]);
    	} return result;
}

void from_base_10(unsigned long long num, int base, char *output) {
    	int index = 0;
    	char temp[65];

	if (num == 0) { output[0] = '0'; output[1] = '\0'; return; } 
    	while (num > 0) { temp[index++] = charset[num % base]; num /= base; } 
	for (int i = 0; i < index; i++) { output[i] = temp[index - i - 1]; }

	output[index] = '\0';  
}

int main() {
    	char input[65]; int input_base;

    	printf("Input: "); scanf("%64s", input); printf("Base between 2 and 64: "); scanf("%d", &input_base);

    	if (input_base < 2 || input_base > 64) {
        	printf("[X]\n"); return 1;
    	}
    
    	unsigned long long base_10_value = to_base_10(input, input_base);
    	char output[65];
    	for (int base = 2; base <= MAX_BASE; base++) {
        	from_base_10(base_10_value, base, output);
        	printf("Base %d: %s\n", base, output);
    	} return 0;
}
