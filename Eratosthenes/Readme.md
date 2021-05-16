## Eratosthenes
### Thuật toán sàng số nguyên tố
* Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố.
* Code:
```c
for(int i = 2; i <= len; i++){
        if(primeCheck[i]){
            for(int j = 2 * i; j <= len; j += i){
                primeCheck[j] = false;
            }
        }
}
```
