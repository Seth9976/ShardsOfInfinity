// 函数名称: ___acrt_release_locale_ref
// 虚拟地址: 0x538062
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___acrt_release_locale_ref(void* arg1)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    
    if (result != 0)
        *(result + 0xc) -= 1
        int32_t* ecx_1 = *(result + 0x7c)
        
        if (ecx_1 != 0)
            *ecx_1 -= 1
        
        int32_t* ecx_2 = *(result + 0x84)
        
        if (ecx_2 != 0)
            *ecx_2 -= 1
        
        int32_t* ecx_3 = *(result + 0x80)
        
        if (ecx_3 != 0)
            *ecx_3 -= 1
        
        int32_t* ecx_4 = *(result + 0x8c)
        
        if (ecx_4 != 0)
            *ecx_4 -= 1
        
        void* ecx_5 = result + 0x28
        int32_t i_1 = 6
        int32_t i
        
        do
            if (*(ecx_5 - 8) != &data_5b0298)
                int32_t* edx_1 = *ecx_5
                
                if (edx_1 != 0)
                    *edx_1 -= 1
            
            if (*(ecx_5 - 0xc) != 0)
                int32_t* edx_2 = *(ecx_5 - 4)
                
                if (edx_2 != 0)
                    *edx_2 -= 1
            
            ecx_5 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = ___acrt_locale_release_lc_time_reference(*(result + 0x9c))
    
    return result
}
