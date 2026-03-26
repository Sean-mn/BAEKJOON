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

	var n, m int
	fmt.Fscan(reader, &n, &m)

	prefix := make([]int, n+1)
	for i := 1; i <= n; i++ {
		var x int
		fmt.Fscan(reader, &x)
		prefix[i] = prefix[i-1] + x
	}

	for i := 0; i < m; i++ {
		var l, r int
		fmt.Fscan(reader, &l, &r)
		fmt.Fprintln(writer, prefix[r]-prefix[l-1])
	}
}
