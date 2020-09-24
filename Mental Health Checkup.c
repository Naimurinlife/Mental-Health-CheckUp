



#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    system("COLOR B");
    int a;
    char ans[100];

    printf("Mental Health Check up is administration of Psychological Test, \nwhich are designed to be objective and standard method of a sample of behaviour.");
    printf("\nPlease answer the following questions to measure your mental health condition.\n");
    printf("In this website you can check your concentration,stress,depression,bipolar disorder condition and suicidal tendency.");
    printf("\n\n\nFor Concentration Test please press 1.");
    printf("\nFor Stress Test please press 2.");
    printf("\nFor Depression Test please press 3.");
    printf("\nFor Bipolar Disorder Test please press 4.");
    printf("\nFor Suicidal Tendency Check please press 5.");
    printf("\nFor all the test please press 6.\n");
    scanf("%d",&a);

    if(a==1)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n1. My mind tends to drift away when I'm working or something.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[0]);
        fflush(stdin);
        printf("\n2. I find irrelevant information or thoughts popping into my head when I'm trying to focus on a task.\na)Always I am b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[1]);
        fflush(stdin);
        printf("\n3. When I begin a task I set specific objectives for what I want to accomplish.\na)Never b)Generally not c)A few times d)Always.\n");
        scanf("%c",&ans[2]);
        fflush(stdin);
        printf("\n4. When I need to concentrate I can tune out my environment.\na)Never b)Generally not c)Sometimes d)Always I can.\n");
        scanf("%c",&ans[3]);
        fflush(stdin);
        printf("\n5. I find myself daydreaming.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[4]);
        fflush(stdin);
        printf("\n6. When I start lose focus on my work,I take a short break.\na)Never b)Generally not c)Sometimes d)Always I take.\n");
        scanf("%c",&ans[5]);
        fflush(stdin);
        printf("\n7. When I try to focus intensely,I find my mind wandering to unrelated things.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[6]);
        fflush(stdin);
        printf("\n8. If someone is having a conversation nearby while I'm working on a task,it breaks my concentration.\na)Always b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[7]);
        fflush(stdin);
        printf("\n9. Before beginning a task,I set an approximate time limit as to how long I will work on it.\na)Never b)Generally not c)Sometimes d)Always I can.\n.");
        scanf("%c",&ans[8]);
        fflush(stdin);
        printf("\n10. I get bored easily.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[9]);
        fflush(stdin);

        int  j1,k1,l1,m1,t1=0,u1=0,v1=0,w1=0,c1=0,c12=0,c13=0,c14=0;

        for(j1=0; j1<10; j1++)
        {
            fflush(stdin);
            if(ans[j1]=='a')
            {
                t1=++c1;

            }
        }

        printf("You answered option a is %d",t1);

        fflush(stdin);


        for(k1=0; k1<10; k1++)
        {
            fflush(stdin);
            if(ans[k1]=='b')
            {
                u1=++c12;

            }
        }

        printf("\nYou answered option b is %d",u1);
        fflush(stdin);



        for(l1=0; l1<10; l1++)
        {
            fflush(stdin);
            if(ans[l1]=='c')
            {
                v1=++c13;

            }
        }
        printf("\nYou answered option c is %d",v1);
        fflush(stdin);


        for(m1=0; m1<10; m1++)
        {
            fflush(stdin);
            if(ans[m1]=='d')
            {
                w1=++c14;

            }
        }
        printf("\nYou answered option d is %d",w1);
        fflush(stdin);

        if(t1>=5&&w1<=5||u1>=7)
            printf("\nYou cannot concentrate on your work.Please take support.");

        else if(u1==5&&v1==5||u1>=5&&t1>0&&v1>0||t1>=3&&u1>=3)
            printf("\nYou have poor concentration level.Please take support.");

        else if(v1>=7||v1>=5&&t1>0&&u1>0||u1>=3&&v1>=3)
            printf("\nYou need to exercise to build your concentration on work more.");

        else
            printf("\nYou have good concentration level....Enjoy your life.. ;-D");

        fflush(stdin);
    }




    else if(a==2)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n11. I am able to relax.\na)Not at all b)A few times c)Sometimes d)Whenever I need.\n");
        scanf("%c",&ans[10]);
        fflush(stdin);
        printf("\n12. I feel fearful for no reason.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[11]);
        fflush(stdin);
        printf("\n13. I have diarrhea,constipation,or other digestive problem.\na)Frequently happens to me b)When I am under pressure c)Rarely happens d)Generally not.\n");
        scanf("%c",&ans[12]);
        fflush(stdin);
        printf("\n14. When someone snaps at me,I spend the rest of the day thinking about it.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[13]);
        fflush(stdin);
        printf("\n15. I am easily alarmed,frightened,or surprised.\na)Always I am b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[14]);
        fflush(stdin);
        printf("\n16. I experience shortness of breath or choking feeling\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[15]);
        fflush(stdin);
        printf("\n17. I have sweaty or cold,clammy hands.\na)Always I have b)Yes I have C)Just a little d)Not at all.\n");
        scanf("%c",&ans[16]);
        fflush(stdin);
        printf("\n18. I am afraid of crowds,being left alone,the dark,of strangers,or of traffic.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[17]);
        fflush(stdin);
        printf("\n19. I think a lot about why I do the things I do.\na)Always I think b)Yes I think C)Just a little d)Not at all.\n");
        scanf("%c",&ans[18]);
        fflush(stdin);
        printf("\n20. I am easily irritated.\na)Always I am b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[19]);
        fflush(stdin);

        int j2,k2,l2,m2,t2=0,u2=0,v2=0,w2=0,c2=0,c22=0,c23=0,c24=0;
        for(j2=10; j2<20; j2++)
        {
            fflush(stdin);
            if(ans[j2]=='a')
            {
                t2=++c2;

            }
        }

        printf("You answered option a is %d",t2);
        fflush(stdin);


        for(k2=10; k2<20; k2++)
        {
            fflush(stdin);
            if(ans[k2]=='b')
            {
                u2=++c22;

            }
        }

        printf("\nYou answered option b is %d",u2);

        fflush(stdin);

        for(l2=10; l2<20; l2++)
        {
            fflush(stdin);
            if(ans[l2]=='c')
            {
                v2=++c23;

            }
        }
        printf("\nYou answered option c is %d",v2);

        fflush(stdin);

        for(m2=10; m2<20; m2++)
        {
            fflush(stdin);
            if(ans[m2]=='d')
            {
                w2=++c24;

            }
        }
        printf("\nYou answered option d is %d",w2);
        fflush(stdin);

        if(t2>=5&&w2<=5||u2>=7)
            printf("\nYou are stressed.Please take support.");

        else if(u2==5&&v2==5||u2>=5&&t2>0&&v2>0||t2>=3&&u2>=3)
            printf("\nYou are nearly stressed.Please take support.");

        else if(v2>=7||v2>=5&&t2>0&&u2>0||u2>=3&&v2>=3)
            printf("\nYou need support to avoid stress and stay happy.");

        else
            printf("\nYou are not stressed...Enjoy your life.. ;-D");

        fflush(stdin);

    }





    else if(a==3)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n21.My future seems hopeless.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[20]);
        fflush(stdin);
        printf("\n22.The pleasure and joy has gone out of my life.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[21]);
        fflush(stdin);
        printf("\n23.I have difficulty making my decisions.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[22]);
        fflush(stdin);
        printf("\n24.I feel fatigued.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[23]);
        fflush(stdin);
        printf("\n25.I feel that I am a guilty person who deserves to be punished.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[24]);
        fflush(stdin);
        printf("\n26.My sleeps has been disturbed\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[25]);
        fflush(stdin);
        printf("\n27.I feel sad,blue and unhappy\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[26]);
        fflush(stdin);
        printf("\n28.I feel trapped or caught.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[27]);
        fflush(stdin);
        printf("\n29.I feel depressed even when good things happen to me.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[28]);
        fflush(stdin);
        printf("\n30.Without trying to diet, I have lost or gained weight.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[29]);

        int j3,k3,l3,m3,t3=0,u3=0,v3=0,w3=0,c3=0,c32=0,c33=0,c34=0;

        for(j3=20; j3<30; j3++)
        {
            fflush(stdin);
            if(ans[j3]=='a')
            {
                t3=++c3;

            }
        }

        printf("You answered option a is %d",t3);

        fflush(stdin);


        for(k3=20; k3<30; k3++)
        {
            fflush(stdin);
            if(ans[k3]=='b')
            {
                u3=++c32;

            }
        }

        printf("\nYou answered option b is %d",u3);



        fflush(stdin);

        for(l3=20; l3<30; l3++)
        {
            fflush(stdin);
            if(ans[l3]=='c')
            {
                v3=++c33;

            }
        }
        printf("\nYou answered option c is %d",v3);

        fflush(stdin);

        for(m3=20; m3<30; m3++)
        {
            fflush(stdin);
            if(ans[m3]=='d')
            {
                w3=++c34;

            }
        }
        printf("\nYou answered option d is %d",w3);
        fflush(stdin);


        if(w3>=5&&t3<=5||v3>=7)
            printf("\nYou are depressed.Please take support.");

        else if(v3==5&&u3==5||v3>=5&&w3>0&&u3>0||w3>=3&&v3>=3)
            printf("\nYou are nearly depressed.Please take support.");

        else if(u3>=7||u3>=5&&v3>0&&t3>0||v3>=3&&u3>=3)
            printf("\nYou need support to avoid depression and stay happy.");

        else
            printf("\nYou are not depressed...Enjoy your life.. b;-D");

        fflush(stdin);

    }




    else if(a==4)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n31. Do you become unusually talkative or overly gregarious,even in situations that may not warrant it?\na)Anytime it happens b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[30]);
        fflush(stdin);
        printf("\n32. Do you act uncharacteristically active and surprisingly outgoing?\na)Frequently I do b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[31]);
        fflush(stdin);
        printf("\n33. Does your mood swing frequently.\na)Anytime  b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[32]);
        fflush(stdin);
        printf("\n34. Do you feel both high(overly happy) and low(depressed) at the same time?\na)Frequently I feel b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[33]);
        fflush(stdin);
        printf("\n35. Does your self-confidence seem to swing wildly from great self-doubt to great arrogance?\na)Frequently It does b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[34]);
        fflush(stdin);
        printf("\n36. professionally,you have noticed a wide gap in the quantity or quality of your work-where you're dramatically productive at times,but virtually useless at others.Do you feel so?\na)Always I feel b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[35]);
        fflush(stdin);
        printf("\n37. Do you vacillate between desires to be very social and to be left alone?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[36]);
        fflush(stdin);
        printf("\n38. Do you go through periods of great sadness,as well as periods of euphoria where you find almost anything funny.\na)Frequently b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[37]);
        fflush(stdin);
        printf("\n39. Do you have a few people in your life with whom you have behaved very roughly and after sometimes you regret too much?\na)Yes it happens b)It happens sometimes c)No naturally not d)Not at all.\n");
        scanf("%c",&ans[38]);
        fflush(stdin);
        printf("\n40. Do your close friends change fast?\na)Always happens b)Generally c)Generally not d)Not at all.\n");
        scanf("%c",&ans[39]);
        fflush(stdin);

        int j4,k4,l4,m4,t4=0,u4=0,v4=0,w4=0,c4=0,c42=0,c43=0,c44=0;
        for(j4=30; j4<40; j4++)
        {
            fflush(stdin);
            if(ans[j4]=='a')
            {
                t4=++c4;

            }
        }

        printf("You answered option a is %d",t4);

        fflush(stdin);



        for(k4=30; k4<40; k4++)
        {
            fflush(stdin);
            if(ans[k4]=='b')
            {
                u4=++c42;

            }
        }

        printf("\nYou answered option b is %d",u4);

        fflush(stdin);


        for(l4=30; l4<40; l4++)
        {
            fflush(stdin);
            if(ans[l4]=='c')
            {
                v4=++c43;

            }
        }
        printf("\nYou answered option c is %d",v4);

        fflush(stdin);


        for(m4=30; m4<40; m4++)
        {
            fflush(stdin);
            if(ans[m4]=='d')
            {
                w4=++c44;

            }
        }
        printf("\nYou answered option d is %d",w4);

        fflush(stdin);

        if(t4>=5&&w4<=5||u4>=7)
            printf("\nYou have bipolar disorder(manic depression).Please take support.");

        else if(u4==5&&v4==5||u4>=5&&t4>0&&v4>0||t4>=3&&u4>=3)
            printf("\nYou nearly have bipolar disorder(manic depression).Please take support.");

        else if(v4>=7||v4>=5&&t4>0&&u4>0||u4>=3&&v4>=3)
            printf("\nYou need support to avoid bipolar disorder(manic depression) and stay happy.");

        else
            printf("\nYou don't have bipolar disorder(manic depression)....Enjoy your life.. ;-D");

        fflush(stdin);
    }





    else if(a==5)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n41. Are you feeling sadness for a long term?\n a)Yes I am b)Most probably c)probably not d)No.\n");
        scanf("%c",&ans[40]);
        fflush(stdin);
        printf("\n42. Are you feeling totally hopeless?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[41]);
        fflush(stdin);
        printf("\n43. Do you expect that your situation will improve soon?\na)Never b)May be not c)Yes D)Definitely.\n");
        scanf("%c",&ans[42]);
        fflush(stdin);
        printf("\n44. Do you experience regular sleeping problem?\na)Frequently b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[43]);
        fflush(stdin);
        printf("\n45. Are you becoming very calm suddenly after depression or moodiness?\na)Yes I am b)I will c)May be not d)Not at all.\n");
        scanf("%c",&ans[44]);
        fflush(stdin);
        printf("\n46. Do you want to withdraw yourself from all responsibilities?\na)Yes I want b)I think so c)I don't think so d)Not at all\n");
        scanf("%c",&ans[45]);
        fflush(stdin);
        printf("\n47. Do you do dangerous or self-harming behavior?\n a)Yes I do b)I want so c)I don't want so. d)Never.\n");
        scanf("%c",&ans[46]);
        fflush(stdin);
        printf("\n48. Are you interested and curious to know how to attempt suicide?\na)Yes I am b)I want so c)No I am not generally d)Never.");
        scanf("%c",&ans[47]);
        fflush(stdin);
        printf("\n49. Do you threat other about you can attempt suicide when you get angry?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[48]);
        fflush(stdin);
        printf("\n50. Have you ever tried to attempt suicide?\na)Yes I tried b)I didn't get such scope c)No I didn't d)Never.\n");
        scanf("%c",&ans[49]);
        fflush(stdin);


        int j5,k5,l5,m5,t5=0,u5=0,v5=0,w5=0,c5=0,c52=0,c53=0,c54=0;
        for(j5=40; j5<50; j5++)
        {
            fflush(stdin);
            if(ans[j5]=='a')
            {
                t5=++c5;

            }
        }

        printf("You answered option a is %d",t5);


        fflush(stdin);

        for(k5=40; k5<50; k5++)
        {
            fflush(stdin);
            if(ans[k5]=='b')
            {
                u5=++c52;

            }
        }

        printf("\nYou answered option b is %d",u5);

        fflush(stdin);


        for(l5=40; l5<50; l5++)
        {
            fflush(stdin);
            if(ans[l5]=='c')
            {
                v5=++c53;

            }
        }
        printf("\nYou answered option c is %d",v5);

        fflush(stdin);

        for(m5=40; m5<50; m5++)
        {
            fflush(stdin);
            if(ans[m5]=='d')
            {
                w5=++c54;

            }
        }
        printf("\nYou answered option d is %d",w5);

        fflush(stdin);

        if(t5>=5&&w5<=5||u5>=7)
            printf("\nYou have suicidal tendency.Please take support.");

        else if(u5==5&&v5==5||u5>=5&&t5>0&&v5>0||t5>=3&&u5>=3)
            printf("\nYou  nearly have suicidal tendency.Please take support.");

        else if(v5>=7||v5>=5&&t5>0&&u5>0||u5>=3&&v5>=3)
            printf("\nYou need support to avoid suicidal tendency and stay happy.");

        else
            printf("\nYou don't have suicidal tendency....Enjoy your life.. ;-D");
        fflush(stdin);
    }

    if(a==6)
    {
        printf("\n\nLET'S START\n");
        fflush(stdin);
        printf("\n\n\n1. My mind tends to drift away when I'm working or something.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[0]);
        fflush(stdin);
        printf("\n2. I find irrelevant information or thoughts popping into my head when I'm trying to focus on a task.\na)Always I am b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[1]);
        fflush(stdin);
        printf("\n3. When I begin a task I set specific objectives for what I want to accomplish.\na)Never b)Generally not c)A few times d)Always.\n");
        scanf("%c",&ans[2]);
        fflush(stdin);
        printf("\n4. When I need to concentrate I can tune out my environment.\na)Never b)Generally not c)Sometimes d)Always I can.\n");
        scanf("%c",&ans[3]);
        fflush(stdin);
        printf("\n5. I find myself daydreaming.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[4]);
        fflush(stdin);
        printf("\n6. When I start lose focus on my work,I take a short break.\na)Never b)Generally not c)Sometimes d)Always I take.\n");
        scanf("%c",&ans[5]);
        fflush(stdin);
        printf("\n7. When I try to focus intensely,I find my mind wandering to unrelated things.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[6]);
        fflush(stdin);
        printf("\n8. If someone is having a conversation nearby while I'm working on a task,it breaks my concentration.\na)Always b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[7]);
        fflush(stdin);
        printf("\n9. Before beginning a task,I set an approximate time limit as to how long I will work on it.\na)Never b)Generally not c)Sometimes d)Always I can.\n.");
        scanf("%c",&ans[8]);
        fflush(stdin);
        printf("\n10. I get bored easily.\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[9]);
        fflush(stdin);

        int  j1,k1,l1,m1,t1=0,u1=0,v1=0,w1=0,c1=0,c12=0,c13=0,c14=0;

        for(j1=0; j1<10; j1++)
        {
            fflush(stdin);
            if(ans[j1]=='a')
            {
                t1=++c1;

            }
        }

        printf("You answered option a is %d",t1);

        fflush(stdin);


        for(k1=0; k1<10; k1++)
        {
            fflush(stdin);
            if(ans[k1]=='b')
            {
                u1=++c12;

            }
        }

        printf("\nYou answered option b is %d",u1);
        fflush(stdin);



        for(l1=0; l1<10; l1++)
        {
            fflush(stdin);
            if(ans[l1]=='c')
            {
                v1=++c13;

            }
        }
        printf("\nYou answered option c is %d",v1);
        fflush(stdin);


        for(m1=0; m1<10; m1++)
        {
            fflush(stdin);
            if(ans[m1]=='d')
            {
                w1=++c14;

            }
        }
        printf("\nYou answered option d is %d",w1);
        fflush(stdin);

        if(t1>=5&&w1<=5||u1>=7)
            printf("\nYou cannot concentrate on your work.Please take support.");

        else if(u1==5&&v1==5||u1>=5&&t1>0&&v1>0||t1>=3&&u1>=3)
            printf("\nYou have poor concentration level.Please take support.");

        else if(v1>=7||v1>=5&&t1>0&&u1>0||u1>=3&&v1>=3)
            printf("\nYou need to exercise to build your concentration on work more.");

        else
            printf("\nYou have good concentration level....Enjoy your life.. ;-D");

        fflush(stdin);



        printf("\n\n\n11. I am able to relax.\na)Not at all b)A few times c)Sometimes d)Whenever I need.\n");
        scanf("%c",&ans[10]);
        fflush(stdin);
        printf("\n12. I feel fearful for no reason.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[11]);
        fflush(stdin);
        printf("\n13. I have diarrhea,constipation,or other digestive problem.\na)Frequently happens to me b)When I am under pressure c)Rarely happens d)Generally not.\n");
        scanf("%c",&ans[12]);
        fflush(stdin);
        printf("\n14. When someone snaps at me,I spend the rest of the day thinking about it.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[13]);
        fflush(stdin);
        printf("\n15. I am easily alarmed,frightened,or surprised.\na)Always I am b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[14]);
        fflush(stdin);
        printf("\n16. I experience shortness of breath or choking feeling\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[15]);
        fflush(stdin);
        printf("\n17. I have sweaty or cold,clammy hands.\na)Always I have b)Yes I have C)Just a little d)Not at all.\n");
        scanf("%c",&ans[16]);
        fflush(stdin);
        printf("\n18. I am afraid of crowds,being left alone,the dark,of strangers,or of traffic.\na)Always I feel b)Yes I feel C)Just a little d)Not at all.\n");
        scanf("%c",&ans[17]);
        fflush(stdin);
        printf("\n19. I think a lot about why I do the things I do.\na)Always I think b)Yes I think C)Just a little d)Not at all.\n");
        scanf("%c",&ans[18]);
        fflush(stdin);
        printf("\n20. I am easily irritated.\na)Always I am b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[19]);
        fflush(stdin);

        int j2,k2,l2,m2,t2=0,u2=0,v2=0,w2=0,c2=0,c22=0,c23=0,c24=0;
        for(j2=10; j2<20; j2++)
        {
            fflush(stdin);
            if(ans[j2]=='a')
            {
                t2=++c2;

            }
        }

        printf("You answered option a is %d",t2);
        fflush(stdin);


        for(k2=10; k2<20; k2++)
        {
            fflush(stdin);
            if(ans[k2]=='b')
            {
                u2=++c22;

            }
        }

        printf("\nYou answered option b is %d",u2);

        fflush(stdin);

        for(l2=10; l2<20; l2++)
        {
            fflush(stdin);
            if(ans[l2]=='c')
            {
                v2=++c23;

            }
        }
        printf("\nYou answered option c is %d",v2);

        fflush(stdin);

        for(m2=10; m2<20; m2++)
        {
            fflush(stdin);
            if(ans[m2]=='d')
            {
                w2=++c24;

            }
        }
        printf("\nYou answered option d is %d",w2);
        fflush(stdin);

        if(t2>=5&&w2<=5||u2>=7)
            printf("\nYou are stressed.Please take support.");

        else if(u2==5&&v2==5||u2>=5&&t2>0&&v2>0||t2>=3&&u2>=3)
            printf("\nYou are nearly stressed.Please take support.");

        else if(v2>=7||v2>=5&&t2>0&&u2>0||u2>=3&&v2>=3)
            printf("\nYou need support to avoid stress and stay happy.");

        else
            printf("\nYou are not stressed...Enjoy your life.. ;-D");

        fflush(stdin);



        printf("\n\n\n21.My future seems hopeless.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[20]);
        fflush(stdin);
        printf("\n22.The pleasure and joy has gone out of my life.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[21]);
        fflush(stdin);
        printf("\n23.I have difficulty making my decisions.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[22]);
        fflush(stdin);
        printf("\n24.I feel fatigued.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[23]);
        fflush(stdin);
        printf("\n25.I feel that I am a guilty person who deserves to be punished.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[24]);
        fflush(stdin);
        printf("\n26.My sleeps has been disturbed\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[25]);
        fflush(stdin);
        printf("\n27.I feel sad,blue and unhappy\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[26]);
        fflush(stdin);
        printf("\n28.I feel trapped or caught.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[27]);
        fflush(stdin);
        printf("\n29.I feel depressed even when good things happen to me.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[28]);
        fflush(stdin);
        printf("\n30.Without trying to diet, I have lost or gained weight.\na)Not at all  b)Just a little  c)Yes I feel  d)Always I feel.\n");
        scanf("%c",&ans[29]);

        int j3,k3,l3,m3,t3=0,u3=0,v3=0,w3=0,c3=0,c32=0,c33=0,c34=0;

        for(j3=20; j3<30; j3++)
        {
            fflush(stdin);
            if(ans[j3]=='a')
            {
                t3=++c3;

            }
        }

        printf("You answered option a is %d",t3);

        fflush(stdin);


        for(k3=20; k3<30; k3++)
        {
            fflush(stdin);
            if(ans[k3]=='b')
            {
                u3=++c32;

            }
        }

        printf("\nYou answered option b is %d",u3);



        fflush(stdin);

        for(l3=20; l3<30; l3++)
        {
            fflush(stdin);
            if(ans[l3]=='c')
            {
                v3=++c33;

            }
        }
        printf("\nYou answered option c is %d",v3);

        fflush(stdin);

        for(m3=20; m3<30; m3++)
        {
            fflush(stdin);
            if(ans[m3]=='d')
            {
                w3=++c34;

            }
        }
        printf("\nYou answered option d is %d",w3);
        fflush(stdin);


        if(w3>=5&&t3<=5||v3>=7)
            printf("\nYou are depressed.Please take support.");

        else if(v3==5&&u3==5||v3>=5&&w3>0&&u3>0||w3>=3&&v3>=3)
            printf("\nYou are nearly depressed.Please take support.");

        else if(u3>=7||u3>=5&&v3>0&&t3>0||v3>=3&&u3>=3)
            printf("\nYou need support to avoid depression and stay happy.");

        else
            printf("\nYou are not depressed...Enjoy your life.. b;-D");

        fflush(stdin);


        printf("\n\n\n31. Do you become unusually talkative or overly gregarious,even in situations that may not warrant it?\na)Anytime it happens b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[30]);
        fflush(stdin);
        printf("\n32. Do you act uncharacteristically active and surprisingly outgoing?\na)Frequently I do b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[31]);
        fflush(stdin);
        printf("\n33. Does your mood swing frequently.\na)Anytime  b)Maximum times c)A few moments d)Not at all\n");
        scanf("%c",&ans[32]);
        fflush(stdin);
        printf("\n34. Do you feel both high(overly happy) and low(depressed) at the same time?\na)Frequently I feel b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[33]);
        fflush(stdin);
        printf("\n35. Does your self-confidence seem to swing wildly from great self-doubt to great arrogance?\na)Frequently It does b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[34]);
        fflush(stdin);
        printf("\n36. professionally,you have noticed a wide gap in the quantity or quality of your work-where you're dramatically productive at times,but virtually useless at others.Do you feel so?\na)Always I feel b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[35]);
        fflush(stdin);
        printf("\n37. Do you vacillate between desires to be very social and to be left alone?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[36]);
        fflush(stdin);
        printf("\n38. Do you go through periods of great sadness,as well as periods of euphoria where you find almost anything funny.\na)Frequently b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[37]);
        fflush(stdin);
        printf("\n39. Do you have a few people in your life with whom you have behaved very roughly and after sometimes you regret too much?\na)Yes it happens b)It happens sometimes c)No naturally not d)Not at all.\n");
        scanf("%c",&ans[38]);
        fflush(stdin);
        printf("\n40. Do your close friends change fast?\na)Always happens b)Generally c)Generally not d)Not at all.\n");
        scanf("%c",&ans[39]);
        fflush(stdin);

        int j4,k4,l4,m4,t4=0,u4=0,v4=0,w4=0,c4=0,c42=0,c43=0,c44=0;
        for(j4=30; j4<40; j4++)
        {
            fflush(stdin);
            if(ans[j4]=='a')
            {
                t4=++c4;

            }
        }

        printf("You answered option a is %d",t4);

        fflush(stdin);



        for(k4=30; k4<40; k4++)
        {
            fflush(stdin);
            if(ans[k4]=='b')
            {
                u4=++c42;

            }
        }

        printf("\nYou answered option b is %d",u4);

        fflush(stdin);


        for(l4=30; l4<40; l4++)
        {
            fflush(stdin);
            if(ans[l4]=='c')
            {
                v4=++c43;

            }
        }
        printf("\nYou answered option c is %d",v4);

        fflush(stdin);


        for(m4=30; m4<40; m4++)
        {
            fflush(stdin);
            if(ans[m4]=='d')
            {
                w4=++c44;

            }
        }
        printf("\nYou answered option d is %d",w4);

        fflush(stdin);

        if(t4>=5&&w4<=5||u4>=7)
            printf("\nYou have bipolar disorder(manic depression).Please take support.");

        else if(u4==5&&v4==5||u4>=5&&t4>0&&v4>0||t4>=3&&u4>=3)
            printf("\nYou nearly have bipolar disorder(manic depression).Please take support.");

        else if(v4>=7||v4>=5&&t4>0&&u4>0||u4>=3&&v4>=3)
            printf("\nYou need support to avoid bipolar disorder(manic depression) and stay happy.");

        else
            printf("\nYou don't have bipolar disorder(manic depression)....Enjoy your life.. ;-D");

        fflush(stdin);


        printf("\n\n\n41. Are you feeling sadness for a long term?\n a)Yes I am b)Most probably c)probably not d)No.\n");
        scanf("%c",&ans[40]);
        fflush(stdin);
        printf("\n42. Are you feeling totally hopeless?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[41]);
        fflush(stdin);
        printf("\n43. Do you expect that your situation will improve soon?\na)Never b)May be not c)Yes D)Definitely.\n");
        scanf("%c",&ans[42]);
        fflush(stdin);
        printf("\n44. Do you experience regular sleeping problem?\na)Frequently b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[43]);
        fflush(stdin);
        printf("\n45. Are you becoming very calm suddenly after depression or moodiness?\na)Yes I am b)I will c)May be not d)Not at all.\n");
        scanf("%c",&ans[44]);
        fflush(stdin);
        printf("\n46. Do you want to withdraw yourself from all responsibilities?\na)Yes I want b)I think so c)I don't think so d)Not at all\n");
        scanf("%c",&ans[45]);
        fflush(stdin);
        printf("\n47. Do you do dangerous or self-harming behavior?\n a)Yes I do b)I want so c)I don't want so. d)Never.\n");
        scanf("%c",&ans[46]);
        fflush(stdin);
        printf("\n48. Are you interested and curious to know how to attempt suicide?\na)Yes I am b)I want so c)No I am not generally d)Never.");
        scanf("%c",&ans[47]);
        fflush(stdin);
        printf("\n49. Do you threat other about you can attempt suicide when you get angry?\na)Always b)Maximum times c)A few moments d)Not at all.\n");
        scanf("%c",&ans[48]);
        fflush(stdin);
        printf("\n50. Have you ever tried to attempt suicide?\na)Yes I tried b)I didn't get such scope c)No I didn't d)Never.\n");
        scanf("%c",&ans[49]);
        fflush(stdin);


        int j5,k5,l5,m5,t5=0,u5=0,v5=0,w5=0,c5=0,c52=0,c53=0,c54=0;
        for(j5=40; j5<50; j5++)
        {
            fflush(stdin);
            if(ans[j5]=='a')
            {
                t5=++c5;

            }
        }

        printf("You answered option a is %d",t5);


        fflush(stdin);

        for(k5=40; k5<50; k5++)
        {
            fflush(stdin);
            if(ans[k5]=='b')
            {
                u5=++c52;

            }
        }

        printf("\nYou answered option b is %d",u5);

        fflush(stdin);


        for(l5=40; l5<50; l5++)
        {
            fflush(stdin);
            if(ans[l5]=='c')
            {
                v5=++c53;

            }
        }
        printf("\nYou answered option c is %d",v5);

        fflush(stdin);

        for(m5=40; m5<50; m5++)
        {
            fflush(stdin);
            if(ans[m5]=='d')
            {
                w5=++c54;

            }
        }
        printf("\nYou answered option d is %d",w5);

        fflush(stdin);

        if(t5>=5&&w5<=5||u5>=7)
            printf("\nYou have suicidal tendency.Please take support.");

        else if(u5==5&&v5==5||u5>=5&&t5>0&&v5>0||t5>=3&&u5>=3)
            printf("\nYou  nearly have suicidal tendency.Please take support.");

        else if(v5>=7||v5>=5&&t5>0&&u5>0||u5>=3&&v5>=3)
            printf("\nYou need support to avoid suicidal tendency and stay happy.");

        else
            printf("\nYou don't have suicidal tendency....Enjoy your life.. ;-D");
        fflush(stdin);


    }


    char i;
    printf("\n\n\nFor Mental Health Support Please Press A.\n");
    scanf("%c",&i);
    if(i=='A')
    {
        printf("\n\nFor Online Help,please visit website:\nhttp://www.mental health support/bd.\nYou can also contact\n01728393833-National Mental Health Institute,Dhaka.\n01974727387-Educational and Clinical Psychology Department,University of Dhaka.\n01724262235-Rehab and Counciling Center,Mymensingh\n01645893345-Mental Support Center,Rangpur\n01713145689-Counciling institute,Chittagong\nFor More Please contact us : 01314577733,01314577734.");
    }

    printf("\n\n\nTo have a better life and stay mentally and physically you can follow the ways:\n1.Wake up early in the morning and go to bed at night as soon as possible.\n2.Do some exercise regularly.\n3.Have healthy foods.\n4.Try to do work that you like.\n5.At a time do one task.\n6.Have break.\n6.Spend quality time with family and friends.\n7.Believe that you are the most important and beautiful person in the world as  all.\nThanks For Visiting Our Site.");



}




