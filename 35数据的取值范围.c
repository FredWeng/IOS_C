/*数据的取值范围*/

#include <stdio.h>

int main(){
    
    /*
     
    1位二制----最大值是1==2的1次方-1
    2位二制----最大值是3==2的2次方-1
    3位二制----最大值是7==2的3次方-1
    4位二制----最大值是15==2的4次方-1
    ....
     8位二制----最大值是255 ==2的8次方-1
    1111111=-2的7次方---01111111==2的7次方-1
     
     */
    
    //unsigned int a=-214;//不能定义超出数据类型取值范围的数.否则定义出错.
   // unsigned float a=1.0;//unsigned和signed只能修饰int型
    
    unsigned a=123;//unsigned和signed修饰int型,int可以省略
    
    //无符号的int取值范围是:包含最高位的二进制数的次方数-1
    //如果是占用4个字节那么:unsigned的取值范围是0~2的32次方减一
    
    //signed取值范围是:-2的31次方~2的31次方-1;
    //signed b=4294967295;//超出范围
    unsigned b=4294967295;//这是在范围之内
    
    printf("%u\n",b);
   // 01111111 11111111 11111111 11111111=2的31次方-1
    
    return 0;
    
}