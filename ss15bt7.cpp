#include<stdio.h>
#include<string.h>
int main(){
	char string[]="Hello my gmail is test123@gmail.com";
	int size=strlen(string);
	int countChu=0,countNum=0,countSpecial=0;
	for(int i=0;i<size;i++){
		if('a'<=string[i]&&'z'>=string[i]||'A'<=string[i]&&'Z'>=string[i]){
			countChu+=1;
		}else if('1'<=string[i]&&'9'>=string[i]){
			countNum+=1;
		}else{
			countSpecial+=1;
		}
	}
	printf("So ky tu la chu cai: %d\n",countChu);
	printf("So ly tu la chu so: %d\n",countNum);
	printf("So ky tu dac biet: %d\n",countSpecial);
}
