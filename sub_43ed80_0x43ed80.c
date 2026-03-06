// 函数名称: sub_43ed80
// 虚拟地址: 0x43ed80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_43ed80(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, char arg7)
{
    // 第一条实际指令: int32_t eax = sub_433c60(arg2)
    int32_t eax = sub_433c60(arg2)
    
    if (arg7 == 0)
        *(eax + (arg3 << 2) + 0x18) += arg6
        return sub_43eae0(arg6, arg2, arg3, arg4, arg5, arg6)
    
    *(eax + (arg3 << 2)) += arg6
    return arg6
}
