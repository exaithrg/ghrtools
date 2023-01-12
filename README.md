# Linux Tools

**IMPORTANT NOTICE: This repository is out of maintenance, please check [dotfiles](https://github.com/njughr/dotfiles) for the latest updates.**

My linux toys

## autopush

**this script will excute these commands below to save your push time**

```shell
git add .
git commit -m "push by ghr_auto_push"
git push
```

**To use this, you need to add PATH in your `.bashrc`**

```bash
PATH=$PATH:/home/geng/work/ghrtools
export PATH
```

## RegexManual

```css
abc… 	Letters
123… 	Digits
\d 	Any Digit
\D 	Any Non-digit character
. 	Any Character
\. 	Period
[abc] 	Only a, b, or c
[^abc] 	Not a, b, nor c
[a-z] 	Characters a to z
[0-9] 	Numbers 0 to 9
\w 	Any Alphanumeric character = [A-Za-z0-9_]
\W 	Any Non-alphanumeric character
{m} 	m Repetitions
{m,n} 	m to n Repetitions
* 	Zero or more repetitions
+ 	One or more repetitions
? 	Optional character
\s 	Any Whitespace
\S 	Any Non-whitespace character
^…$ 	Starts and ends
(…) 	Capture Group
(a(bc)) 	Capture Sub-group
(.*) 	Capture all
(abc|def) 	Matches abc or def
\b matches the boundary between a word and a non-word character.
\w+\b
```
### findvnc

```
| grep desktop | sed -E 's/^.*\(([a-z]+)\).*rfbport ([0-9]+) .*$/\1: \2/' | sort | awk 'BEGIN{FS=":";OFS=":"}{a[$1]=a[$1] $2}END{for(v in a)print v,a[v]}' | sort
```

# Windows Tools

## Explorer_Restarter

**Release Time: `2020.1.25`**

```c
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
    
    printf("现在时间是 %d 年 %d 月 %d 日 %d 时 %d 分 %d 秒\n",\
            tblock->tm_year+1900, tblock->tm_mon+1, tblock->tm_mday,\
            tblock->tm_hour+8, tblock->tm_min, tblock->tm_sec);
    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
 	printf("Windows资源管理器重启进程启动\n");
	printf("正在关闭Windows资源管理器...\n");
	system("taskkill /IM explorer.exe /F");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
 	printf("正在重新启动Windows资源管理器...\n");
	system("start explorer.exe");	//不可以只输入explorer，因为cmd启动一个进程后会等待该进程的结束。 
	Sleep(5000); 
	printf("Windows资源管理器重启完成\n");
	Sleep(1000); 
	return 0; 
	
} 
```

# THE END
