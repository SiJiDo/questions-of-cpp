# questions-of-cpp
某种原因下出的学校考试复习的题目
**选择题（共16题）**

(  A  )1.给出以下代码，经过运算后变量`a1`=(),`*a2`=() 

```
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

```
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

```
char *p;
char s[] = "hello ntu";
```

A. `p = &s; cout << p[4];`

B. `p = s[4]; cout << *p;`

C. `p = s; cout << p[4];`

D. `*p = s[4]; cout << *p;`

------

(  B  )5.根据下面代码，为了返回`55.4`，请问下面`func()`的写法错误的是

```
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

```
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

```
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

```
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

```
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

(  C  )15.对于输入\输出流的理解错误的是

A. `cerr`和`clog`都是作为标准错误信息输出流对象

B. 字节流又分为字符流和二进制流

C. `cerr`为缓冲流，`clog`为非缓冲流

D. 和运算符一样`>>`和`<<`也能够重载

------

(  D  )16.创建一个文件流，下面对文件流变量操作错误的是

A. `ofstream file;file.open("1.txt");`

B. `ifstream file("1.txt");`

C. `fstream file("1.txt"); file.write("test",1024);`

D. `ofstream file("1.txt"); file.read("test",1024);`

------



**编程题（共15题）**

运算符重载

使用虚基类
