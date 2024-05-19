func findWords(words []string) []string {
\tif len(words) == 0 {
\t\treturn []string{}
\t}
\tresult := []string{}
\tfirstLine := \qwertyuiop\
\tsecondLine := \asdfghjkl\
\tthirdLine := \zxcvbnm\

\tfirst := []rune(firstLine)
\tsecond := []rune(secondLine)
\tthird := []rune(thirdLine)

\tfor _, word := range words {
\t\twordLower := strings.ToLower(word)
\t\tcount := 0
\t\tfirstLineCount := 0
\t\tsecondLineCount := 0
\t\tthirdLineCount := 0
\t\tfor _, letter := range wordLower {
\t\t\tcount++
\t\t\tif contains(first, letter) {
\t\t\t\tfirstLineCount++
\t\t\t}
\t\t\tif contains(second, letter) {
\t\t\t\tsecondLineCount++
\t\t\t}
\t\t\tif contains(third, letter) {
\t\t\t\tthirdLineCount++
\t\t\t}
\t\t}
\t\tif firstLineCount == count || secondLineCount == count || thirdLineCount == count {
\t\t\tresult = append(result, word)
\t\t}
\t}

\treturn result
}

func contains(arr []rune, letter rune) bool {
\tfor _, a := range arr {
\t\tif a == letter {
\t\t\treturn true
\t\t}
\t}
\treturn false
}