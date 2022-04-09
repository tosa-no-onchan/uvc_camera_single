# uvc_camera_single    
Single USB Stereo Camera (HBV-1780-2 S2.0) が、 uvc_camera で    
使える様に、プログラムを追加しました。    
    
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
    
4. 実行    
$ rosrun uvc_camera uvc_single_stereo_node    
or    
$ roslaunch uvc_camera single_stereo_node.launch    
