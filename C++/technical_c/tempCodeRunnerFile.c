r[i]>='z' && str[j]>='a' && str[j]<='z'){
            swap(&str[i],&str[j]);
            i++;j++;
        }else if(str[i]<'a' && str[i]>'z'){
            i++;