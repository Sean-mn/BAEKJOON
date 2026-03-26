package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

type Meeting struct {
	start, end int
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscan(reader, &n)

	meetings := make([]Meeting, n)
	for i := 0; i < n; i++ {
		fmt.Fscan(reader, &meetings[i].start, &meetings[i].end)
	}

	sort.Slice(meetings, func(i, j int) bool {
		if meetings[i].end == meetings[j].end {
			return meetings[i].start < meetings[j].start
		}
		return meetings[i].end < meetings[j].end
	})

	cnt := 0
	lastEnd := 0
	for _, meeting := range meetings {
		if meeting.start >= lastEnd {
			cnt++
			lastEnd = meeting.end
		}
	}

	fmt.Fprintln(writer, cnt)
}
