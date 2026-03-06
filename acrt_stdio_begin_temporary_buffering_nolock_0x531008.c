// 函数名称: ___acrt_stdio_begin_temporary_buffering_nolock
// 虚拟地址: 0x531008
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___acrt_stdio_begin_temporary_buffering_nolock(int32_t* arg1)
{
    // 第一条实际指令: void* result
    void* result
    
    if (__isatty(__fileno(arg1)) != 0)
        int32_t edi
        int32_t var_10_1 = edi
        int32_t* edi_1
        
        if (arg1 != ___acrt_iob_func(1))
            if (arg1 == ___acrt_iob_func(2))
                edi_1 = &data_65a770
                goto label_531052
            
            result.b = 0
        else
            edi_1 = &data_65a76c
        label_531052:
            data_65a3cc += 1
            
            if ((arg1[3] & 0x4c0) != 0)
                result.b = 0
            else
                arg1[3] |= 0x282
                result = *edi_1
                
                if (result != 0)
                label_53109f:
                    arg1[1] = result
                    *arg1 = *edi_1
                    arg1[2] = 0x1000
                    arg1[6] = 0x1000
                else
                    *edi_1 = __malloc_base(0x1000)
                    __free_base(0)
                    result = *edi_1
                    
                    if (result != 0)
                        goto label_53109f
                    
                    arg1[2] = 2
                    arg1[1] = &arg1[5]
                    *arg1 = &arg1[5]
                    arg1[6] = 2
                
                result.b = 1
    else
        result.b = 0
    
    return result
}
