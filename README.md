## 沙雕语言 辛语言

这是一门 C 语言的复刻,诞生于2021年6月9日.

- 程序1

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
- 程序2:巴贝奇难题

> Charles Babbage, looking ahead to the sorts of problems his 
> Analytical Engine would be able to solve, gave this example:
> What is the smallest positive integer whose square ends in the digits 269,696?
> — Babbage, letter to Lord Bowden, 1837; see Hollingdale and Tootill, 
> Electronic Computers, second edition, 1970, p. 125.

> He thought the answer might be 99,736, whose square is 9,947,269,696; 
> but he couldn't be certain.

```
#include <stdio.h>
#include <limits.h>
#include "/home/litchi/xinlang/include/xinstdio.h"
#include "/home/litchi/xinlang/include/xinkey.h"
#include "/home/litchi/xinlang/include/xinsymbol.h"

#define 方 square
筹 天元(隐) {
    // 设所求值为甲,易知甲的个位是 4 或 6
	筹 甲 为 518; 	// 269696 的平方根为519,我们从 518 开始检验
	筹 方;         // 设方为甲的平方
 
	// 方对百万取模,而后验证
	逢 (((方 为 甲自相乘) 取馀于 1000000 != 269696) 且 (方 < INT_MAX)) {
		甲 以其虚遂益 2;
	}
 
    // 输出
	若 (方 > INT_MAX)
	    言("条件未达成\n");
	馀则		   
	    言("所求值为 %d\n", 甲);

	回 0;
}
```

