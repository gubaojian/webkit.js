description("Make sure that we correctly identify parse errors in object literals");

shouldThrow("({a:1, get a(){}})");
shouldThrow("({a:1, set a(){}})");
shouldThrow("({get a(){}, a:1})");
shouldThrow("({set a(){}, a:1})");
shouldThrow("({get a(){}, get a(){}})");
shouldThrow("({set a(){}, set a(){}})");
shouldThrow("({set a(){}, get a(){}, set a(){}})");
shouldThrow("(function(){({a:1, get a(){}})})");
shouldThrow("(function(){({a:1, set a(){}})})");
shouldThrow("(function(){({get a(){}, a:1})})");
shouldThrow("(function(){({set a(){}, a:1})})");
shouldThrow("(function(){({get a(){}, get a(){}})})");
shouldThrow("(function(){({set a(){}, set a(){}})})");
shouldThrow("(function(){({set a(){}, get a(){}, set a(){}})})");
shouldBeTrue("({a:1, a:1, a:1}), true");
shouldBeTrue("({get a(){}, set a(){}}), true");
shouldBeTrue("({set a(){}, get a(){}}), true");
shouldBeTrue("(function(){({a:1, a:1, a:1})}), true");
shouldBeTrue("(function(){({get a(){}, set a(){}})}), true");
shouldBeTrue("(function(){({set a(){}, get a(){}})}), true");
