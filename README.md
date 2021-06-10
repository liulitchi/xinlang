## 沙雕语言 辛语言

这不是一门新语言,而是 C 语言的汉化,你可以称它为**hanclang**.2021年6月9日,*程序1*编译通过.

注:只是恶搞,千万不要给老师提交此类作业,谨防被锤.

提示:编写代码时,标点请切换为半角.

- 程序1:九章算术-方田[一]

> 今有田广十五步,从十六步.问为田几何?

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

> 查尔斯·巴贝奇，英国数学家.1837年,在给鲍登勋爵的信中,展望未来.
> 他期望自己的分析机能完成一系列算术难题，如下：
> 一个正整数,平方以后以 26 9696 结尾,
> 这样的正整数可能有无穷多个,求其最小解.
> 他推测答案可能是 9 9736，平方后是 99 4726 9696,但也无法确定。

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
	筹 方;         // 令方为甲的平方
 
	// 方对百万取模,而后验证
	逢 (((方 为 甲自相乘) 取馀于 1000000 != 269696) 交 (方 < INT_MAX)) {
		甲 以其虚遂益 2;
	}
 
    // 输出
	若 (方 > INT_MAX)
	    言("超出筹数\n");
	馀则		   
	    言("正整数为 %d\n", 甲);

	回 0;
}
```

