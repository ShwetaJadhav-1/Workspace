
class Demo
{
    // Characteristics
    No1 : number;
    No2 : number;

    // Default constructor : which gets automatically/implicitely called when object gets created
    constructor()
    {
        console.log("Inside default constructor");
        this.No1 = 0;
        this.No2 = 0;
    }

    // Behaviour
    Display()
    {
        console.log("Inside Display function of Demo class");
    }
}

var obj = new Demo();

obj.Display();
console.log(obj.No1);
console.log(obj.No2);

//Output :
//Inside default constructor
//Inside Display function of Demo class
//0
//0