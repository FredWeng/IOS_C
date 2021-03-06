/*auto 与 const 关键字*/
#include <stdio.h>
/*
 auto  数据类型 变量名;(默认所有局部变量都是被这个修饰,可以省略)
 注意: 1. static修饰的除外.  2.全局变量除外;

 
 */

int b;

int main(){
    
    /*
     auto: 用于定义一个能自动回收的临时变量.
     这个变量在作用域内用完后会自动销毁.
     实际上,所以的局部变量前面默认加了auto,所以平时可以省略不写
     
    auto int a=0;
    二者等效:
    int a=0;
     
    */
    
    //表示这个变量会跟随程序的生命生期一直保留,函数执行完后,不会销毁.
    static int a=0;
    
    
    int c=0;
    
    //定义的常量,可以复用.因为有名字.但是,这个值不可以改变.
    const int d=5;
    //d=6;
    
    //常量一开始不赋值,也不能再赋值.里面存的是一开始的随机值,不能改变.
    const int f;
    printf("%d\n",f);
    //f=9;
     printf("%d,%d\n",f,d);
    
    
    
    return 0;
}
