package main

import "fmt"

func main() {
	var num int
	fmt.Print("Enter your input here: ")
	fmt.Scan(&num)

    for i := 1; i <= num; i++{
        if i%2 == 0{
            fmt.Print(i, " ")
        }
    }
	
    fmt.Print("\n")
}