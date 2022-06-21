#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h" //include posestamp head file
 
#include <cmath>
//for sqrt() function
int main(int argc, char **argv)
{
    double sqrt3=sqrt(3);
    ros::init(argc, argv, "talker");
 
    ros::NodeHandle n;
 
    ros::Publisher chatter_pub 
    = n.advertise<geometry_msgs::PoseStamped>("chatter", 10); 
    //initialize chatter
 
    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        geometry_msgs::PoseStamped msg0;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 0.0;
        msg.pose.position.y = 0.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg0);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg1;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 6.0;
        msg.pose.position.y = 4.0;
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
        msg.pose.position.x = 6.0;
        msg.pose.position.y = 2.0;
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
        msg.pose.position.x = 7.0;
        msg.pose.position.y = 0.0;
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
        msg.pose.position.x = 4.0;
        msg.pose.position.y = 0.0;
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
        msg.pose.position.x = 4.0;
        msg.pose.position.y = 2.0;
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
        msg.pose.position.x = 2.0;
        msg.pose.position.y = 1.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg6);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg7;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 2.0;
        msg.pose.position.y = 3.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg7);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg8;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 3.0;
        msg.pose.position.y = 4.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg8);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg9;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 1.0;
        msg.pose.position.y = 5.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg9);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg10;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 0.0;
        msg.pose.position.y = 7.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg10);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg11;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 2.0;
        msg.pose.position.y = 7.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg11);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg12;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 4.0;
        msg.pose.position.y = 6.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg12);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg13;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 6.0;
        msg.pose.position.y = 6.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg13);
        loop_rate.sleep();

        geometry_msgs::PoseStamped msg14;
        msg.header.stamp = ros::Time::now();
        msg.header.frame_id = "map";
        msg.pose.position.x = 7.0;
        msg.pose.position.y = 7.0;
        msg.pose.position.z = 0.0;
        msg.pose.orientation.x = 0.0;
        msg.pose.orientation.y = 0.0;
        msg.pose.orientation.z = 0.0;
        msg.pose.orientation.w = 1.0;
        chatter_pub.publish(msg14);
        loop_rate.sleep();

        

    }

}