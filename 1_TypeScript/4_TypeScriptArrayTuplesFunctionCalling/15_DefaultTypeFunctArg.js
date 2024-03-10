function Percentage(Marks, Outof) {
    if (Outof === void 0) { Outof = 100; }
    var Result = 0;
    Result = ((Marks / Outof) * 100);
    return Result;
}
var Ans = 0;
Ans = Percentage(89, 200);
console.log("Percentage is : " + Ans);
Ans = Percentage(89);
console.log("Percentage is : " + Ans);
