
function invertString(string) {
    var inverted = "";

    for (var i = string.length -1; i >= 0; i--) {
        inverted += string[i];
    }

    return inverted
}

console.log(invertString('amor'));