#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h> 

// Encoding: GB2312

int main(){
	
	int sec_now = 0;
 
    time_t timer;
    struct tm *tblock;
    time(&timer);
    tblock = gmtime(&timer);
    
    printf("����ʱ���� %d �� %d �� %d �� %d ʱ %d �� %d ��\n",\
            tblock->tm_year+1900, tblock->tm_mon+1, tblock->tm_mday,\
            tblock->tm_hour+8, tblock->tm_min, tblock->tm_sec);
    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
 	printf("Windows��Դ������������������\n");
	printf("���ڹر�Windows��Դ������...\n");
	system("taskkill /IM explorer.exe /F");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
 	printf("������������Windows��Դ������...\n");
	system("start explorer.exe");	//������ֻ����explorer����Ϊcmd����һ�����̺��ȴ��ý��̵Ľ����� 
	Sleep(5000); 
	printf("Windows��Դ�������������\n");
	Sleep(1000); 
	return 0; 
	
} 
