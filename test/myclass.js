var assert = require("assert");
var java = require("java");
java.classpath.push("./src");

var MyClass = java.import("com.nearinfinity.nodeJava.MyClass");

describe('MyClass', function() {
    describe('#addNumbersSync', function() {
        it('should yield 3 when class loading works',
        function() {
            assert.equal(3, MyClass.addNumbersSync(1, 2));
        })
    })
});

