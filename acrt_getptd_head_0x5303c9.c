// 函数名称: ___acrt_getptd_head
// 虚拟地址: 0x5303c9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*___acrt_getptd_head()
{
    // 第一条实际指令: char* eax_1 = data_5b01d4
    char* eax_1 = data_5b01d4
    
    if (eax_1 == 0xffffffff)
        goto label_5303ef
    
    int32_t* result = ___acrt_FlsGetValue@4(eax_1)
    
    if (result == 0)
        eax_1 = data_5b01d4
    label_5303ef:
        
        if (___acrt_FlsSetValue@8(eax_1, 0xffffffff) != 0)
            int32_t* result_1 = __calloc_base(1, 0x364)
            result = result_1
            
            if (result != 0)
                BOOL eax_3 = ___acrt_FlsSetValue@8(data_5b01d4, result)
                
                if (eax_3 != 0)
                    int32_t* var_8_6 = &data_65a774
                    construct_ptd(result)
                    __free_base(0)
                label_530455:
                    
                    if (result != 0)
                        return result
                else
                    ___acrt_FlsSetValue@8(data_5b01d4, eax_3)
                    __free_base(result)
            else
                ___acrt_FlsSetValue@8(data_5b01d4, result_1)
                __free_base(result)
    else if (result != 0xffffffff)
        goto label_530455
    
    sub_52e289()
    noreturn
}
