#include <iostream>
using namespace std;
double bmi (double t ,double w );
void asd (double v);
void muscles ();
void Chest_muscles();
void Chest_muscles_female();
void abdominal_muscles();
void abdominal_muscles_female();
int main()
{
    int end;
    int end2=1;
    cout<<"Welcome to the perfect health program "<<endl;

    do
    {

        double s;
        double x;
        int b;
        string nn;
        int sd;
        cout<<"Enter your name "<<endl;
        cin>>nn;
        cout<<"1---male"<<endl<<"2---female"<<endl;
        cin >> b;
        if (b == 1)
        {
            cout<<"Hello "<<nn<<endl;
            cout<<"choose :"<<endl<<"1---Calculate your body mass and find out your ideal weight"<<endl<<"2---General body muscles"<<endl<<"3---Abs muscles"<<endl<<"4---Chest muscles"<<endl;
            cin>>sd;
            if(sd==1)
            {
                cout<<"Enter the length"<<endl;
                cin>>s;
                cout<<"Enter the weight"<<endl;
                cin>>x;
                double v = bmi(s,x);
                asd(v);
            }
            else if (sd==2)
            {
                muscles ();

            }
            else if (sd==3)
            {
                abdominal_muscles();

            }
            else if (sd==4)
            {
                Chest_muscles();

            }


            cout<<endl<<"To return, enter 1 to end the program, enter any number"<<endl;


        }
        else if (b == 2)
        {
            cout<<"Hello "<<nn<<endl;

            cout<<"choose :"<<endl<<"1---Calculate your body mass and find out your ideal weight"<<endl<<"2---General body muscles"<<endl<<"3---Abs muscles"<<endl<<"4---Chest muscles"<<endl;

            cin>>sd;
            if(sd==1)
            {
                cout<<"Enter the length"<<endl;
                cin>>s;
                cout<<"Enter the weight"<<endl;
                cin>>x;
                double v = bmi(s,x);
                asd(v);
            }
            else if (sd==2)
            {
                muscles ();

            }
            else if (sd==3)
            {
                abdominal_muscles_female();

            }
            else if (sd==4)
            {
                Chest_muscles_female();
            }


            cout<<endl<<"To return, enter 1 to end the program, enter any number"<<endl;

        }
        else
        {
            cout<<"error"<<endl;
            cout<<"To return, enter 1 to end the program, enter any number"<<endl;
        }
        cin>>end;
    }  while(end2==end);
    exit(1);


}

double bmi (double t ,double w )
{
    double bmm[3];
    bmm[0]=t*t;
    bmm[1]=w/bmm[0];
    bmm[2]=bmm[1]*10000;
    double gh =bmm[2];
    return gh;


}
void asd (double v)
{
    if (v < 15)
    {
        cout<<"bmi = "<<v<<endl<<"Weight deficiency is very severe"<<endl;
    }
    else if (v >= 15 && v <= 16 )
    {
        cout<<"bmi = "<<v<<endl<<"Severe weight deficiency"<<endl;
    }
    else if (v > 16 && v <= 18.5 )
    {
        cout<<"bmi = "<<v<<endl<<"Weight loss"<<endl;
    }
    else if (v > 18.5 && v <= 25 )
    {
        cout<<"bmi = "<<v<<endl<<"Normal weight"<<endl;
    }
    else if (v > 25 && v <= 30 )
    {
        cout<<"bmi = "<<v<<endl<<"Increase in weight"<<endl;
    }
    else if (v > 30 && v <= 35 )
    {
        cout<<"bmi = "<<v<<endl<<"Light obesity (first-degree obesity)"<<endl;
    }
    else if (v > 35 && v <= 40 )
    {
        cout<<"bmi = "<<v<<endl<<"Medium obesity (second-degree obesity)"<<endl;
    }
    else if (v > 40 )
    {
        cout<<"bmi = "<<v<<endl<<"Excessive obesity (third-degree obesity)"<<endl;
    }
}
void muscles ()
{
    cout<<"Do exercises hard and with mental focus, preferably with some friends."<<endl<<"Work out every day no matter how busy you are, even if you reduce the amount of time allotted to exercise."<<endl;
    cout<<"Make sure that you perform the exercises in the correct position so that you do not cause problems and injuries as a result of the wrong position."<<endl;
    cout<<endl;
}
void abdominal_muscles()
{
    cout<<"Eat a breakfast full of carbohydrates, as it gives you enough energy to do these exercises."<<endl;
    cout<<"You should start your day by eating 20-30 grams of protein."<<endl<<"Take care to eat enough protein daily, at least 1 gram of protein per pound of body weight"<<endl;

}
void abdominal_muscles_female()
{
    cout<<"Avoid drinking carbonated water completely"<<endl<<"Eat foods that contain natural fibers"<<endl<<"Get rid of excess weight"<<endl;
}
void Chest_muscles()
{

    cout<<"Each muscle group should be trained two or three times a week."<<endl;
    cout<<"It is one of the most important chest muscle exercises that must be taken care of :"<<endl<<"1-Barbell Bench Press"<<endl<<"2-Dumbbell bench press"<<endl<<"3- Dumbbell Flyes"<<endl;
    cout<<"4-High bar pressure"<<endl<<"5-Dumbbells high pressure"<<endl<<"6-Low Cable Crossover"<<endl;
}
void Chest_muscles_female()
{
    cout<<"It is one of the most important chest muscle exercises that must be taken care of :"<<endl<<"1-Barbell Bench Press"<<endl<<"2-Dumbbell bench press"<<endl<<"3- Dumbbell Flyes"<<endl;
    cout<<"4-High bar pressure"<<endl<<"5-Do the exercises correctly"<<endl<<"6-Proper nutrition"<<endl;
}

