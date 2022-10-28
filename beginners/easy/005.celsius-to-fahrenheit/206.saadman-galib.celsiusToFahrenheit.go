package main
import ("fmt"; "math")

func main(){
	var celsius, fahrenheit float64
	fmt.Scanln(&celsius)
	fahrenheit = (celsius * 1.8) + 32
	fmt.Println("Celsius to Fahrenheit is = ", math.Round(fahrenheit * 100)/100)
}