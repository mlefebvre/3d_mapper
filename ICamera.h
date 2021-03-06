#ifndef ICAMERA_H
#define ICAMERA_H

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

using namespace pcl;

typedef PointXYZRGB PointT;


typedef PointCloud<PointT> PointCloudT;




class ICamera{
public:
    virtual PointCloudT::Ptr getCloud()=0;
    virtual int getCount(){return 0;}
};


#endif // ICAMERA_H
