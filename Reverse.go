package main
import "fmt"

//reverse a number, without converting the number into a string
func reverse(num int) int{
	rev := 0
	for(x > 0){
		rev = rev*10 + num%10
		num = num/10
	}
	return rev
}

func main(){
	fmt.Println(reverse(153))
}