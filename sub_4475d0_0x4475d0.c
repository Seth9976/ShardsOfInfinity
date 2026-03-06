// 函数名称: sub_4475d0
// 虚拟地址: 0x4475d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4475d0(int32_t arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* result
    void* result
    
    if (*(*(arg4 + 0x10) + 0x28) == 2 && *(sub_445af0(arg3, *(arg4 + 4)) + 8) s> 0)
        void var_14
        char eax_1
        int32_t ecx_1
        eax_1, ecx_1 = sub_4473e0(&var_14, arg4, arg3, 0xc, &var_14)
        
        if (eax_1 == 0)
        label_44763d:
            int32_t var_24_2 = ecx_1
            
            if (sub_447450(arg3, *(arg4 + 4)) != 0)
                int32_t ecx_5 = 0
                result = *(arg4 + 0x10) + 0x34
                
                while (*result != 0x16)
                    ecx_5 += 1
                    result += 0xc
                    
                    if (ecx_5 s>= 4)
                        goto label_447662
            
            if (*(*(arg4 + 0x10) + 0x28) == 2
                    && *(sub_445b50(arg3, arg2) + 0x14) s>= *(*(arg4 + 0x10) + 0x2c))
                result.b = 1
                return result
        else
            int32_t ebx_1 = *(arg4 + 4)
            result = sub_447380(arg3, &var_14)
            
            if ((*result & 0x4000000) != 0)
                result, ecx_1 = sub_447510(result, ebx_1, arg3, 0x29)
                
                if (result.b == 0)
                    goto label_44763d
    
    label_447662:
    result.b = 0
    return result
}
