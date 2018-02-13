//
//  Rational.h
//  OOT
//
//  Created by 赵洋艺 on 2017/11/17.
//  Copyright © 2017年 赵洋艺. All rights reserved.
//



#ifndef Rational_h
#define Rational_h

class Rational{
public:
    Rational(){//无参数构造方法
        l = 0;r = 0;
    }
    Rational(int left,int right);//有参数构造方法
    Rational operator+(const Rational&);//加运算
    Rational operator*(const Rational&);//乘运算
    Rational& operator=(const Rational&);//赋值运算
    bool operator==(const Rational&);//相等
    char* value();//得到值
private:
    char v[10];
    int l;//分子
    int r;//分母
};

#endif /* Rational_h */
