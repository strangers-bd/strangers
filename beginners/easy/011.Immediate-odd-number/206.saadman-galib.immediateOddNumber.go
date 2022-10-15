package main

import "fmt"

func main(){
	var n int 
	fmt.Scanln(&n)
	if n<=0{
		if n % 2 == 0{
			fmt.Println("Your immediate next odd number is =", n + 1)
		} else {
			fmt.Println("Invalid input")
		}
	} else{
		fmt.Println("You have entered a negative number")
	}
}