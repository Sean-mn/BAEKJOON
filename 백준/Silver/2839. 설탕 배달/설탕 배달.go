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

	var cnt int = 0
	for n >= 0 {
		if n%5 == 0 {
			cnt += n / 5
			fmt.Fprintln(writer, cnt)
			return
		}

		n -= 3
		cnt++
	}

	fmt.Fprintln(writer, -1)
}
