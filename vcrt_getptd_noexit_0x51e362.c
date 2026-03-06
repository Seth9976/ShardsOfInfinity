// 函数名称: ___vcrt_getptd_noexit
// 虚拟地址: 0x51e362
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___vcrt_getptd_noexit()
{
    // 第一条实际指令: if (data_5b00a0 == 0xffffffff)
    if (data_5b00a0 == 0xffffffff)
        return 0
    
    enum WIN32_ERROR dwErrCode = GetLastError()
    int32_t result = ___vcrt_FlsGetValue(data_5b00a0)
    
    if (result == 0xffffffff)
        result = 0
    else if (result == 0)
        if (___vcrt_FlsSetValue(data_5b00a0, 0xffffffff) != 0)
            int32_t var_14_1 = 1
            int32_t result_1 = _calloc()
            BOOL eax_4
            
            if (result_1 != 0)
                eax_4 = ___vcrt_FlsSetValue(data_5b00a0, result_1)
            
            if (result_1 != 0 && eax_4 != 0)
                result = result_1
                result_1 = 0
            else
                result = 0
                ___vcrt_FlsSetValue(data_5b00a0, 0)
            
            _free(result_1)
        else
            result = 0
    
    SetLastError(dwErrCode)
    return result
}
