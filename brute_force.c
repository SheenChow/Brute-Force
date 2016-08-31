/*朴素的模式匹配算法*/

/*返回字串T在主串中S中第pos个字符之后的位置，若不存在，则函数返回0*/

/*T非空，1<=pos<=StrLength(S).*/

int Index(String S, String T, int pos){

	/*i用于主串S中当前位置的下标，若pos不为1，则从pos位置开始匹配*/
	int i = pos;

        /*j用于表示子串中当前位置的下标值*/
	int j = 1;

	while(i <= S[0] && j <= T[0]) {

		/*在i小于S的长度并且j小于T的长度时进行循环*/
		if (S[i] == T[j]){

			++i;

			++j;

		} else {

                        /*退回到上次开始匹配位置的下一位*/
			i = i - j + 2;

			/*j退回到子串的首位*/
			j = 1;
		}

	}

	if (j > T[0]) {

		return i - T[0]; //注意此时的i是比正常的结果多1的

	} else {

		return 0;
	}
}
