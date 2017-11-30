#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,t1=1,n,n1,k,l,s,temp1,team_num,match_num,goal[2];
    string game_name,team[2],temp,temp2,temp3;
    char c;
    printf("Enter game name: ");
    getline(cin,game_name);
    system("CLS");
    printf("Enter number of group: ");
    scanf("%d",&t);
    system("CLS");
    while(t1<=t)
    {
        int mt=1,points[32]={0},wins[32]={0},lost[32]={0},tie[32]={0},goal_dif[32]={0},goals_scored[32]={0},goals_against[32]={0},game_played[32]={0};
        printf("Enter number of team of Group %c: ",64+t1);
        scanf("%d",&team_num);
        system("CLS");
        getchar();
        string team_name[team_num];
        printf("Enter team names of Group %c: ",64+t1);
        printf("\n\n");
        for(i=0;i<team_num;i++)
        {
            printf("%d) ",i+1);
            getline(cin,team_name[i]);
            printf("\n");
        }
        system("CLS");
        printf("Enter results: ");
        printf("\n\n");
        while(1)
        {
            printf("Match: %d) \n\n",mt);
            printf("Team 1: ");
            getline(cin,team[0]);
            printf("\n\nGoals of Team 1: ");
            scanf("%d",&goal[0]);
            printf("\n\nTeam 2: ");
            getchar();
            getline(cin,team[1]);
            printf("\n\nGoals of Team 2: ");
            scanf("%d",&goal[1]);
            getchar();
            system("CLS");
            mt++;
            for(i=0;i<team_num;i++)
            {
                if(team[0]==team_name[i])
                {
                    goals_scored[i]+=goal[0];
                    goals_against[i]+=goal[1];
                    game_played[i]++;
                    if(goal[0]>goal[1])
                    {
                        wins[i]++;
                        points[i]+=3;
                    }
                    else if(goal[0]==goal[1])
                    {
                        tie[i]++;
                        points[i]++;
                    }
                    else
                        lost[i]++;
                    break;
                }
            }
            for(i=0;i<team_num;i++)
            {
                if(team[1]==team_name[i])
                {
                    goals_scored[i]+=goal[1];
                    goals_against[i]+=goal[0];
                    game_played[i]++;
                    if(goal[1]>goal[0])
                    {
                        wins[i]++;
                        points[i]+=3;
                    }
                    else if(goal[0]==goal[1])
                    {
                        tie[i]++;
                        points[i]++;
                    }
                    else
                        lost[i]++;
                    break;
                }
            }

            for(i=0;i<team_num;i++)
                goal_dif[i]=goals_scored[i]-goals_against[i];
            for(i=0;i<team_num;i++)
            {
                for(j=i+1;j<team_num;j++)
                {
                    if(points[i]<points[j])
                    {
                        temp=team_name[i];
                        team_name[i]=team_name[j];
                        team_name[j]=temp;

                        temp1=game_played[i];
                        game_played[i]=game_played[j];
                        game_played[j]=temp1;

                        temp1=points[i];
                        points[i]=points[j];
                        points[j]=temp1;

                        temp1=wins[i];
                        wins[i]=wins[j];
                        wins[j]=temp1;

                        temp1=lost[i];
                        lost[i]=lost[j];
                        lost[j]=temp1;

                        temp1=tie[i];
                        tie[i]=tie[j];
                        tie[j]=temp1;

                        temp1=goals_scored[i];
                        goals_scored[i]=goals_scored[j];
                        goals_scored[j]=temp1;

                        temp1=goals_against[i];
                        goals_against[i]=goals_against[j];
                        goals_against[j]=temp1;

                        temp1=goal_dif[i];
                        goal_dif[i]=goal_dif[j];
                        goal_dif[j]=temp1;
                    }
                    else if(points[i]==points[j])
                    {
                        if(wins[i]<wins[j])
                        {
                            temp=team_name[i];
                            team_name[i]=team_name[j];
                            team_name[j]=temp;

                            temp1=game_played[i];
                            game_played[i]=game_played[j];
                            game_played[j]=temp1;

                            temp1=points[i];
                            points[i]=points[j];
                            points[j]=temp1;

                            temp1=wins[i];
                            wins[i]=wins[j];
                            wins[j]=temp1;

                            temp1=lost[i];
                            lost[i]=lost[j];
                            lost[j]=temp1;

                            temp1=tie[i];
                            tie[i]=tie[j];
                            tie[j]=temp1;

                            temp1=goals_scored[i];
                            goals_scored[i]=goals_scored[j];
                            goals_scored[j]=temp1;

                            temp1=goals_against[i];
                            goals_against[i]=goals_against[j];
                            goals_against[j]=temp1;

                            temp1=goal_dif[i];
                            goal_dif[i]=goal_dif[j];
                            goal_dif[j]=temp1;
                        }
                        else if(wins[i]==wins[j])
                        {
                            if(goal_dif[i]<goal_dif[j])
                            {
                                temp=team_name[i];
                                team_name[i]=team_name[j];
                                team_name[j]=temp;

                                temp1=game_played[i];
                                game_played[i]=game_played[j];
                                game_played[j]=temp1;

                                temp1=points[i];
                                points[i]=points[j];
                                points[j]=temp1;

                                temp1=wins[i];
                                wins[i]=wins[j];
                                wins[j]=temp1;

                                temp1=lost[i];
                                lost[i]=lost[j];
                                lost[j]=temp1;

                                temp1=tie[i];
                                tie[i]=tie[j];
                                tie[j]=temp1;

                                temp1=goals_scored[i];
                                goals_scored[i]=goals_scored[j];
                                goals_scored[j]=temp1;

                                temp1=goals_against[i];
                                goals_against[i]=goals_against[j];
                                goals_against[j]=temp1;

                                temp1=goal_dif[i];
                                goal_dif[i]=goal_dif[j];
                                goal_dif[j]=temp1;
                            }
                            else if(goal_dif[i]==goal_dif[j])
                            {
                                if(goals_scored[i]<goals_scored[j])
                                {
                                    temp=team_name[i];
                                    team_name[i]=team_name[j];
                                    team_name[j]=temp;

                                    temp1=game_played[i];
                                    game_played[i]=game_played[j];
                                    game_played[j]=temp1;

                                    temp1=points[i];
                                    points[i]=points[j];
                                    points[j]=temp1;

                                    temp1=wins[i];
                                    wins[i]=wins[j];
                                    wins[j]=temp1;

                                    temp1=lost[i];
                                    lost[i]=lost[j];
                                    lost[j]=temp1;

                                    temp1=tie[i];
                                    tie[i]=tie[j];
                                    tie[j]=temp1;

                                    temp1=goals_scored[i];
                                    goals_scored[i]=goals_scored[j];
                                    goals_scored[j]=temp1;

                                    temp1=goals_against[i];
                                    goals_against[i]=goals_against[j];
                                    goals_against[j]=temp1;

                                    temp1=goal_dif[i];
                                    goal_dif[i]=goal_dif[j];
                                    goal_dif[j]=temp1;
                                }
                                else if(goals_scored[i]==goals_scored[j])
                                {
                                    if(game_played[i]>game_played[j])
                                    {
                                        temp=team_name[i];
                                        team_name[i]=team_name[j];
                                        team_name[j]=temp;

                                        temp1=game_played[i];
                                        game_played[i]=game_played[j];
                                        game_played[j]=temp1;

                                        temp1=points[i];
                                        points[i]=points[j];
                                        points[j]=temp1;

                                        temp1=wins[i];
                                        wins[i]=wins[j];
                                        wins[j]=temp1;

                                        temp1=lost[i];
                                        lost[i]=lost[j];
                                        lost[j]=temp1;

                                        temp1=tie[i];
                                        tie[i]=tie[j];
                                        tie[j]=temp1;

                                        temp1=goals_scored[i];
                                        goals_scored[i]=goals_scored[j];
                                        goals_scored[j]=temp1;

                                        temp1=goals_against[i];
                                        goals_against[i]=goals_against[j];
                                        goals_against[j]=temp1;

                                        temp1=goal_dif[i];
                                        goal_dif[i]=goal_dif[j];
                                        goal_dif[j]=temp1;
                                    }
                                    else if(game_played[i]==game_played[j])
                                    {
                                        n=team_name[i].size();
                                        n1=team_name[j].size();
                                        for(k=0;k<n;k++)
                                        {
                                            c=team_name[i][k];
                                            if(c>='A' && c<='Z')
                                                c='a'+c-65;
                                            temp2+=c;
                                        }
                                        for(k=0;k<n1;k++)
                                        {
                                            c=team_name[j][k];
                                            if(c>='A' && c<='Z')
                                                c='a'+c-65;
                                            temp3+=c;
                                        }
                                        if(temp2>temp3)
                                        {
                                            temp=team_name[i];
                                            team_name[i]=team_name[j];
                                            team_name[j]=temp;

                                            temp1=game_played[i];
                                            game_played[i]=game_played[j];
                                            game_played[j]=temp1;

                                            temp1=points[i];
                                            points[i]=points[j];
                                            points[j]=temp1;

                                            temp1=wins[i];
                                            wins[i]=wins[j];
                                            wins[j]=temp1;

                                            temp1=lost[i];
                                            lost[i]=lost[j];
                                            lost[j]=temp1;

                                            temp1=tie[i];
                                            tie[i]=tie[j];
                                            tie[j]=temp1;

                                            temp1=goals_scored[i];
                                            goals_scored[i]=goals_scored[j];
                                            goals_scored[j]=temp1;

                                            temp1=goals_against[i];
                                            goals_against[i]=goals_against[j];
                                            goals_against[j]=temp1;

                                            temp1=goal_dif[i];
                                            goal_dif[i]=goal_dif[j];
                                            goal_dif[j]=temp1;
                                        }
                                        temp2.clear();
                                        temp3.clear();
                                    }
                                }
                            }
                        }
                    }
                }
            }
            printf("Points Table of Group: %c",64+t1);
            printf("\n\n");
            for(i=0;i<team_num;i++)
                cout<<i+1<<") "<<team_name[i]<<" "<<game_played[i]<<" "<<points[i]<<" "<<wins[i]<<" "<<lost[i]<<" "<<tie[i]<<" "<<goal_dif[i]<<" "<<goals_scored[i]<<" "<<goals_against[i]<<endl;
            printf("\n\n");
            printf("If continue press 1 otherwise press 2: ");
            scanf("%d",&s);
            getchar();
            if(s==2){
                if(t1<t)
                    system("CLS");
                break;
            }
            system("CLS");
        }
        t1++;
    }
    return 0;
}
