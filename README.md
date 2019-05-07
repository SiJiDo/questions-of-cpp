***前言***

题目有19道选择题和9道编程题，文件中成`check1.cpp~check18.cpp`对应相对应题号选择题的测试代码

编程题的测试代码文件在`Q1~Q9`中



# 选择题（共19题）

(  A  )1.给出以下代码，经过运算后变量`a1`=(),`*a2`=() 

```c++
int array[5] = {25,73,62,21,6};
int a1=array[0];
int *a2=array[0];
a1++;
a2++;
```

A. 26,73							   	    

B. 26,26

C. 73,73

D. 73,26

------

(  C  )2.如果我们要利用针指`*p`输出变量`array`第二个位置上的数`33`，该使用的语句是

```
int array[3] = {22,33,44};
int *p = array;
```

A. `cout << *(p++);`

B. `cout<<*p[2];`

C. `cout << *(++p);`

D. `cout<<*p[1];`

------

(  D  )3.现有一个二维数组，和一个指针数组，求下面的代码运算后的可能的结果(注:选项中的0x6ffdfc是指针地址) 

```c++
int array[3][3] ={{1,2},{5,6},{3,4}};
int *p[3] = {array[0], array[1], array[2]};
cout << *p[2] << "," << *p[0]++ << "," << p[1] << endl;
```

A. 0x6ffdfc,2,5

B. 3,2,0x6ffdfc

C. 5,1,2

D. 3,1,0x6ffdfc

------

(  C   )4.下面指针最终要输出`o`，该输出语句的写法

```c++
char *p;
char s[] = "hello ntu";
```

A. `p = &s; cout << p[4];`

B. `p = s[4]; cout << *p;`

C. `p = s; cout << p[4];`

D. `*p = s[4]; cout << *p;`

------

(  B  )5.根据下面代码，为了返回`55.4`，请问下面`func()`的写法错误的是

```c++
int main()
{
	float array[3][2] = {{22.1,33.2}, {44.3,55.4}, {77.5,77.6}};
	float *p[3] = {array[0], array[1], array[2]};
	//int array[3] = {11,22,33};
	float result = func(p);
	cout << result;
    return 0;
}
```

A. `float func(float **p){return p[1][1];}`

B.  `float func(float *p[3][]){return p[1][1];}`

C.  `float func(float *p[]){return p[1][1];}`

D.  `float func(float *p[3]){return p[1][1];}`

------

(  D   )6.下面用`new`申请了如下变量，那么下列说法正确的的方法是

```c++
float *f1, **f2;
f1 = new float[5];
f2 = new float *[3];
for(int i =0; i < 3; i++){
    f2[i] = new float[3];
}
```

A. f2生成的是个5 * 3的矩阵

B. 如果删除f1,可以使用如下语句`delete f1`

C. 如果删除f2,可以使用如下语句`delete []f2`

D.假设对`int *f3`使用`new`生成一个`int`变量，可以用该语句`f3 = new int`

------

(  C  )7.众所周知`const`是定义常量变量的，所以下面操作错误的是

```
const int AC = 57;
```

A.  `cout << AC;`

B. `int B = AC;` 

C. `AC = 66;` 

D. `const int *P = &AC;`

------

(  C  )8.下面结构体定义方法，错误的是

A. `struct s1{float a1; int a2;};`

B. `struct s2{float a1; int a2;}x1;`

C. `struct s3{float a1; int a2;}`

D.`struct {float a1; int a2;}x2;`

------

(  A  )9.对于下面定义的结构体和共同体和枚举，选项中使用正确的是

```c++
struct st{char c; int i;};
union un{int i;long l;};
enum en{I, love, China};
st t1;
un t2;
en t3;
```

A. `t2.l=23;cout << t2.i;`

B. `cout << t1;` 

C. `t3=Chinese;` 

D. `t3 = t1.c;` 

------

(  B  )10.对于类的使用，假设给你了个类`class1`，它的定义方法如下，选择项中哪个操作是错误的

```c++
class class1{
    public: char *name;
    private: int age;
    public: void getInfo(char *msg){
        cout << "you say:" << msg << " to " << name << "who's age is : " << age;
    }
    public: void setinfo(char *name, int age){
    	this->name = new char[20];
    	this->name = name;
		this->age = age;
	}
    public: int getage(){
		return age;
	}
};

int main(){
	class1 cl;
	cl.setinfo("jack", 18);
	//选择中的操作
	return 0; 
} 

```

