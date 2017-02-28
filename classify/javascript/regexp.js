var str1 = "hello word, hello word";



/*
1:表达方式：1): /pattern/attributes;
            2): new RegExp(pattern, attributes);
            注: pattern 字符串，正则表达式模式
                attributes 可选参数 g 全局匹配 i 不区分大小写 m 多行匹配

2：函数
1):search() stringObject.search(regexp)
    在字符串中搜索指定的字符串或检索与正则表达式匹配的字符串
    注：search()方法不执行全局匹配，将忽略标识g，没有regexp对象的lastIndex属性，总是从字符串开始位置查找，总是返回匹配的第一个位置
 */
console.log(str1.search(/hello/));
console.log(str1.search(/hello/g));
console.log(str1.search(/([^\ ]*)/));

















































