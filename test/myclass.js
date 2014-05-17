"use strict";

var assert = require("assert");
var java = require("java");
java.classpath.push("test/src");

var className = "com.nearinfinity.nodeJava.MyClass";
var MyClass = java.import(className);

describe('MyClass', function() {
    describe('#addNumbersSync', function() {
        it('should yield 3 when class loading works',
            function() {
                assert.equal(3, MyClass.addNumbersSync(1, 2));
            }
        )
    })

    describe('#getTypeName', function() {
        it('should equal ' + className,
            function() {
                assert.equal(className, MyClass.getClassNameSync());
            }
        )
    })

});

