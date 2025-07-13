#include <stdio.h>
#include <limits.h>   // for integer range macros
#include <float.h>    // for float/double range macros

int main()
{
    // Integer types
    int i = 10;                // Range: -2,147,483,648 to 2,147,483,647
    int j = i;
    short s = 32000;           // Range: -32,768 to 32,767
    long l = 1000000;          // Range: -2,147,483,648 to 2,147,483,647 (platform-dependent)
    long long ll = 9000000000; // Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    // Unsigned integer types
    unsigned int ui = 4000000000; // Range: 0 to 4,294,967,295
    unsigned short us = 65000;    // Range: 0 to 65,535
    unsigned long ul = 3000000000; // Range: 0 to 4,294,967,295

    // Floating-point types
    float f = 3.14f;              // Range: ±1.2E-38 to ±3.4E+38
    double d = 3.1415926535;      // Range: ±2.3E-308 to ±1.7E+308
    long double ld = 3.141592653589793238; // Extended precision

    // Character type
    char ch = 'A';                // ASCII value range: -128 to 127 (or 0 to 255 if unsigned)

    // Displaying values
    printf("int i = %d, j = %d\n", i, j);
    printf("short = %hd\n", s);
    printf("long = %ld\n", l);
    printf("long long = %lld\n", ll);

    printf("unsigned int = %u\n", ui);
    printf("unsigned short = %hu\n", us);
    printf("unsigned long = %lu\n", ul);

    printf("float = %.2f\n", f);
    printf("double = %.10lf\n", d);
    printf("long double = %.18Lf\n", ld);

    printf("char = %c\n", ch);

    return 0;
}
/*| **Data Type**   | **When to Use It**                                                          |
| --------------- | --------------------------------------------------------------------------- |
| `int`           | When you need whole numbers — like age, count, marks, score, etc. 
          
| `short`         | For small integers (like up to ±32,000) to **save memory**        
          
| `long`          | When a normal `int` isn't big enough (big populations, IDs, timestamps)   
  
| `long long`     | For **very large** numbers — like scientific data, finance, etc.(−9.2 × 10¹⁸ to +9.2 × 10¹⁸)     
       
| `unsigned int`  | When you only need **positive numbers**, like total items, size, etc.  
     
| `float`         | For **small decimal values** (e.g., 3.14, 2.75) — like temperature, GPA  
   
| `double`        | For **higher precision decimals** — physics, geometry, big calculations  
   
| `long double`   | For **ultra-precise** scientific calculations (rarely needed in basic apps) 
|
| `char`          | For storing **single characters** like `'A'`, `'B'`, `'z'` — or ASCII codes 
|
| `unsigned char` | For small **non-negative** values like raw bytes or color values            |
 */