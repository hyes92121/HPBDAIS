for mul in 1 2 4 8 16 26
do
    echo #######################
    for n_threads in 1 2 4 8 16 32
    do
        ./mtx_noprint $n_threads $mul
    done
done
