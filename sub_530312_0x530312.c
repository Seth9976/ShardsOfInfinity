// 函数名称: sub_530312
// 虚拟地址: 0x530312
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_530312()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    enum WIN32_ERROR dwErrCode = GetLastError()
    char* eax = data_5b01d4
    
    if (eax == 0xffffffff)
        goto label_530346
    
    int32_t* result = ___acrt_FlsGetValue@4(eax)
    
    if (result == 0)
        eax = data_5b01d4
    label_530346:
        
        if (___acrt_FlsSetValue@8(eax, 0xffffffff) == 0)
            result = nullptr
        else
            int32_t* result_1 = __calloc_base(1, 0x364)
            
            if (result_1 != 0)
                if (___acrt_FlsSetValue@8(data_5b01d4, result_1) != 0)
                    int32_t* var_10_4 = &data_65a774
                    construct_ptd(result_1)
                    __free_base(0)
                    result = result_1
                else
                    result = nullptr
                    ___acrt_FlsSetValue@8(data_5b01d4, 0)
                    __free_base(result_1)
            else
                result = nullptr
                ___acrt_FlsSetValue@8(data_5b01d4, 0)
                __free_base(nullptr)
    else if (result == 0xffffffff)
        result = nullptr
    
    SetLastError(dwErrCode)
    
    if (result != 0)
        return result
    
    sub_52e289()
    noreturn
}
