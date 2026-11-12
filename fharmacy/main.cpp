#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class Medicine {//ßáÇÓ ÇáÇÈ Çáßá ÈíæÑË ãäå
protected://ÚáÔÇä Çí ÍÏ æÇÑË ãä ÇáÇÈ  íŞÏÑ íÚÏá Úáíå áÇßä Çí ÍÏ ÏÇÎá Çáint mainãíŞÏÑÔ íÚÏá
    string name;
     double price;
      string useFor;
public:
    Medicine(string n,double p,string u){//ßæäÓÊÑÇßÊæÑåÎÒä İíå ÇÓã ÇáÏæÇÁ ÇáÓÚÑ ÇáÔßæí ÈíÊäİĞ ÊáŞÇÆí Çæá ãäÚãá ÇæÈÌßÊ ãä ÇáßáÇÓ
    name=n;
    price=p;
    useFor=u;
    }
    virtual void show()=0;// íÚäí ÇáãÏíÓæä ãÔ åíŞÏÑ íæÑ  İäßÔä íÚäí íŞÏÑ íÚÏá ÚáíåÇ Çáí æÑË åæ Çáí åíÚÏá İíåÇ ÖÑæÑí
     string getName()//ÚÔÇä ÇáÏÇÊÇ ÈÑæÊßÊÏ ãÔ åŞÏÑ ÇæÕáåÇ ãÈÇÔÑ ÈÊÑÌÚ Şíãå
    {
        return name;
        }
    string getUse()
    {
        return useFor;
        }

    double getPrice()
    {
        return price;
        }
        ~Medicine();//Ïå ÏíÓßÊÑÇßÊÇæÑ
};
class Tablet : public Medicine {//Ïå ßáÇÓ ÇáÇŞÑÇÕ Çáí åíæÑË ãä ãíÏíÓæä äæÚ ÇáæÑÇËå äæÚ ÇáæÑÇËå ÈÈáß ÚáÔÇä íæÑË ßá ÍÇÌå  ÚáÔÇä íãßä ÇáæÕæá áíå ÎÇÑÌ ÇáßáÇÓ
public:
    Tablet(string n,double p,string u):Medicine(n,p,u){}//Ïå ßäÓÊÑÇßÊæÑ ÈÊÚ ÇáÇŞÑÇÕ ÈäÍØ İíåå ÇäÇ ÈÚÑİå Çäæ İíå ßäÓÊÑÇßÊæÑ İæŞ
    void show() override {//
         cout << "[Tablet] " << name << " - " << price << " EGP" << endl;//ÚãáäÇ ÊÚÏíá ÚáíåÇ ÍÕáåÇ ÇæİÑ ÑíÏ
         }
};
class Injection : public Medicine {//ÍŞä
public:
    Injection(string n,double p,string u):Medicine(n,p,u){}
    void show() override {
         cout << "[Injection] " << name << " - " << price << " EGP" << endl;
          }
};
class Syrup : public Medicine {//ÔÑÇÈ æÇáí İæŞ åæ åæ äİÓ ÇáßáÇã
public:
    Syrup(string n,double p,string u):Medicine(n,p,u){}
    void show() override {
         cout << "[Syrup] " << name << " - " << price << " EGP" << endl;
         }
};
//áíå ÚãáäÇ 3 ßáÇÓ ÚáÔÇä ÚäÏäÇ 3 ÇäæÇÚ ÚáÇÌ
int main(){
    vector<Medicine*> store;
    //åäÔÆ İíßÊæÑ ÇÓãå ÓÊæÑÚáÇãå ÇáäÌãå ãÚäÇåÇ ÈÎÒä ÚäÇæíä ÚãáäÇ İíßÊæÑ ÇÓãå ÓÊæÑ íŞÏÑ íÎÒä ÚäÇæíä ÇáãíÏíÓæä
    store.push_back(new Tablet("Panadol", 50, "fever"));//newÇæÈÌßÊ  ááÊÇÈáÊ Çá
    store.push_back(new Tablet("Brufen", 30, "fever"));
    store.push_back(new Syrup("Ventolin", 120, "cough"));
    store.push_back(new Syrup("Cough Syrup", 80, "cough"));
    store.push_back(new Injection("Voltaren", 25, "severe_pain"));
    store.push_back(new Injection("Ceftriaxone", 40, "severe_pain"));
    store.push_back(new Tablet("Cataflam 50mg", 45, "joint_pain"));
    store.push_back(new Tablet("Glucosamine", 150, "joint_pain"));
    vector<string> complaints = {"fever", "cough", "severe_pain", "joint_pain"};
    //ÏÌí ÚÈÇÑåÏ Úä ÏæÇÚí ÇáÇÓÊÚãÇá ØíÈ ÇÊÚãáÊ ÇÒÇí Ïí ÈÏá ãÚãá ßĞÇ ÓÊÑíäÌ
    double totalBill = 0;//ÚáÔÇä äÎÒä İíå ÇÓÚÇÑ ÇáÇÏæíå
    vector<string> cart;//åíßæä ãÓÄá Úä ÊÎÒíä ÇÓãÇÁ ÇáÇÏæíå Çáí ÇáÚãíá ÇÎÊÇÑåÇ
    string complaint;// ÊÎÒíä ÇáÔßæí
    while(true) {  //Çá wihlåÊİÖá ÔÛÇáå ØÇáãÇ ÈŞæá true  ÊŞİ áæ ŞáÊfalse//ÊßÑÇÑ ÇáÇæÇãÑ ÈÓÊãÑÇÑ áíå ÈßÑÑ ÇáÇæÇãÑ ÚáÔÇä ÇáãÓ
        cout << "=== Pharma Core Pharmacy ===" << endl;
        cout<<" hoda "<<endl;
        for(int i=0;i<complaints.size();i++) //Ïå áæÈ ÈíØÈÚ ÇáÔßÇæí
            cout << i+1 << ". " << complaints[i] << endl;//áíå Çá1+1áÇäæ ÇáİíßÊæÑ ÈíÈÏÇ Èí æÇÍÏ æÇÍäÇ ÚÇíÒíä ÊÑÊíÈ ÇáÔßÇæí íÈÏÇ ÈæÇÍÏ
        int c; cout << "Enter number: "; cin >> c;
        if(c < 1 || c > 4)//áæ ÇáãÓÊÎÏã ÏÎá ÑŞã ãÔ ãæÌæÏ Çæ ÓÇáÈ íÏí ÇİáíæÏ
        { cout << "Invalid!\n"; continue; }
        complaint = complaints[c-1];//ÚáÔÇä ÇÍäÇ ÚÇíÒíä äÈÏÇ ÊÑÊíÈ ÇáÔßÇæí È 1 æÇáİíßÊæÑ ÈíÈÏÇ ÈæÇÍÏ
        vector<Medicine*> result;//åäÎÒä ÚäÇæíä ÚäÇÕÑ ÇáãÏíÓæä åÊÊÎÒä İí áãÇ ÇáãÓÊÎÏã íÎÊÇÑ Ôßæí åäÚÑÖå ÇáÇÏæíå ÇáãäÇÓÈå
        for(int num=1;auto m:store) //ÚáÔÇä ÊÑŞíã ÇáÇÏæíå ÇßÊÈ 1æ2æ3æ ÈÏá ÇáÇÓã Çæá ãÍÈ ÇÏæÓ Ôßæì
            //auto m:storeÈíáİ Úáí ßá ÚäÕÑ ÏÇÎá ÇástoreÇáauto áİ ÊáŞÇÆí
            if(m->getUse()/**(m->getUse()=ÇáæÕæá áÏæÇá ÇáÇæÈÌßÊ
                                ÇámÑæÍ áÏæÇÁ Çáí ÈíÔÇæÑ Úáíå æäÇÏí ÇáÏÇáå Çáí åíÇ get use **/==complaint)// åá ÇÓÊÎÏÇã ÇáÏæÇÁ ÇáÍÇáí íÓÇæí ÇáãÓÊÎÏã ÇÎÊÇÑåÇ
                { cout << num << ". ";//ÇØÈÚ ÑŞã ÇáÏæÇÁÊÑÊíÈå
        m->show();//ÈíäÇÊ ÇáÏæÇÁ/íÚÑÖ
                result.push_back(m);// İí ÇáÑíÒáÊ m Öíİ ÇáÏæÇÁ  ;
         num++;//íÚäí ãäÇ ÊÎÊÇÑ Çí Ôßæí åíÙåÑ ÇäæÇÚ ÇáÇÏæíå ÈÇáÊÑÊíÈ
         }
        int pick;//ÈíÎÒä İíÎ ÇÎÊíÇÑæÚ ÇáÏæÇÁ
        cout << "Choose medicine number: ";
        cin >> pick;
        if(pick < 1 || pick > (int)result.size())//ÎØÇ áæ ÏÎáäÇ ÑŞã ÎÇØÇ İí ÇÎíÇÑ äæÚ ÇáÏæÇí åíÙåÑ ÇäİíáÏ
            //(int)result.size Çá ÚÏÏ ÇáÇÏæíå ÇáãæÌæÏå Çæ ÇáãÊÎÒäå
            {
                 cout << "Invalid!\n";
         continue;
        }// Medicine* chosen Ïå ÈíæäÊÑ åíÔÇæÑ Úáí ÇáÏæÇÁ Çáí ÇÎÊÇÑå
        Medicine* chosen = result[pick-1];//    ÚÔÇä ÇáİíßÊæÑ ÚíÈÏÇ ãä ÒíÑæ æÇäÇ Úãáíä ÈÇß äÇŞÕ æÇÍÏ ÚÔÇä ÇäÇ ÚÇæÒ ÇÈÏÇ ãä æÇÍÏ
        cout << "Added: " << chosen->getName() << endl;//ÚÑÖ ÇáÏæÇÁ ÇáæÇÁ ÇáãÎÊÇÑ/
        totalBill += chosen->getPrice();//  ÇÖÇİå ÇáÓÚÑ Çáí ÇáİÊæÑå ÚÈÇÑå Úä áãÇ ÇÔÊÑí äæÚ ÏæÇÁ ãÚíä åÎÒä ÓÚÑå İí ÊÉÊÇá ÈÇá
        cart.push_back(complaint + " -> " + chosen->getName() + " : " + to_string((int)chosen->getPrice()) + " EGP");
        //ãßÇä ÊÎÒíä Úãáíå ÇáÔÑÇÁ ÈÇáßÇãá ÇáÔßæí ÇáÚáÇÌ ÇáãÎÊÇÑ æÇ ÓÚÑå
        char more;
         cout << "Do you want something else? (y/n): ";
          cin >> more;//ÚãáäÇ ãÊÛí ãä äæÚ ÇÊÔÇÑ åíÎÒä ÍÑİ æÇÍÏ İŞØ ííÓ ÇÉ äææ
        if(more=='n' || more=='N')// ÚÔÇä ÇäÇ áæ ÏÎáÊ ííÓ åíÚííÏ ÇááæÈ ÊÇäæ áæ äæ åíäåí ÔÑØ Çáæíá æíØÈÚ ÇáİÊæÑå

            break;
        system("cls"); //ÚÔÇä ÇãÓÍ ÇáÕİÍå ãä ÇÎáÕ
    }
    cout << "\n== FINAL INVOICE ==\n";
    for(auto &l:cart)//

        cout<<l<<endl;
    double discount = cart.size()>=2? totalBill*0.05 : 0;
    double finalTotal = totalBill - discount;
    if(discount) cout<<"Discount 5%: -"<<discount<<endl;
    cout<<"Total to pay: "<<finalTotal<<" EGP\n";
    double money; cout<<"Enter your money: "; cin>>money;
    if(money < finalTotal){ cout<<"Insufficient amount!\n"; }
    else{
        double change = money - finalTotal;
        cout<<"Change: "<<change<<" EGP"<<endl;
        cout<< "abdo";




        ofstream file("abs.txt");
        file<<"== Pharma Core Pharmacy ==\n";
        file<<"------\n";
        file<<"Discount: "<<discount<<endl;
        file<<"Total to pay: "<<finalTotal<<endl;
        file<<"Paid: "<<money<<endl;
        file.close();
        system("abs.txt");
    }


    return 0;
}
