## 沙雕语言 辛语言

这是一门 C 语言的复刻,诞生于2021年6月9日.

第一个程序

> 今有田广十五步，从十六步。问为田几何？

```
#include <stdio.h>
#include "/home/litchi/xinlang/include/xinkey.h"
#include "/home/litchi/xinlang/include/xinstdio.h"
#include "/home/litchi/xinlang/include/xinsymbol.h"

#define 田 field
#define 广 width
#define 从 length

筹 天元(隐) {
	筹 广 为 15;
	筹 从 为 16;
	筹 田 为 广 乘以 从;
	言("田方 %d 平方步.\n", 田);
	回 0;
}
```
