package main 
import "fmt"

func main(){
	var num int;
	fmt.Scanln(&num)

	if num % 2 == 0{
		fmt.Println("This is a even number")
	}else{
		fmt.Println("This is a odd number")
	}
}