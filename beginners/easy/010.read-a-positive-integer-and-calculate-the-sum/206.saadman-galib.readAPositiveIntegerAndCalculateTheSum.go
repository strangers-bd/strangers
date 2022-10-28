package main

import "fmt"

func main(){
	var n, sum int
	for true{
		fmt.Print("Enter a positive integer: ")
		fmt.Scan(&n)
		if n < 0{
			fmt.Println("Sorry to say but the number you have entered is a negative number. Pls enter again.")
		} else {
			for i:= 0; i<=n; i++{
				sum += i
			}
			fmt.Println("Sum =", sum)
			break
			
		}
	}
}