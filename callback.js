const f1 = (n, f) => {
  f(n + 1);
};

const f2 = (n, f) => {
  f(n + 2);
};

const f3 = (n, f) => {
  f(n + 3);
};

// terminal output: f1 -> f2 -> 7 -> 9 -> f3
console.log("f1");
console.log("f2");
f1(1, (r1) => {
  for (let i = 1; i < 3; i++) {
    f2(r1 * i, (r2) => f3(r2, console.log));
  }
});
console.log("f3");
