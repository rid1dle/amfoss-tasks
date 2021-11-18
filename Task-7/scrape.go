package main

import (
	"encoding/csv"
	"fmt"
	"log"
	"os"

	// "strconv"

	"github.com/gocolly/colly"
)

func main () {
    fName := "data.csv"
    file, err := os.Create(fName)
    if err != nil {
        log.Fatalf("Could not create file, err :%q", err)
        return
    }
    defer file.Close()

    writer := csv.NewWriter(file)
    defer writer.Flush()

    c := colly.NewCollector(
        colly.AllowedDomains("www.forbes.com","forbes.com"),
    )

    c.OnHTML(".scrolly-table tbody tr", func(e *colly.HTMLElement){
        writer.Write([]string{
            e.ChildText(".rank .ng-binging"),
            // e.ChildText("span.ng-binding"),
        })
    })
    c.OnRequest(func(r *colly.Request) {
        fmt.Println ("Visiting", r.URL)
    })
    // for i := 0; i <312; i++ {
    //     fmt.Printf("Scraping Page : %d\n", i)

    //     c.Visit("https://www.internshala.com/internships/page-" + strconv.Itoa((i+1)))

    // }
    c.Visit("https://www.forbes.com/real-time-billionaires/#3495c1883d78")

    log.Print("Scraping Complete\n")
    log.Println(c)
}