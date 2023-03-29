/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Natarajan S  ( natarajan.s@ruggedboard.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
int sum(int, int);

// Main Function
int main()
{
     int a=0,b=0,result=0;
     printf("please enter two numbers\n");
     scanf("%d %d", &a, &b);
     result = sum(a,b);
     printf("The sum is %d\n", result);

     return 0;
}

int sum(int a, int b)
{
     int result=0;
     result = a+b;
     return result;
}

// Program End
