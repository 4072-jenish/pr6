/*
	Q.2 Write a Program to count the frequency of each character in a given string.
For example,
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 2
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
	*/

#include <stdio.h>
#include <string.h>
void main(){
    char alpha[100];
    int i,len;
    int frequency[26];
	printf("Enter any string: ");
    gets(alpha);
	len = strlen(alpha);
	for(i=0; i<26; i++){
        frequency[i] = 0;
    }
	for(i=0; i<len; i++){
        if(alpha[i]>='a' && alpha[i]<='z'){
            frequency[alpha[i] - 97]++;
        }else if(alpha[i]>='A' && alpha[i]<='Z'){
            frequency[alpha[i] - 65]++;
        }
    }
	printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++){
        if(frequency[i] != 0){
            printf("'%c' = %d\n", (i + 97), frequency[i]);
        }
    }
}
