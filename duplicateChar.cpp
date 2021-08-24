#include<iostream>
#include<string.h>
using namespace std;

void countFrequency(const char *ch){
	int length = strlen(ch);
	//iterate loop for character 'a' to 'z'
	for(char current = 'a'; current <= 'z'; current++){
		int frequency = 0;
		//traversing for each character of string
		for(int i = 0; i < length; i++){
			if(ch[i] == current)
				frequency++;
		}
		cout<<"The duplicate char from string is "<<current<<" for "<<frequency<<" Times "<<endl;
	}
}

int main(){
	char ch[] = "ababacd";
	countFrequency(ch);
	return 0;
}

