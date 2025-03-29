let a;
let s;
let w;

let min = 0;
let max = 2;
function getRandom(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}
for (let i = 0; i < 3; i++) {
    if (i == 0) {
        if (getRandom(0, 2) == 0) {
            a = "Crazy";
        }
        else if (getRandom(0, 2) == 1) {
            a = "Amazing";
        }
        else {
            a = "Fire";
        }
    }
    else if (i == 1) {
        if (getRandom(0, 2) == 0) {
            s = "Engine";
        }
        else if (getRandom(0, 2) == 1) {
            s = "Foods";
        }
        else {
            s = "Garments";
        }
    }
    else {
        if (getRandom(0, 2) == 0) {
            w = "Bros";
        }
        else if (getRandom(0, 2) == 1) {
            w = "Limited";
        }
        else {
            w = "Hub";
        }
    }
}


console.log(`${a} ${s} ${w}`)



