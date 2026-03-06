// 函数名称: _strcpy_s
// 虚拟地址: 0x52f67d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_strcpy_s(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    void* eax_1
    
    if (arg1 == 0)
        eax_1 = __errno()
        result = 0x16
    else
        int32_t i_1 = arg2
        
        if (i_1 == 0)
            eax_1 = __errno()
            result = 0x16
        else if (arg3 != 0)
            int32_t edi
            int32_t var_c = edi
            char* edi_1 = arg1
            int32_t i
            
            do
                char eax = *(arg3 - arg1 + edi_1)
                *edi_1 = eax
                edi_1 = &edi_1[1]
                
                if (eax == 0)
                    break
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (i_1 != 0)
                return 0
            
            *arg1 = i_1.b
            eax_1 = __errno()
            result = 0x22
        else
            *arg1 = 0
            eax_1 = __errno()
            result = 0x16
    
    *eax_1 = result
    __invalid_parameter_noinfo()
    return result
}
