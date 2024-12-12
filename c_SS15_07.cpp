#include<stdio.h>
#include<string.h>
int main(){
	char text[]="Nguyen Hoang Vinh 16\05\2006";
	int count_text;
	int count_num;
	int count_char;
	int length=strlen(text);
	for(int i=0;i<length;i++){
		if(text[i]>='a'&&text[i]<='z'||text[i]>='A'&&text[i]<='Z'){
			count_text++;
		}
		else if(text[i]>='0'&&text[i]<='9'){
			count_num++;
		}
		else{
			count_char++;
		}
		
	}
	printf("so chu cai trong mang la: %d\n",count_text);
	printf("so chu so trong mang la: %d\n",count_num);
	printf("so ki tu dac biet trong mang la: %d",count_char);
	return 0;
}
