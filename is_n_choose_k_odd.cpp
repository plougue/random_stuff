bool is_n_choose_k_odd(int n, int k) {
    return n == ((n - k) | k);
}

/*
This is just an application of Lucas Theorem 
https://en.wikipedia.org/wiki/Lucas%27s_theorem

Or even or the most involed Kummer theorem
https://en.wikipedia.org/wiki/Kummer%27s_theorem

*/
