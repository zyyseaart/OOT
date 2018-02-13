//
//  Rational.cpp
//  OOT
//
//  Created by 赵洋艺 on 2017/11/17.
//  Copyright © 2017年 赵洋艺. All rights reserved.
//

#include "Rational.h"
Rational::Rational(int left,int right){//有参数构造方法
    l=left;
    r=right;
}
Rational Rational::operator+(const Rational& number2){//加运算
    if(number2.r==r){
        return Rational(number2.l+l,r);
    }else{
        return Rational(l*number2.r+number2.l*r,r*number2.r);
    }
}
Rational Rational::operator*(const Rational& number2){//乘运算
    return Rational(l*number2.l,r*number2.r);
}
Rational& Rational::operator=(const Rational& number2){//赋值运算
    l=number2.l;
    r=number2.r;
    return *this;
}

bool Rational::operator==(const Rational& number2){//是否相等
    return l/number2.l==r/number2.r;
}
char* Rational::value(){//返回分数的值
    int cout = 0;
    int left = l,right = r;
    char stack[10];
    int index = 0;
    
    while(left){//分子各位上的数字逐个放入栈再
    
        stack[index++] ='0'+ left % 10;
        left = left / 10;
    }
    while(index){
        v[cout++] = stack[--index];
    }
    index = 0;
    v[cout++] = '/';
    while(right){
        
        stack[index++] ='0'+ right % 10;
        
        right = right / 10;
    }
    while(index){
        v[cout++] = stack[--index];
    }
    v[cout++] = '\0';
    return v;
}
