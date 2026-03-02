0. Setup + Skeleton Program
A welcome message show "Welcome to my calculator"
The menu show him in one column:
1) Add
2) Soustract
3) Multiply
4) Divide
0) Quit
A this step of this program the menu is displayed
End we can quit when 0 is chosen.
1. Menu Loop + Choice Validation
The program add a fonction loop alone. And a message for invalid ask
2. Addition
Addition are like O to exit. It is very visual on a chart.
0 point to exit
1 point to add
3. Subtraction
2 point to substract
4. Multiplication
3 point to multiply
5. Division
4 point to divide

compile command (exact flags)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
betty calculator.c
betty-doc calculator.c

run instructions
./calculator

supported operations
Choose between 1 and 4 for the menu. 0 to exit
When press 1 you switch in add menu. Enter two numbers and see the sum operation.
When press 2 you switch in sub menu. Enter two numbers and see the sustract operation.
When press 3 you switch in multiply menu. Enter two numbers and see the multiply operation.
When press 4 you switch in divide. Enter two numbers and the the divide operation. 

numeric behavior (integer vs decimal)

known limitations (if any)
Now last exercice is not done so you can't press for other than integer. If you do it is an infinite loop.