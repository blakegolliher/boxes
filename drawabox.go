package main 

import (
    "fmt"
    "os"
    "strconv"
)

func main() {
    argCount := len(os.Args[1:]) 
    if argCount == 2 {
	fmt.Printf("The sizes are %s for width, and %s for height.\n", os.Args[1], os.Args[2]) 
	} else if argCount != 2 {
	fmt.Printf("Arguments not right.\n") 
	fmt.Printf("I need a width, and a height, in that order.\n") 
	os.Exit(0)
	}

    strargwidth := os.Args[1]
    strargheight := os.Args[2]
    
    argwidth, _ := strconv.Atoi(strargwidth)
    argheight, _ := strconv.Atoi(strargheight)

//    fmt.Printf("Width (first option): %v\n", argwidth)
//    fmt.Printf("Height (second option): %v\n", argheight)

    for width := 0 ; width < argwidth ; width++ {
	fmt.Printf("*")
	}
	fmt.Printf("\n")

    	for height := 0 ; height < (argheight - 2); height++ {
		fmt.Printf("|")
		for width := 0; width < (argwidth - 2); width++ {
	    	    fmt.Printf(" ") 
        	}
    	fmt.Printf("|\n")
    	}
    for width := 0 ; width < argwidth ; width++ {
        fmt.Printf("*")
	}
	fmt.Printf("\n")
}
