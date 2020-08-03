#include <gazebo/gazebo.hh>

namespace gazebo
{
	class WorldPluginMyRobot : public WorldPlugin
	{
		public: WorldPluginMyRobot() : WorldPlugin()
		{
			printf("Hello Udacity world! Welcome to my first robotics project :) !\n");
		}
		
		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
		}	
	};
	GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
