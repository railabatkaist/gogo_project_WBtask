#ifndef COMMANDLIST_H
#define COMMANDLIST_H

enum APPROACHBOXCOMMAND
{
    APPROACHBOX_NO_ACT = 100,
    APPROACHBOX_AL_TEST,
    APPROACHBOX_WALK_START,
    APPROACHBOX_WALK_STOP,
    APPROACHBOX_WALK_READY,
    APPROACHBOX_FORWARD_WALKING,
    APPROACHBOX_RIGHT_WALKING,
    APPROACHBOX_LEFT_WALKING,
    APPROACHBOX_CW_WALKING,
    APPROACHBOX_CCW_WALKING,
    APPROACHBOX_DATA_SAVE,
    APPROACHBOX_COMPLIANCE_START,
    APPROACHBOX_COMPLIANCE_STOP,
    APPROACHBOX_PUSH_DOOR,
    APPROACHBOX_REALWALK,
    SINGLELOG_WALK,
    APPROACHBOX_ZEROGAIN,
    STEPPING_STONE_WALK,
    YUJIN_TEST_INTERPOLATION,
    APPROACHBOX_CHANGE_PARA
};

enum RealWalk
{
    REALWALK_NO_ACT,
    REALWALK_WALK_START,
    REALWALK_SINGLELOG_START,
    REALWALK_SINGLELOG,
    REALWALK_STOP
};

enum WBWALKCOMMAND
{
    WBWALK_NO_ACT = 100,
    WBWALK_GO_CART,
    WBWALK_GRASP_CART,
    WBWALK_WALKING,
    WBWALK_RELEASE_CART,
    WBWALK_SAVE,
    MPC_JOY_STICK_WALK_READY,
    MPC_JOY_STICK_WALK_START
};

enum LIFTBOXCOMMAND
{
    LIFTBOX_NO_ACT = 100,
    LIFTBOX_SIT_DOWN,
    LIFTBOX_HOLD_BOX,
    LIFTBOX_LIFT_BOX,
    LIFTBOX_STAND_UP,
    LIFTBOX_GRASPING,
    LIFTBOX_HAND_GO,
    LIFTBOX_RH_GO,
    LIFTBOX_LIFTBOX,
    LIFTBOX_PUTBOX,
    LIFTBOX_BACK_MOTION,
    LIFTBOX_BACK_LIFTBOX,
    LIFTBOX_BACK_PUTBOX,
    LIFTBOX_LIFTBOX_PARTS,
    LIFTBOX_CART_APPROACH,
    LIFTBOX_GRIPPER,
    LIFTBOX_TEST,
    LIFTBOX_BACK_LIFTPUT,
    LIFTBOX_MOVEBOX,
    LIFTBOX_MOVEBOX_FRONT,
    LIFTBOX_MOVEBOX_BACK,
    LIFTBOX_STOP,
    LIFTBOX_UB,
    LIFTBOX_SAVE,
};

enum GRIPPERMOVE_CMD
{
    GRIPPER_BREAK = 0,
    GRIPPER_STOP,
    GRIPPER_OPEN,
    GRIPPER_CLOSE_HALF,
    GRIPPER_CLOSE
};

//Gripper side
enum{
    HAND_BOTH = 0, HAND_R, HAND_L
};

enum{
    MOVE_NOTHING = 0,
    MOVE_HOLDPOSE,
    MOVE_FRONT_HOLD,
    MOVE_FRONT_PULL,
    MOVE_FRONT_PUSH,
    MOVE_FRONT_RELEASE,
    MOVE_FRONT_COM_BACK,
    MOVE_RIGHT,
    MOVE_RIGHT_WBOX,
    MOVE_OPENARMS,
    MOVE_APPROACH,
    MOVE_HOLD,
    MOVE_LIFT,
    MOVE_LIFT2,
    MOVE_LEFT,
    MOVE_LEFT_COMBACK,
    MOVE_LEFT_COMBACK2,
    MOVE_LEFT_COMBACK3,
    MOVE_PUTIN,
    MOVE_PUTIN2,
    MOVE_RELEASE,
    MOVE_HANDSBACK,
    MOVE_WALKREADYISH,
    MOVE_RESET_PARAM,
    MOVE_GET_POSE,
    MOVE_COM_5FORWARD,
    MOVE_COM_5BACKWARD,
    MOVE_COM_5BACKWARD_ABS,
    MOVE_MOVESTART,
    MOVE_WAIT,
    MOVE_LIFTBOX,
    MOVE_PUTBOX,
    MOVE_PRETURN,
    MOVE_LEFTTOFRONT,
};

