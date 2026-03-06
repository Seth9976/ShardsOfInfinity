// 函数名称: sub_46b0a0
// 虚拟地址: 0x46b0a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_46b0a0(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int128_t* result = sub_4b8ac0(sub_4b8610(arg1, arg3, &data_5b1d6c, arg2, arg4), arg3, &data_5b1d6c, data_e4712c, arg2)
    int128_t* result = sub_4b8ac0(sub_4b8610(arg1, arg3, &data_5b1d6c, arg2, arg4), arg3, &data_5b1d6c, 
        data_e4712c, arg2)
    *result = *arg4
    
    if (result != 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "memcpy(val, &value, sizeof(value))", "c:\ax2017\engine\ui2.cpp", 
        0x1c5d, "AssignPropertyRect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
