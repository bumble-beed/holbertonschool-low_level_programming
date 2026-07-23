# Simple Calculator
Build and run a terminal based interactive calculator using C programming language

## Compile command (exact flags)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run instructions
To run 
- ./calculator

## Supported operations
| Choice | Operation | Symbol | Example         | Result |
| ------ | --------- | ------ | --------------- | ------ |
| 1      | Add       | `+`    | `6 + 4`         | `10`   |
| 2      | Subtract  | `-`    | `6 - 4`         | `2`    |
| 3      | Multiply  | `*`    | `6 * 4`         | `24`   |
| 4      | Divide    | `/`    | `6 / 4`         | `1`    |
| 0      | Quit      | —      | exits the loop  | —      |

#### Iteration 0
- Print a welcome line.
- Display a menu.
- Allow quitting with option 0.
- Ensure the program compiles and runs.

#### Iteration 1
- The menu must loop.
- If the user enters a number not in the menu, print

#### Iteration 2
- Implement addition end-to-end.

#### Iteration 3
- Implement subtraction.

#### Iteration 4
- Implement multiplication.

#### Iteration 5
- Implement divison.

#### Future Implementation
- Handle error when no , used when entering num1, num2
- Handle loop back to calculator instead of exiting when calculation is done
- Switch case instead of loop

## Known limitations (if any)
- Arithmic operators not including '%', '++', '--"
- Needs separator , when entering num1 & num2

## Calculator Versions
- V1 - Without module named 'checker_functions