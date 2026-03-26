package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscan(reader, &n)

	stairs := make([]int, n+1)
	for i := 1; i <= n; i++ {
		fmt.Fscan(reader, &stairs[i])

	}

	dp := make([][]int, n+1)
	for i := range dp {
		dp[i] = make([]int, 3)
	}

	dp[1][1] = stairs[1]
	dp[1][2] = 0

	if n >= 2 {
		dp[2][1] = stairs[2]
		dp[2][2] = stairs[1] + stairs[2]
	}

	for i := 3; i <= n; i++ {
		dp[i][1] = max(dp[i-2][1], dp[i-2][2]) + stairs[i]
		dp[i][2] = dp[i-1][1] + stairs[i]
	}

	if n == 1 {
		fmt.Fprintln(writer, dp[1][1])
	} else {
		fmt.Fprintln(writer, max(dp[n][1], dp[n][2]))
	}
}
