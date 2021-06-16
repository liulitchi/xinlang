/*
 * 欧拉计划第 10 题: 质数之和
 *
 * 10 以下的质数之和,列算式为 2 + 3 + 5 + 7 = 17.
 * 求小于 200 万的所有质数之和.
 */

#include <stdio.h>
#include "/home/litchi/xinlang/include/xinstdio.h"
#include "/home/litchi/xinlang/include/xinkey.h"
#include "/home/litchi/xinlang/include/xinsymbol.h"

#define 计 score
#define 篱 NUM
#define 是质数也 is_prime

翻 兆 计 为 2ULL; // 首个质数
筹 篱 为 2000000; // 质数范围

筹 是质数也(筹); // 判断质数

筹 天元(隐) {
	历 (筹 甲 为 3; 甲 < 篱; 甲 以其亏遂益 2) {
		若 (是质数也(甲))
			计 以其亏遂益 甲;
	}
	言("质数之和为 %llu\n", 计);
	回 0;
}

筹 是质数也(筹 乙) {
	历 (筹 丙 为 3; 丙自相乘 <= 乙; 丙 以其亏遂益 2) {
		若 (乙 取馀于 丙 == 0)
			回 0;
	}
	回 1;
}



