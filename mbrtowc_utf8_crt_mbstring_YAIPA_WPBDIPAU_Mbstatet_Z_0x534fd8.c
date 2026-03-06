// 函数名称: ?__mbrtowc_utf8@__crt_mbstring@@YAIPA_WPBDIPAU_Mbstatet@@@Z
// 虚拟地址: 0x534fd8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")?__mbrtowc_utf8@__crt_mbstring@@YAIPA_WPBDIPAU_Mbstatet@@@Z(int32_t arg1, int32_t arg2, int32_t arg3, int16_t* arg4, void* arg5, uint32_t arg6, void* arg7)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t result = sub_53ad9c(&var_8, arg5, arg6, arg7)
    
    if (result u<= 4)
        int32_t ecx = var_8
        
        if (ecx u> 0xffff)
            ecx = 0xfffd
        
        if (arg4 != 0)
            *arg4 = ecx.w
    
    return result
}
