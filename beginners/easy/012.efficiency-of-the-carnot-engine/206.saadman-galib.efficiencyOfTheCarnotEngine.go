package main 
import ("fmt";
	   "math")

func main(){
	var ef, t1, t2 float64
	t2 = 273.0;
	t1 = 373.0;
	ef = (1 - (t2 / t1)) * 100
	fmt.Println("Efficiency of the Carnot's engine is ", math.Round(ef*100)/100, "%")

}