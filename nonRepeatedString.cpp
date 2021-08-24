#include<iostream>
#include<string.h> 
using namespace std;

inline void duplicateString(string s1, string s2, int size){
 for(int i=0;i<size;i++){                  

        for(int j=i+1;j<size;j++){

            if(s1[i]==s2[j]){                  
                cout<<s1[i];                 
                break;

            }

    	}

	}
}
   
int main()  
{     
    string sentence1 = "I have a blue pen";
	string sentence2 = "I got a red pen"; 
	
	int size = sentence1.length();
	
	duplicateString(sentence1, sentence2, size);
	
    return 0;  
}  
