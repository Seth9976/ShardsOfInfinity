// 函数名称: ??$common_tcsncpy_s@D@@YAHQADIQBDI@Z
// 虚拟地址: 0x534407
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_tcsncpy_s@D@@YAHQADIQBDI@Z(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char* ecx = arg1
    char* ecx = arg1
    
    if (arg4 != 0)
        if (ecx == 0 || arg2 == 0)
            goto label_534442
        
    label_534433:
        
        if (arg4 != 0)
            int32_t result
            void* eax_2
            
            if (arg3 == 0)
                *ecx = arg3.b
            label_534442:
                eax_2 = __errno()
                result = 0x16
            label_53444a:
                *eax_2 = result
                __invalid_parameter_noinfo()
                return result
            
            void* ebx_1 = arg3 - ecx
            char* edx_1 = ecx
            int32_t edi
            int32_t var_10_1 = edi
            int32_t i_3 = arg2
            int32_t eax_1
            
            if (arg4 != 0xffffffff)
                int32_t i_2 = arg4
                int32_t i
                
                do
                    eax_1.b = *(ebx_1 + edx_1)
                    *edx_1 = eax_1.b
                    edx_1 = &edx_1[1]
                    
                    if (eax_1.b == 0)
                        break
                    
                    int32_t i_4 = i_3
                    i_3 -= 1
                    
                    if (i_4 == 1)
                        break
                    
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                ecx = arg1
                
                if (i_2 == 0)
                    *edx_1 = 0
            else
                int32_t i_1
                
                do
                    eax_1.b = *(ebx_1 + edx_1)
                    *edx_1 = eax_1.b
                    edx_1 = &edx_1[1]
                    
                    if (eax_1.b == 0)
                        break
                    
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            if (i_3 == 0)
                if (arg4 == 0xffffffff)
                    ecx[arg2 - 1] = 0
                    return 0x50
                
                *ecx = 0
                eax_2 = __errno()
                result = 0x22
                goto label_53444a
        else
            *ecx = 0
    else
        if (ecx != 0)
            if (arg2 == 0)
                goto label_534442
            
            goto label_534433
        
        if (arg2 != arg4)
            goto label_534442
    
    return 0
}
