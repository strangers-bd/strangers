package main
import "fmt"


func main(){
	var a, b float64
	fmt.Scanln(&a)
	fmt.Scanln(&b)

	if a > b {
		fmt.Println(a, "is the largest")
	} else if b > a {
		fmt.Println(b, "is the largest")
	} else{
		fmt.Println("Both are equal")
	}
}