A. `cl.name = "Rose";`

B. `cl.age = 20;`

C. `cout << cl.getage();`

D. `cl.getInfo("too young too simple");`

------

(  A  )11.在类对象中存在构造函数和析构函数，对此下面定义错误的是

A. 构造函数可以重载，析构函数也是可以重载的

B. 构造函数可以重载，析构函数不可用重载

C. 构造函数发生在类对象创建时，析构函数发生在类对象销毁时

D. 在实际中析构函数主要是为了回收内存 

------

(  A  )12.友元的作用是在类中申明外部函数或变量为友元，也就意味着外部的可信函数或变量可以调用类中的私有成员，下面关于友元申明正确是

```c++
class class1{
    public: char *name;
    private: int age;
    public: void getInfo(){
        cout << "name is: " << name << ", age is : " << age << endl;
    }
    public: class1(char *name, int age){
    	this->name = new char[20];
    	this->name = name;
		this->age = age;
	}
	//申明友元的选项
};
int getage(class1 cl){
    return cl.age;
}

int main(){
	class1 cl("Toney", 24);
	cout << getage(cl);
	return 0;
}
```

A. `friend int getage(class1);`

B. `int getage(class1);`

C. `friend int getage();`

D. `friend int getage(class1&);`

------

(   D  )13.对于下面关于类的各个成员或者方法类型说法错误的是

A. `public:static int count`是静态成员变量，所有类的对象都共享该变量的值

B. `public: static int add(int x, int y)`是静态方法，即使没有类的对象也是可以通过定义域调用的

C. `public: const int DEFINENUMBER` 是类的常数成员变量，没法任何办法在其申明后对其修改

D. `private:static int count`是静态成员变量，即使不通过类也可以调用该变量

------

(  C  )14.关于继承的特性下列说法正确的是

A. 如果要实例化继承抽象类的类，其也可以不用重写所有的虚函数

B. 可以对继承的类的私有成员函数或变量进行操作

C. 一个类可以同时继承多个类

D. 如果类A继承类B，并且类B存在自定义构造方法，类A直接继承类B的构造方法

------

(  B  )15.继承有三种继承方式，下列描述正确的是

A. 利用`public`继承方式后，派生类中可以访问所有基类成员

B. 利用`private`继承方式后，派生类中只能访问基类的公有成员，外部不能通过派生类访问继承的基类的公有成员

C. 利用`protected`继承方式后，派生类中能访问能够访问基类的公有成员和保护成员，外部能够通过派生类访问继承的基类的公有成员

D. 如果继承时没有加继承方式，默认为公有继承

------

(  C  )16.对于歧义理解错误的是

A. 歧义的形成原因是在继承多个类时，其中两个或两个以上的基类拥有相同的变量，从而引发的歧义 

B. 解决歧义的一种办法是指定该变量所在的对象即`A::a`表示是使用基类`A`的变量a

C. 如果在派生类中重新定义了受歧义的变量，那么如果之后直接使用该变量，指代的是重定义的变量

D. 如果没有在派生类中重新定义受歧义的变量，那么如果直接使用该变量，默认是使用继承时排在最前面的类的变量，如`class C: public A, public B{....};`会默认使用类`A`中的变量

------

(  B  )17.对于虚函数理解错误的是

A.  虚函数可以被重新定义，并且在派生类中不需要再加`virtual`修饰符

B.  虚函数被重新定义后，它遍不再具备虚函数的特性

C.  在类中函数可以写成`virtual void func()=0;`的形式，表示该函数是纯虚函数

D.  拥有纯虚函数的类不可被实例化 

------

(  C  )18.对于输入\输出流的理解错误的是

A. `cerr`和`clog`都是作为标准错误信息输出流对象

B. 字节流又分为字符流和二进制流

C. `cerr`为缓冲流，`clog`为非缓冲流

D. 和运算符一样`>>`和`<<`也能够重载

------

(  D  )19.创建一个文件流，下面对文件流变量操作错误的是

A. `ofstream file;file.open("1.txt");`

B. `ifstream file("1.txt");`

C. `fstream file("1.txt"); file.write("test",1024);`

D. `ofstream file("1.txt"); file.read("test",1024);`



# 编程题（共9题）

**1.利用结构体实现学生成绩表**

