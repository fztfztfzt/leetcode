/* There are n bulbs that are initially off. You first turn on all the bulbs. Then, you turn off every second bulb. On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the nth round, you only toggle the last bulb. Find how many bulbs are on after n rounds.

Example:

Given n = 3. 

At first, the three bulbs are [off, off, off].
After first round, the three bulbs are [on, on, on].
After second round, the three bulbs are [on, off, on].
After third round, the three bulbs are [on, off, off]. 

So you should return 1, because there is only one bulb is on.*/
https://leetcode.com/problems/bulb-switcher/
Runtime: 0 ms
//画画找规律：每个数的约数如果为偶数则是关的-->每个数的约数都有2个，但平方根为0时除外-->即求平方根为0的个数-->==sqrt(n)
int bulbSwitch(int n) {
        return sqrt(n);
    }