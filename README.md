# uvc_camera_single    
Single USB Stereo Camera (HBV-1780-2 S2.0) が、 uvc_camera で    
使える様に、プログラムを追加しました。   
    
    開発環境    
    ubuntu mate 18.04    
    ros: melodic    
    camera: HBV-1780-2 S2.0    
    
ビルド方法。    
1. original の uvc_camera を git clone します。    
$ cd ~/work    
$ git clone https://github.com/ros-drivers/camera_umd.git    
$ cd camera_umd    
$ copy -ar uvc_camera ~/catkin_ws/src    
    
2. uvc_camera_single を git clone して、ダウンロードしたファイルを、全て、上記    
~/catkin_ws/src/uvc_camera へコピーします。    
$ cd ~/work    
$ git clone https://github.com/tosa-no-onchan/uvc_camera_single.git    
$ cd uvc_camera_single    
$ copy -rf ./* ~/catkin_ws/src/uvc_camera    
3. build    
$ cd ~/catkin_ws    
$ catkin_make    
    
実行    
    
    $ rosrun uvc_camera uvc_single_stereo_node    
    or    
    $ roslaunch uvc_camera single_stereo_node.launch  --screen    
    
製造元へのお願い!!    
    
    About stereo frame layout of HBV-1780-2 S2.0.    
    If possible, arrange the captioned image frames vertically rather than horizontally.    
    Then, programing for sepatete each left frame and right frame will become more easy.    
    
キャリブレーション    
    
キャリブレーションは、[ROS rtabmap_ros 自作 Stereo Camera ](http://www.netosa.com/blog/2021/09/ros-rtabmap-ros-stereo-camera.html)    
    
