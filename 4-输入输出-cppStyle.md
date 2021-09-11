
```c++
<%- include("./code/c_in_number.cpp") %>
```

c++风格读取代码：

 - 输入输出时不要指定标记，根据变量的类型自动判定
 - 速度相对较慢
 - 读取数字的时候会略过不可见字符（空格，换行符）
 - 在对一些格式化的输出的时间不太好用，例如输出：`number is %8d \n\n,hello world`

```c++
<%- include("./code/c++_in_number.cpp") %>
```

