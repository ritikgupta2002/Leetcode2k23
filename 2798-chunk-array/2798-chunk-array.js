/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    const res=[];
    let subarray=[];
    for(let i =0 ; i<arr.length; i++){
        subarray.push(arr[i]);
        if(subarray.length===size){
            res.push(subarray);
            subarray=[];
        }
    }
    if(subarray.length){
        res.push(subarray);
    }

    return res;
};