enum WALKREADYCOMMAND
{
    WALKREADY_NO_ACT = 100,
    WALKREADY_GO_WALKREADYPOS,
    WALKREADY_GO_HOMEPOS,
    WALKREADY_WHEELCMD,
    WALKREADY_INFINITY
};

enum ManualMove_ALCOMMAND
{
    ManualMove_AL_NO_ACT = 100,
    ManualMove_AL_UPPER_TASK_POSE,
    ManualMove_AL_MANUAL_MODE_START,
    ManualMove_AL_MANUAL_ONE_HAND_STADING_START,
    ManualMove_AL_MANUAL_BOTH_HAND_STADING_START,
    ManualMove_AL_MANUAL_FOOT_MODE_START,
    ManualMove_AL_MANUAL_BOTH_FOOT_MODE_START,
    ManualMove_AL_MANUAL_BOTH_HAND_MODE_START,
    ManualMove_AL_MANUAL_MODE_STOP,
    ManualMove_AL_HAND,
    ManualMove_AL_GAIN,
    ManualMove_AL_E_STOP,
    ManualMove_AL_DRIVE_MODE,
    ManualMove_AL_JOYSTICK_MODE
};

enum HBWalking_COMMAND
{
    HBWalking_NO_ACT = 100,
    HBWalking_DATA_SAVE,
    HBWalking_TORQUE_TEST,
    HBWalking_ANKLE_TEST,
    HBWalking_STOP,
    HBWalking_WALK_TEST,
    HBWalking_SYSID_START,
    HBWalking_SYSID_STEP_INPUT_START,
    HBWalking_SYSID_STOP_SAVE,
    HBWalking_CONTROL_ON,
    HBWalking_OL_TORQUE_TUNING,
    HBWalking_ZERO_GAIN,
    HBWalking_INV_DYN_CONTROL,
    HBWalking_DYN_STANDING,
    HBWalking_POS_STANDING,
    HBWalking_DYN_WALKING,
    HBWalking_DYN_WALKING2,
    HBWalking_JUMP,
    HBWalking_PrevWalk,
    HBWalking_GetComHeight,
    HBWalking_Test,
    HBWalking_JoyStick_Walk_Stop,
    HBWalking_Ready_To_Walk,
    HBWalking_SE_Start_STOP,
    HBWalking_Clear_Controller,
};

enum MISSIONDOORCOMMAND
{
    MISSIONDOOR_NO_ACT = 100,
    MISSIONDOOR_COMPLIANCE_START,
    MISSIONDOOR_COMPLIANCE_STOP,
    MISSIONDOOR_PUSH_DOOR,
    MISSIONDOOR_LEANED_FORWARD,
    MISSIONDOOR_SAVE
};

enum INVERSECHECKCOMMAND
{
    INVERSECHECK_NO_ACT = 130,
    INVERSECHECK_GO_AND_IK,
    INVERSECHECK_FK
};

enum{
    Xdir = 0,
    Ydir,
    Zdir
};
enum{
    RIGHT = 0,
    LEFT
};
enum FTNAME{
    RAFT = 0,
    LAFT
};
enum IMUNAME{
    CIMU = 0
};
enum{
    NOLANDING = 0,
    RSSP,
    LSSP,
    DSP,
    FINAL,
    END
};

enum CART_MOTION
{
    CART_WAIT = 0,
    CART_APPROACH,
    CART_GRIPPER_CLOSEHALF,
    CART_GRIPPER_OPEN,
    CART_COM_FOLLOW,
    CART_FOLLOW_DONE,
    CART_HOLDCART,
    CART_RELEASECART,
    CART_WALKREADYISH,
    CART_NOTHING,
    CART_SAVE,
};

#endif // COMMANDLIST_H
