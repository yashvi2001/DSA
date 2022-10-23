//adding the logic here
// did via codespaces

int lengthOfLongestSubstring(char * s){
    /*letter_map is to keep track if we saw this character in this substring*/
    int letter_map[128] = {0}, res = 0;
    char* start = s, *end = s;
    
    while (*end) {
        /* If we reached a letter we saw already - check max length and start a new substring*/
        if (letter_map[*end]) {
            res = (end - start > res) ? end - start : res;
            while (*start != *end) {
                letter_map[*start] = 0;
                start++;
            }
            start++;
            end++;
        }
        else {
            letter_map[*end] = 1;
            end++;
        }  
    }
    return end-start > res ? end-start : res;
}

