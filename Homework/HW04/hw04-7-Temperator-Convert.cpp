/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>

int main () {

    float cs , fh ;

    printf( "Input Celsius : " );
    scanf( "%f",&cs );

    fh = (cs * 9 / 5) + 32 ;
    
    printf( "%0.0f degree Celsius = %0.1f degree Fahrenheit",cs,fh ) ;

    return 0 ;
}