题目描述：利用结构体实现一个成绩表，该表含有`姓名name`,`学号id`,`语文成绩Chinese`,`数学成绩Math`,`英语成绩English`，`总分Total`,6个值，分别对应的变量类型为`char *`,`int`,`float`,`float`,`float`,`float`,其中`总分`是通过计算获得（不要求你手动输入），现请你从键盘输入2组数据，并输出表格

输入示例：

2

zasan  111  89.9  79  85.6

lisi  222  87.5  94  72.5

输出示例:

zhangsan 111 89.9 79 85.6 

lisi 222 87.5 94 72.5

------

源码

```c++
#include <iostream>
using namespace std;

struct student{
	char name[20];
	int id;
	float Chinese;
	float Math;
	float English;
	float total;
};

int main(){
	student *table;
	int number, i;
	cin >> number;
	table = new student[number];
	for(i = 0; i < number; i++){
		cin >> table[i].name >> table[i].id >> table[i].Chinese >> table[i].Math >> table[i].English;
		table[i].total = table[i].Chinese + table[i].Math + table[i].English;
	}
	for(i = 0; i < number; i++){
		cout << table[i].name << '\t' << table[i].id << '\t' << table[i].Chinese << '\t' << table[i].Math << '\t' << table[i].English << '\t' << table[i].total << endl;
	}
	
	return 0;
}
```



**2.通过指针实现字符串组的排序**

题目描述：利用指针数组来实现字符串数组（二维数组）的根据字母大小的`从小到大`排序，达到不需要申请新的字符串数组变量达到排序输出,（注：最多不超过50组字符串）

输入示例

5

abcd

abc

klmvdf

ww

giwmlc

输出示例：

abc

abcd

giwmlc

klmvdf

ww

------

源码

```c++
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int number, i;
	char *str[50];
	char *p;
	cin >> number;
	
	for(int i = 0; i < number; i++){
		str[i] = new char[50];
	}
	
	for(i = 0; i < number; i++){
		cin >> str[i];
	}
	
	for(i = 0; i < number; i++){
		for(int j = i + 1; j < number; j++){
			
			if(strcmp(str[i],str[j]) > 0){
				p = str[i];
				str[i] = str[j];
				str[j] = p;
			}
		}
	}
	
	for(i = 0; i < number; i++){
		cout << str[i] << endl;
	}
	
	 
	return 0;
}
```





**3.设计一个普通的类**

题目描述：设计一个普通的`汽车`类，要求有下面几个特性，汽车具有`品牌`，`价格`，`颜色`,`油量`属性，具有`展示信息`，`返回当前油量`，`跑动（会消耗油量）`，`定义汽车属性`的动作

汽车展示属性会输出所有的属性

定义汽车属性需要手动传入所有的信息

跑动会消耗`5`的油量，即油量=油量-5

返回当前油量会返回个`int`类型的值，该值为当前的油量

请写出类即可，不用写出测试的调用

------

源码

```c++
class Car{
	private : char *name;
	private : int value;
	private : char *color;
	private : int oil;
	
	public : void setInfo(char* name, int value, char* color, int oil){
		this->name = name;
		this->value = value;
		this->color = color;
		this->oil = oil;
	} 
	
	public : void run(){
		cout << "car run, you cost 5 oil" << endl;
		oil = oil - 5;
	}
	public : void showInfo(){
		cout << "name is: " << name << endl;
		cout << "value is: " << value << endl;
		cout << "color is: " << color << endl;
		cout << "oil is: " << oil << endl; 
	}
	
	public : int getoil(){
		return oil;
	}
};
```



**4.设计一个有析构函数和重载构造函数的类**

题目描述：请设计一个`Student`学生类，该类的属性有`姓名`,`学号`,`年级`,静态成员`count`（表示当前有多少个Student类对象），函数有`展示自己的所有信息`，输出当前`count`值的静态方法，在构造函数中传入相应的信息，如果不传入默认为`lisi`，`999`，`16`，最后在析构函数中会调用`展示自己的所有信息`的函数,，不用写出测试数据

------

源码

```c++
class Student{
	private : int id;
	private : char name[20];
	private : int grade;
	public : int static count;
	
	public : void showInfo(){
		cout << "id is:" << id << ", name is:" << name << ", grade is:" << grade << endl;
	}
	
	public : static void getcount(){
		cout << "count is: " << count << endl; 
	}
	
	public : Student(){
		count++;
		this->id = 999;
		strcpy(this->name, "lisi");
		grade = 16;
	}
	
	public : Student(int id, char* name, int grade){
		count++;
		this->id = id;
		strcpy(this->name,name);
		this->grade = grade;
	}
	
	public : ~Student(){
		showInfo();
	}
};

int Student::count;
```



