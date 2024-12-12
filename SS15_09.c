#include <stdio.h>
#include <string.h>
void xoakitu(char str[], char character){
	int length=strlen(str);
	int j=0;
	for(int i=0;i<length;i++){
		if(str[i]!=character){
		   str[j++]=str[i]; 	
		}
	}
	str[j]='\0';
} 
int main(){
	char str[100]="Nguyen Hoang Vinh dep trai so mot the gioi";
	char character;
	printf("moi ban nhap vao ki tu ma ban muon xoa: ");
	scanf("%c",&character);
	xoakitu(str,character);
	printf("chuoi ki tu sau khi xoa la: %s",str);
	
}
