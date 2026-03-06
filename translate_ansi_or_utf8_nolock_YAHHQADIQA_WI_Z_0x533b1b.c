// 函数名称: ?translate_ansi_or_utf8_nolock@@YAHHQADIQA_WI@Z
// 虚拟地址: 0x533b1b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?translate_ansi_or_utf8_nolock@@YAHHQADIQA_WI@Z(int32_t arg1, uint8_t* arg2, int32_t arg3, wchar16* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    int32_t result = translate_text_mode_nolock<char>(arg1, arg2, arg3)
    
    if (result != 0)
        int32_t edx_2 = arg1 s>> 6
        int32_t edi
        int32_t var_14_1 = edi
        int32_t edi_1 = (arg1 & 0x3f) * 0x30
        int32_t eax_2 = (&data_65a778)[edx_2]
        
        if (*(edi_1 + eax_2 + 0x29) != 0)
            void* eax_3 = &arg2[result]
            void* esi_1 = eax_3 - 1
            int32_t ecx_1
            ecx_1.b = *esi_1
            
            if (ecx_1.b s< 0)
                uint32_t eax_4 = zx.d(ecx_1.b)
                int32_t edx_3 = 1
                
                while (*(eax_4 + 0x5b02e0) == 0)
                    if (edx_3 u> 4)
                        break
                    
                    if (esi_1 u< arg2)
                        break
                    
                    esi_1 -= 1
                    edx_3 += 1
                    eax_4 = zx.d(*esi_1)
                
                ecx_1.b = *esi_1
                int32_t eax_6 = sx.d(*(zx.d(ecx_1.b) + 0x5b02e0))
                
                if (eax_6 != 0)
                    if (eax_6 + 1 == edx_3)
                        esi_1 += edx_3
                    else if ((*(edi_1 + eax_2 + 0x28) & 0x48) == 0)
                        int32_t eax_12
                        int32_t edx_5
                        edx_5:eax_12 = sx.q(neg.d(edx_3))
                        __lseeki64_nolock(arg1, eax_12, edx_5, FILE_CURRENT)
                    else
                        char* esi_2 = esi_1 + 1
                        *(edi_1 + eax_2 + 0x2a) = ecx_1.b
                        
                        if (edx_3 u>= 2)
                            int32_t eax_9
                            eax_9.b = *esi_2
                            esi_2 = &esi_2[1]
                            *(edi_1 + (&data_65a778)[edx_2] + 0x2b) = eax_9.b
                        
                        if (edx_3 == 3)
                            int32_t eax_10
                            eax_10.b = *esi_2
                            esi_2 = &esi_2[1]
                            *(edi_1 + (&data_65a778)[edx_2] + 0x2c) = eax_10.b
                        
                        esi_1 = esi_2 - edx_3
                    
                    goto label_533c1c
                
                *__errno() = 0x2a
                result = 0xffffffff
            else
                esi_1 = eax_3
            label_533c1c:
                void* esi_3 = esi_1 - arg2
                int32_t eax_13 = ___acrt_MultiByteToWideChar(0xfde9, 0, arg2, esi_3, arg4, arg5)
                
                if (eax_13 != 0)
                    int32_t edx_6 = (&data_65a778)[edx_2]
                    int32_t eax_15
                    eax_15.b = *(edi_1 + edx_6 + 0x2d)
                    eax_15.b &= 0xfd
                    result = eax_13 * 2
                    *(edi_1 + edx_6 + 0x2d) = (((eax_13 == esi_3) - 1) & 2) | eax_15.b
                else
                    ___acrt_errno_map_os_error(GetLastError())
                    result = 0xffffffff
    
    return result
}
