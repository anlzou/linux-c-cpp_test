#include<stdio.h>

void change(int arr[]){
  arr[0] = 100;
  printf("%d\n",arr[2]);
}

int main(){
  int arr[3] = {1,2,3};
  change(arr);
  printf("%d\n",arr[0]);
  return 0;
}

/*
一般来数参数的传递是值传递，也就是说实参传给形参，形参发生改变时实参并不会改变（单向）,但是C语言中数组在传递的时候是地址传递，只要形参发生了变化，实参也会发生变化（双向）。

与 c 语言不同，go 的数组作为函数参数传递的是副本，函数内修改数组并不改变原来的数组。
*/
