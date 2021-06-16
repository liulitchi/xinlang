#include <stdio.h>
#include <limits.h>
#include "/home/litchi/xinlang/include/xinstdio.h"
#include "/home/litchi/xinlang/include/xinkey.h"
#include "/home/litchi/xinlang/include/xinsymbol.h"

#define 方 square
筹 天元(隐) {
    // 设所求值为甲,易知甲的个位是 4 或 6
	筹 甲 = 518; 	// 269696 的平方根为519,我们从 518 开始检验
	筹 方;         // 设方为甲的平方
 
	// 方对百万取模,而后验证
	逢 (((方 为 甲自相乘) 取馀于 1000000 != 269696) 交 (方 < INT_MAX)) {
		甲 以其亏遂益 2;
	}
 
    // 输出
	若 (方 > INT_MAX)
	    言("条件未达成\n");
	馀则		   
	    言("所求值为 %d\n", 甲);

	回 0;
}
 
