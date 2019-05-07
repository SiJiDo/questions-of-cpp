**6.使用虚基类**

题目描述：假设存在类`A`具有`int a`属性和输出函数`showInfo()`，现类`B`和类`C`都继承了类`A`，，类`D`同时继承了类`B`和 类`C`,现在要通过类`D`输出`int a`,请你用虚基类实现

以下给出调试时的代码

```c++
class A{
	public : int a;
	public : A(int a){
		this->a = a;
	}
};

int main(){
	D c(1,2);
	c.showInfo();
	return 0;
}
```

现在请写出类`B`和类`C`和类`D`的代码，类`D`需实现输出`showInfo()`输出函数，并且要求最后的结果输出的是2
