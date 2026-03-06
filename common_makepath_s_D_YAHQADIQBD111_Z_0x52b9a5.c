// 函数名称: ??$common_makepath_s@D@@YAHQADIQBD111@Z
// 虚拟地址: 0x52b9a5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_makepath_s@D@@YAHQADIQBD111@Z(char* arg1, int32_t arg2, char* arg3, char* arg4, char* arg5, char* arg6)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    
    if (arg1 != 0)
        int32_t ecx_1 = arg2
        
        if (ecx_1 != 0)
            void* esi_1 = arg1
            int32_t edi_2 = neg.d(ecx_1 + 1)
            void* edi_4 = sbb.d(edi_2, edi_2, ecx_1 != 0xffffffff) & &arg1[ecx_1]
            
            if (arg3 == 0)
                goto label_52ba05
            
            char edx = *arg3
            
            if (edx == 0)
                goto label_52ba05
            
            int32_t var_14_1
            
            if (edi_4 == 0 || edi_4 - arg1 s>= 2)
                *arg1 = edx
                arg1[1] = 0x3a
                esi_1 = &arg1[2]
            label_52ba05:
                
                if (arg4 == 0 || *arg4 == 0)
                    goto label_52ba56
                
                char* edx_1 = arg4
                char* eax_5
                
                do
                    if (edi_4 != 0 && esi_1 u>= edi_4)
                        goto label_52b9eb_2
                    
                    eax_5.b = *edx_1
                    *esi_1 = eax_5.b
                    esi_1 += 1
                    edx_1 = &edx_1[1]
                while (*edx_1 != 0)
                
                eax_5.b = *__mbsdec(arg4, edx_1)
                
                if (eax_5.b == 0x2f || eax_5.b == 0x5c)
                    goto label_52ba49
                
                if (edi_4 == 0 || esi_1 u< edi_4)
                    *esi_1 = 0x5c
                    esi_1 += 1
                label_52ba49:
                    ecx_1 = arg2
                label_52ba56:
                    
                    if (arg5 != 0 && *arg5 != 0)
                        char* edx_3 = arg5 - esi_1
                        
                        do
                            if (edi_4 != 0 && esi_1 u>= edi_4)
                                goto label_52b9eb_2
                            
                            eax_5.b = *(edx_3 + esi_1)
                            *esi_1 = eax_5.b
                            esi_1 += 1
                        while (*(edx_3 + esi_1) != 0)
                    
                    if (arg6 == 0)
                    label_52baaf:
                        
                        if (edi_4 == 0 || esi_1 u< edi_4)
                            *esi_1 = 0
                            return 0
                        
                    label_52b9eb:
                        var_14_1 = ecx_1
                    else
                        eax_5.b = *arg6
                        
                        if (eax_5.b == 0)
                            goto label_52baaf
                        
                        if (eax_5.b == 0x2e)
                            goto label_52ba91
                        
                        if (edi_4 == 0 || esi_1 u< edi_4)
                            *esi_1 = 0x2e
                            esi_1 += 1
                            eax_5.b = *arg6
                        label_52ba91:
                            
                            if (eax_5.b == 0)
                                goto label_52baaf
                            
                            char* edx_5 = arg6 - esi_1
                            
                            do
                                if (edi_4 != 0 && esi_1 u>= edi_4)
                                    goto label_52b9eb_2
                                
                                eax_5.b = *(edx_5 + esi_1)
                                *esi_1 = eax_5.b
                                esi_1 += 1
                            while (*(edx_5 + esi_1) != 0)
                            
                            goto label_52baaf
                        
                    label_52b9eb_1:
                        var_14_1 = ecx_1
                else
                    var_14_1 = arg2
            else
            label_52b9eb_2:
                var_14_1 = ecx_1
            return cleanup_after_error<char>(arg1)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
