// 函数名称: ?truncate_ctrl_z_if_present@@YAHH@Z
// 虚拟地址: 0x53a144
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")?truncate_ctrl_z_if_present@@YAHH@Z(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax_2
    eax_2.b = *((&data_65a778)[arg4 s>> 6] + (arg4 & 0x3f) * 0x30 + 0x28)
    
    if ((eax_2.b & 0x48) != 0 || eax_2.b s>= 0)
        return 0
    
    int32_t edi
    int32_t var_14_1 = edi
    int32_t eax_3
    int32_t edx_2
    eax_3, edx_2 = __lseeki64_nolock(arg4, 0xffffffff, 0xffffffff, FILE_END)
    int32_t result
    
    if ((eax_3 & edx_2) != 0xffffffff)
        var_8.w = 0
        
        if (__read_nolock(arg4, &var_8, 1) != 0 || var_8.w != 0x1a)
        label_53a1dc:
            int32_t eax_7
            int32_t edx_3
            eax_7, edx_3 = __lseeki64_nolock(arg4, 0, 0, FILE_BEGIN)
            
            if ((eax_7 & edx_3) != 0xffffffff)
                result = 0
            else
                result = *__errno()
        else
            if (__chsize_nolock(arg4, eax_3, edx_2) != 0xffffffff)
                goto label_53a1dc
            
            result = *__errno()
    else if (*___doserrno() != 0x83)
        result = *__errno()
    else
        result = 0
    
    return result
}
