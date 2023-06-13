/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
class Counter {
     constructor(init){
         this.init=init;
         this.count=init;
     }

    increment(){
         return ++this.init;
     }

    decrement(){
        return --this.init;
    }

    reset(){
        this.init=this.count;
        return this.init;
    }
}

var createCounter=function(init){
    return new Counter(init);
}

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */