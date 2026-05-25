#define N 8

int	is_valid(int board[N], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i] == col)           // نفس العمود
			return (0);
		if (board[i] - i == col - row) // قطري /
			return (0);
		if (board[i] + i == col + row) // قطري \
			return (0);
		i++;
	}
	return (1);
}

int	put_queen(int board[N], int row)
{
	static int	solutions = 0;
	int			col;

	if (row == N)          // وضعنا 8 ملكات ✅
	{
		solutions++;
		return (solutions);
	}
	col = 0;
	while (col < N)
	{
		if (is_valid(board, row, col))
		{
			board[row] = col;          // ضع الملكة
			put_queen(board, row + 1); // جرب الصف التالي
		}
		col++;                         // جرب العمود التالي دائماً
	}
	return (solutions);
}

int	ft_eight_queens_puzzle(void)
{
	int	board[N];
	int	i;

	i = 0;
	while (i < N)
	{
		board[i] = -1;  // نملأ الـ board بـ -1
		i++;
	}
	return (put_queen(board, 0));
}