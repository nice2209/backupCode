const safeMaxNum1 = 90001482948249893894n;
const safeMaxNum2 = BigInt(90001482948249893894);
const safeMinNum = Number.MIN_SAFE_INTEGER;

console.log(safeMinNum); // -9007199254740991

console.log(safeMinNum - 4); // -9007199254740996

console.log(BigInt(safeMinNum) - 4n); // -9007199254740995n