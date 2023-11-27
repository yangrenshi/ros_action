ros_action
有关ros的action操作# ros_action
有关ros的action操作

1,action通信自定义action文件
action、srv、msg 文件内的可用数据类型一致，且三者实现流程类似:

按照固定格式创建action文件；

编辑配置文件；

编译生成中间文件。

1.定义action文件
首先新建功能包，并导入依赖: roscpp rospy std_msgs actionlib actionlib_msgs；

然后功能包下新建 action 目录，新增 Xxx.action(比如:AddInts.action)。
