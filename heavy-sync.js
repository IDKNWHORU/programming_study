const heavy_f1 = () => {
    const arr = [];
    for(let i = 0; i < 1000000; i++) {
        arr.push(i);
        for(let j = 0; j < 100; j++) {
            arr[i] = arr[i] = j;
            for (let k = 0; k < 10; k++) {
                arr[i] = j * k;
                for (let l = 0; l < 5; l++) {
                    arr[i] = l / k;
                }
            }
        }
    }

    return arr;
}

// call heavy_f1() profile it and see how long it takes
console.time('heavy_f1');
heavy_f1();
console.timeEnd('heavy_f1');