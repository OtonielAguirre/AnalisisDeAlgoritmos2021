#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prefijoLargo(char **strs, int len){
    if (len == 0)
        return -1;
    int prefix = strlen(strs[0]) - 1;
    for(int i = 1; i < len; i++){
        while(prefix != -1 && (prefix >= strlen(strs[i]) || strs[0][0..prefix] != strs[i][0..prefix]))
            prefix--;
        if (prefix == -1)
            return prefix;
    }
    return prefix;
}


int main(){
  return 0;
}
