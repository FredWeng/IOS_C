
/*
 
 需求:注释的用法.
 1.功能一:对代码解释说明
 2.功能二:试调代码
 特点:
 1.不参加编译.
 2.只能在一句完整的代码后面.不能在前面,或插在中间.
 3.多行注释可以嵌套单行,但是不能嵌套多行.
 
*/
 
//这个申明个头文件,表示在这个应用里面可以用printf这个函数.

#include <stdio.h>

int main(){
    
   printf("注释\n");
    //printf("这个有问题的代码\n");
    return 0;

}
