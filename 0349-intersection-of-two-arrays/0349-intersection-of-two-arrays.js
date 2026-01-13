/**
 * @param {number[]} n1
 * @param {number[]} n2
 * @return {number[]}
 */
var intersection = function(n1, n2) {




d=[];
for(i=0;i<n1.length;i++){
    g=n1[i];
 for(j=i+1;j<n1.length;j++){
    if(g==n1[j]){
        n1.splice(j,1);
        j--
    }
 }
}
//console.log(n1);

for(i=0;i<n2.length;i++){
    g=n2[i];
 for(j=i+1;j<n2.length;j++){
    if(g==n2[j]){
        n2.splice(j,1);
        j--
    }
 }
}
//console.log(n2);

for(i=0;i<n1.length;i++){
    g=n1[i];
    for(j=0;j<n2.length;j++){
        if(g==n2[j]){
            d.push(g);
        }
    }
}
 return d;

    
};