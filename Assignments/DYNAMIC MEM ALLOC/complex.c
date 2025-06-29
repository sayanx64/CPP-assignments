#include <stdio.h>
#include<stdlib.h>
typedef struct {
    int real;
    int imaginary;
} Complex;

Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    return result;
}

Complex multiply(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    Complex c1, c2, sum, difference, product;

    // Input for the first complex number
    printf("Enter the first Complex:\n");
    printf("Real Part: ");
    scanf("%d", &c1.real);
    printf("Imaginary Part: ");
    scanf("%d", &c1.imaginary);
 
    printf("\nEnter the second Complex:\n");
    printf("Real Part: ");
    scanf("%d", &c2.real);
    printf("Imaginary Part: ");
    scanf("%d", &c2.imaginary);

    
    sum = add(c1, c2);
    difference = subtract(c1, c2);
    product = multiply(c1, c2);

    
    printf("\nFirst Complex No: %d + %di\n", c1.real, c1.imaginary);
    printf("Second Complex No: %d + %di\n", c2.real, c2.imaginary);
    printf("Sum: %d + %di\n", sum.real, sum.imaginary);
    printf("Difference: %d + %di\n", difference.real, difference.imaginary);
    printf("Product: %d + %di\n", product.real, product.imaginary);

    return 0;
}
