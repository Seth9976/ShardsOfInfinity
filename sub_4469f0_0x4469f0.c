// 函数名称: sub_4469f0
// 虚拟地址: 0x4469f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4469f0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    
    if (arg5 != 0xffffffff || arg4 == 3)
        return sub_4461a0(sub_446860(arg3, arg2), arg2, arg3, arg4, arg5)
    
    sub_44e4d0(arg3, &data_5559b1, "where == CW_GLOBAL_DECK || where == CW_GLOBAL_DISCARD", 
        "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x294, "MoveCard")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
