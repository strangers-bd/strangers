package main
import ("fmt"; "math")

func main(){
	var celsius, fahrenheit float64
	fmt.Scanln(&fahrenheit)
	celsius = (fahrenheit - 32) / 1.8
	fmt.Println("Fahrenheit to Celsius is = ", math.Round(celsius*100) / 100)
}