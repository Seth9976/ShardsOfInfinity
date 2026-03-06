// 函数名称: __close_nolock
// 虚拟地址: 0x5319fc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__close_nolock(int32_t arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    enum WIN32_ERROR esi_2
    
    if (__get_osfhandle(arg1) != 0xffffffff)
        void* eax_1 = data_65a778
        
        if ((arg1 != 1 || (*(eax_1 + 0x88) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x58) & 1) == 0))
        label_531a52:
            
            if (CloseHandle(__get_osfhandle(arg1)) != 0)
                esi_2 = NO_ERROR
            else
                esi_2 = GetLastError()
        else
            int32_t eax_2 = __get_osfhandle(2)
            
            if (__get_osfhandle(1) != eax_2)
                goto label_531a52
            
            esi_2 = NO_ERROR
    else
        esi_2 = NO_ERROR
    
    __free_osfhnd(arg1)
    *((&data_65a778)[arg1 s>> 6] + (arg1 & 0x3f) * 0x30 + 0x28) = 0
    
    if (esi_2 == NO_ERROR)
        return 0
    
    ___acrt_errno_map_os_error(esi_2)
    return 0xffffffff
}
