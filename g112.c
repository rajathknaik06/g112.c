/*In a digital security system, a unique identifier is generated for each user by calculating the digital root of their employee ID. Develop a program to automate this process. 



The digital root of a number is found by repeatedly summing the digits of the number until a single-digit number is obtained. Use a recursive function to solve the program.



Function Prototype: int digitalRoot (int)

Input format :
The input consists of an integer N, representing the employee ID.

Output format :
The output prints an integer representing the digital root of the employee ID.

*/

#include <stdio.h>

int digitalRoot(int num) {
    if (num < 10) {
        return num;
    }
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return digitalRoot(sum);
}

int main() {
    int n;
    scanf("%d", &n);
    int result = digitalRoot(n);
    printf("%d", result);
    return 0;
}


//another solution

#include <iostream>

using namespace std;

int digitalRoot(int num) {
    if (num < 10) {
        return num;
    }
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return digitalRoot(sum);
}

int main() {
    int n;
    cin >> n;
    int result = digitalRoot(n);
    cout << result;
    return 0;
}
