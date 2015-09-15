/*指针与数组的关系*/

#include <stdio.h>

int main(){
    
    /*指针的基本用法
     
    //定义:类型 *指针名;
    int *p;
    //赋值:p=&变量名;
    int a=0;
    p=&a;
    //操作.*指针变量名==变量名.操作指针所指向空间的数据.要么取出数据*p;
    *p=10;//修改里面的值.
     
    */
    
    
    /*
     一,什么是指针数组?
     表示一个数组,用来存指针的数组就叫指针数组.数组里面的元素都是指针.
     如:int *p[3];表示定义一个可以存三个int指针的数组.
     赋值: int a1=1,a2=2,a3=3;	 int *p[3]={&a1,&a2,&a3};   
     取值: int *a=p[0];

     
    //定义一个指针数组
    int *p[3];
    int a1=1,a2=2,a3=3;
     
    //创建三个指针(int型)
    int *p1=&a1;
    int *p2=&a2;
    int *p3=&a3;
     
    //给数组赋值
    p[0]=p1;
    p[1]=p2;
    p[2]=p3;
     
    //取值
    int *ptemp=p[0];
    printf("p1=%p,ptemp=%p\n",p1,ptemp);
     
    */
    
    /*
     
     二.什么是数组的指针?
     表示一个指针,而这个指针类型是数组.
     如:int (*p)[3];表示这是一个含有三个元素的int数组的指针.
     赋值:int arr[3]={1,2,3}; int (*p)[3]=&arr;
    
    //定义:固定写法.一定要加括号,不然变量p先与[]结合.成数组了.
    int (*p)[3];
     
    //赋值
    int arr[3]={2,3,4};
    p=&arr;
    //arr是表示一个数组,里面包含第一个元素的地址.arr=&arr[0]
    printf("数组的地址:&arr=%p,数组第一个元素的地址:&arr[0]=%p,arr=%p\n",&arr,&arr[0],arr);
    int *p1=arr;
     
    //取值操作
    printf("%d\n",(*p)[2]);//\*pd等效于arr;
    (*p)[2]=8;
    printf("%d\n",(*p)[2]);//arr[0]
     */
    
    
    /*
     
     三.什么是数组元素的指针?
     表示一个指针,而这个指针存的是数组一个元素的地址.
     如:int arr[1]={1}; int *p=&arr[0];

     */
    int arr[1]={1};
    //定义并赋值
    int *p=&arr[0];
    //操作数据
    printf("*p=%d,arr[0]=%d\n",*p,arr[0]);
    
    return 0;
    
}