**5.利用继承`animal`类的方式实现`dog`类**

题目描述：现有一个`animal`类，具有属性有`sex`,`age`,具有的函数有`叫声sound`，`展示属性showInfo`和`构造函数` ，需要继承的`dog`类，要重写`叫声`函数、`展示属性`函数和`构造函数`，并添加`奔跑函数`和`color`属性（这里的所有函数都只用cout输出即可）

------

源码

```c++
#include <iostream>
#include <cstring>
using namespace std;

class animal{
	private : int age;
	private : char sex[10];
	public : animal(int age, char* sex){
		this->age = age;
		strcpy(this->sex, sex);
	}
	
	public : void sound(){
		cout << "animal's sound" << endl;
	}
	public : void showInfo(){
		cout << "age is: " << age << endl << "sex is: " << sex <<endl;
	}
};

class dog : public animal{
	private : char color[20];
	public : dog(int age, char* sex, char* color):animal(age, sex){
		strcpy(this->color, color);
	}
	public : void sound(){
		cout << "wangwang" << endl;
	}
	public : void showInfo(){
		animal::showInfo();
		cout << "color is:" << color <<endl;
	}
};

int main(){
	animal a(2,"female");
	a.sound();
	a.showInfo();
	dog d(3,"male", "blue");
	d.sound();
	d.showInfo();
	return 0;
}
```



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



------

源码

```c++
class B : virtual public A{
	public : B(int a):A(a){}
};

class C : virtual public A{
	public : C(int a):A(a){}
};
class D: public B,public C{
	public : D(int a, int b):B(a),C(b),A(b){}
	public : void showInfo(){
		cout << "a is:" << a << endl;
	}
};
```



**7.运算符重载**

题目描述：现有个复数类`Complex`，它具有Real,Image两个属性，请重载 `+`, `-`, `=`,3个符号，实现复数之间的运算(书上例题)，不用写出测试代码

------

源码

```c++
class Complex{
	public : float Real;
	public : float Image;
	public : Complex(float Real, float Image){
		this->Real = Real;
		this->Image = Image;
	}
	public : Complex(){} 
	public : 
	void display(){
		if(Image > 0){
			cout << Real << "+" << Image << "i" << endl;
		}
		else{
			cout << Real << Image << "i" << endl;
		}
	}
	Complex& operator = (Complex& comp){
		Real = comp.Real;
		Image = comp.Image;
		return *this;
	}
	Complex& operator + (Complex& comp){
		Complex tmp;
		tmp.Real = Real + comp.Real;
		tmp.Image = Image + comp.Image;
		//cout << tmp.Real << "+" << tmp.Image << "i" << endl;
		return tmp;
	}
	Complex& operator + (float number){
		Complex tmp;
		tmp.Real = Real + number;
		tmp.Image = Image;
		//cout << tmp.Real << "+" << tmp.Image << "i" << endl;
		return tmp;
	}
	
	Complex& operator - (Complex& comp){
		Complex tmp;
		tmp.Real = Real - comp.Real;
		tmp.Image = Image - comp.Image;
		return tmp;
	} 
};
```



**8.运算符`>>`和`<<`重载**

题目描述：重载复数类`Complex`的`>>`和`<<`运算符，达到直接对对象输入输出

注意：复数类`Complex`具有成员变量有实部和虚部，输出和输入需要重载运算符

------

源码

```c++
#include <iostream>
using namespace std;

class Complex{
	public : float a;
	public : float b;	
};

ostream& operator << (ostream& os, Complex& co){
	if(co.b >= 0){
		os << co.a << "+" << co.b << "i"; 
	}
	else{
		os << co.a << co.b << "i";
	}
	return os;
}

istream& operator >> (istream& is, Complex& co){
	is >> co.a >> co.b;
	return is;
}

int main(){
	Complex complex;
	cin >> complex;
	cout << complex;
	return 0;
}
```



**9.文件操作**

题目描述：现在有1个`1.txt`文件,文件内容为`hello world`,请用代码写出创建`2.txt`并把`1.txt`的内容输入到`2.txt`中

------

源码

```c++
#include <iostream>
#include <fstream>

using namespace std;
int main(){
	fstream infile("1.txt");
	fstream outfile("2.txt",ios_base::app);

	infile >> noskipws;
	while(infile >> word){
		outfile << word;
	}
	
	return 0;
}
```

