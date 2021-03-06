//Iterator p^[inormalFΌλΙzρgpj
//ζΆ|ΆkTl

//iterator00inormal-arrayj.cpp
//Κ
//ΤδΊΎ
//ΤH’ό
//ͺcό
//ΌXrξ
//mXζΨ

#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////
//ΆkNXθ`
class Student {
	string name;	//Ό
	int sex;		//jΜq:1 Μq:2
public:
	Student(string sname = "", int ssex = 0):name(sname), sex(ssex){}
	string getName()const{ return name; }
	int getSex()const{ return sex; }
};

///////////////////////////////////////////////////////////////////////
//ΌλNXθ`
//ΆkΗpΜΌλΜΆ¬AΌλΜΈAΌλΜπϊ
class Meibo {
	int last;					//o^Άk
protected:
	Student** studentsP;		//ΌλizρjΗp|C^
public:
	Meibo():last(0){}
	Meibo(int studentCount):last(0), studentsP(new Student*[studentCount]){}	//ΌλizρjΆ¬

	//ΌλΙΆkπo^
	void add(Student *sstudentP)
	{
		studentsP[last] = sstudentP;		//ΆkiΜAhXjπi[
		last++;
	}

	Student* getStudentAt(int index)const{ return studentsP[index]; }		//ΆkiΜAhXjπζΎ
	int getLastNum()const{ return last; }									//o^ΆkζΎ
	
	~Meibo()
	{
		for(int n = 0; n < last; n++){ delete studentsP[n]; }				//ΆkΜπϊ
		delete [] studentsP;												//ΌλizρjΜπϊ
	}
};

///////////////////////////////////////////////////////////////////////
//SC\ΝinterfaceNXθ`iΫNXj
class Teacher {
protected:
	Meibo* meiboP;			//Ά¬ΌλIuWFNgΗp|C^
public:
	virtual void createMeibo() = 0;		//ΌλΙΆkπo^
	virtual void callStudents() = 0;	//Όλ©ηΆkπζΎ
};

///////////////////////////////////////////////////////////////////////
//SCNXθ`
class MyTeacher : public Teacher {
public:
	//ΌλΙΆkπo^
	void createMeibo()
	{
		meiboP = new Meibo(5);					//ΌλIuWFNgΆ¬iΆkTj
		meiboP->add(new Student("ΤδΊΎ",1));
		meiboP->add(new Student("ΤH’ό",2));
		meiboP->add(new Student("ͺcό",2));
		meiboP->add(new Student("ΌXrξ",1));
		meiboP->add(new Student("mXζΨ",2));
	}

	//Όλ©ηΆkπζΎ
	void callStudents()
	{
		int size = meiboP->getLastNum();		//ΌλΙo^΅½ΆkζΎ

		//ΆkΌ\¦
		for(int n = 0; n < size; n++)
		{
			cout << meiboP->getStudentAt(n)->getName() << endl;
		}
	}
	~MyTeacher(){ delete meiboP; }				//Ά¬ΌλIuWFNgΜπϊ
};


///////////////////////////////////////////////////////////////////////
int main()
{
	Teacher* teacherP(new MyTeacher);	//SCIuWFNgΆ¬

	teacherP->createMeibo();			//ΌλΜμ¬
	teacherP->callStudents();			//ΆkΜζΎ

	delete teacherP;					//SCIuWFNgΜπϊ

	return 0;
}
