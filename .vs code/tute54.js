console.log("This is tutorial 53");
function greet(name , greetText)
{
    console.log(greetText + ""+name);
    console.log(name +  "is a good boy");//cose reusability
}
function sum(a,b,c)
{
    let d=a+b+c;
    return d;
}
let name1="Harry";
let name2="shubham";
let name3="Sagar";
let name4="Rohan";
let greetText="Good Morning";
greet(name1 ,greetText)
greet(name2, greetText)
greet(name3, greetText) 
greet(name4 ,greetText)
let returnval=sum(1,2,3);
console.log(returnval)
//function calling. 
