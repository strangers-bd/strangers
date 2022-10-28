package main

import "fmt"

func main(){
	var temp float64
	fmt.Print("Input days temperature: ")
	fmt.Scan(&temp)
	if temp <0 {
		fmt.Println("Freezing Weather.")
	} else if temp < 10{
		fmt.Println("Very cold weather.")
	} else if temp < 20{
		fmt.Println("Cold Weather.")
	} else if temp < 30{
		fmt.Println("Normal in temp.")
	} else if temp < 40{
		fmt.Println("It's Hot.")
	} else{
		fmt.Println("It's very hot.")
	}
}