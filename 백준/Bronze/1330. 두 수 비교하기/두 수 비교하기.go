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

	if n < m {
		fmt.Fprintln(writer, "<")
	} else if n > m {
		fmt.Fprintln(writer, ">")
	} else {
		fmt.Fprintln(writer, "==")
	}
}
