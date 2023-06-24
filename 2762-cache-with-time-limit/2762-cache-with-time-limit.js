
/** 
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */

var TimeLimitedCache = function() {
    this.cache=new Map();
};


TimeLimitedCache.prototype.set = function(key, value, duration) {

    var alreadyExists=this.cache.get(key);//initially it will be undefined because key is not present so map.get return undefined .
    if(alreadyExists){
        clearTimeout(alreadyExists.TimeoutId);
    }
    var TimeoutId=setTimeout(()=>{
        //remove the key 
        this.cache.delete(key);
    },duration);
    this.cache.set(key,{value,TimeoutId});

    return Boolean(alreadyExists);

};

/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {
    if(this.cache.has(key)){
        return this.cache.get(key).value;
    }
    return -1;
};

/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {
    return this.cache.size;
};

/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */