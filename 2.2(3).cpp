#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h" 
//include posestamp head file
 
#include <cmath>
//for sqrt() function
int main(int argc, char **argv)
{
    double sqrt3=sqrt(3);
    ros::init(argc, argv, "talker");
 
    ros::NodeHandle n;
 
    ros::Publisher chatter_pub 
    = 
    nadvertise<geometry_msgs::PoseStamped>
    ("chatter", 10); 
    //initialize chatter
 
    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        geometry_msgs::PoseStamped msg1;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 1.0;
        msg.pose.position.y = sqrt3;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg1);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg2;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = -1.0;
        msg.pose.position.y = sqrt3;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg2);
        loop_rate.sleep();


        geometry_msgs::PoseStamped msg3;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 1.0;
        msg.pose.position.y = -sqrt3;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg3);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg4;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = -1.0;
        msg.pose.position.y = -sqrt3;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg4);
        loop_rate.sleep();


        geometry_msgs::PoseStamped msg5;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 2.0;
        msg.pose.position.y = sqrt3;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg5);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg6;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = -2.0;
        msg.pose.position.y = sqrt3;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg6);
        loop_rate.sleep();

    }

}