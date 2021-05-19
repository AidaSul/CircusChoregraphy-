#include<iostream>
#include<cassert>
#include<string>
#include<fstream>


int meet_position(int kangaro_1_place, int kangaro_1_speed, int kangaro_2_place, int kangaro_2_speed)
{
	int distance_between_the_kangaroos = abs(kangaro_1_place - kangaro_2_place);

	//If the start point of the two kangaroos are the same and the speed is the same
	if (distance_between_the_kangaroos == 0 && kangaro_1_speed == kangaro_2_speed)
	{
		kangaro_1_place = kangaro_1_place + kangaro_1_speed;
		return kangaro_1_place;
	}
	else if (distance_between_the_kangaroos == 0 && kangaro_1_speed != kangaro_2_speed)  //if the starting position is the same but speed is different; 
	{
		kangaro_1_place = kangaro_1_place + kangaro_1_speed;
		kangaro_2_place = kangaro_2_place + kangaro_2_speed;
		distance_between_the_kangaroos = abs(kangaro_1_place - kangaro_2_place);
	}


	if ((kangaro_1_place > kangaro_2_place && kangaro_1_speed > kangaro_2_speed) || (kangaro_2_place > kangaro_1_place && kangaro_2_speed > kangaro_1_speed))
	{
		return -1;
	}
	else
	{
		for (int i = 0; i < distance_between_the_kangaroos; ++i)
		{
			kangaro_1_place = kangaro_1_place + kangaro_1_speed;
			kangaro_2_place = kangaro_2_place + kangaro_2_speed;
			if (kangaro_1_place == kangaro_2_place)
			{
				return kangaro_1_place;
			}
		}
		if (kangaro_1_place != kangaro_2_place)
		{
			return -1;
		}
	}
}

int main()
{
	int value1, value2, speed1, speed2;
	int x;
	int y;




	std::cout<<"Please chose what domain you are from \n";
	std::cout<<"Select 1 for CIRCUS_CHOREOGRAPH \n";
	std::cout<<"Select 2 for CIRCUS_ADMIN \n";

	std::cin>>x;

	if ( x == 1)
	{
		std::cout<<"Please enter kangaro 1 speed \n";
		std::cin>>speed1;
		std::cout<<"\n Please enter kangaro 1 position \n";
		std::cin>>value1;
		std::cout<<"\n Please enter kangaro 2 speed \n";
		std::cin>>speed2;
		std::cout<<"\n Please enter kangaro 2 position \n";
		std::cin>>value2;

		int result = meet_position(value1, speed1, value2, speed2);
		std::ofstream outfile("test.txt", std::ios_base::out | std::ios_base::app);
		outfile << result << "\n" << std::endl;
		outfile.close();

		std::cout<<"You can not view results unless you are Admin \n";


	}
	else
	{
		std::cout<<"\n Chose 1 to put in new data for kangaroos chose 2 to view data from previous kangaros \n";
		std::cin>>y;
		if (y == 1)
		{
			std::cout<<"Please enter kangaro 1 speed \n";
			std::cin>>speed1;
			std::cout<<"\n Please enter kangaro 1 position \n";
			std::cin>>value1;
			std::cout<<"\n Please enter kangaro 2 speed \n";
			std::cin>>speed2;
			std::cout<<"\n Please enter kangaro 2 position \n";
			std::cin>>value2;

			int result = meet_position(value1, speed1, value2, speed2);

			std::ofstream outfile("test.txt", std::ios_base::out | std::ios_base::app);
			outfile << result << "\n" << std::endl;
			outfile.close();

		}
		else 
		{
			    std::ifstream f("test.txt");
			    if (f.is_open())
			    	std::cout << f.rdbuf();
			    else
			    	std::cout<<"No file to output \n";
		}
	}

}