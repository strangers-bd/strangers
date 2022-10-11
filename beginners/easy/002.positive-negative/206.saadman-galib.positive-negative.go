package main
import "fmt"

func main(){
	var num float64
	fmt.Scanln(&num)

	if num > 0 {
		fmt.Println("This is a positive number")
	} else if num < 0 {
		fmt.Println("This is a negative number")
	} else {
		fmt.Println("This is zero")
	}
}