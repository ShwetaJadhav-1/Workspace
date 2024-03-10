function CheckEven(No) {
    if ((No % 2) == 0) {
        return true;
    }
    else {
        return false;
    }
}
var Value = 11;
var Result = false;
Result = CheckEven(Value);
if (Result == true) {
    console.log("It is even");
}
else {
    console.log("It is odd");
}
