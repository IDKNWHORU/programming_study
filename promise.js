const p = Promise.resolve(7);

// terminal output: f1 -> f2 -> f3 -> 7
console.log("f1");
p.then(console.log);
console.log("f2");
console.log("f3");
