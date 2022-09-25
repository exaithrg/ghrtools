# Linux Tools
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

