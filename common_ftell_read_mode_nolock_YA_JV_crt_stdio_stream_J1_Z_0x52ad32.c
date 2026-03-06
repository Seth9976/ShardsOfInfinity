// 函数名称: ?common_ftell_read_mode_nolock@@YA_JV__crt_stdio_stream@@_J1@Z
// 虚拟地址: 0x52ad32
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?common_ftell_read_mode_nolock@@YA_JV__crt_stdio_stream@@_J1@Z(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_30 = edi
    int32_t eax = __fileno(arg1)
    int32_t var_18 = 2
    int32_t edx_1 = eax s>> 6
    int32_t ecx_2 = (eax & 0x3f) * 0x30
    int32_t ebx = 1
    int32_t eax_1 = (&data_65a778)[edx_1]
    int32_t var_24 = eax_1
    eax_1.b = *(ecx_2 + eax_1 + 0x29)
    char var_14 = eax_1.b
    
    if (eax_1.b != 1)
        var_18 = 1
    
    int32_t ecx_3 = arg1[2]
    int32_t result
    
    if (ecx_3 != 0)
        int32_t eax_4
        int32_t edx_3
        edx_3:eax_4 = sx.q(*arg1 - arg1[1])
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = sx.q(ecx_3)
        int32_t esi_2 = eax_4 + eax_6
        uint32_t ecx_7 = adc.d(edx_3, edx_4, eax_4 + eax_6 u< eax_4)
        int32_t var_44_1
        uint32_t var_40_1
        int32_t var_3c_1
        int32_t ebx_1
        
        if (*(ecx_2 + var_24 + 0x28) s< 0)
            int32_t eax_8
            int32_t edx_6
            eax_8, edx_6 = __lseeki64(eax, 0, 0, FILE_END)
            void* eax_14
            uint32_t ecx_10
            
            if (eax_8 != arg2 || edx_6 != arg3)
                int32_t eax_15
                int32_t edx_8
                eax_15, edx_8 = __lseeki64(eax, arg2, arg3, FILE_BEGIN)
                
                if ((eax_15 & edx_8) == 0xffffffff)
                    return 0xffffffff
                
                uint32_t var_8_2
                uint32_t edx_9
                
                if (ecx_7 s> 0)
                    edx_9:eax_14 = sx.q(arg1[6])
                    var_8_2 = edx_9
                else if (ecx_7 s< 0)
                    if ((1 & (arg1[3] u>> 6).b) == 0 || (1 & (arg1[3] u>> 8).b) != 0)
                        edx_9:eax_14 = sx.q(arg1[6])
                        var_8_2 = edx_9
                    else
                        eax_14 = 0x200
                        var_8_2 = 0
                else if (esi_2 u> 0x200 || (1 & (arg1[3] u>> 6).b) == 0 || (1 & (arg1[3] u>> 8).b) != 0)
                    edx_9:eax_14 = sx.q(arg1[6])
                    var_8_2 = edx_9
                else
                    eax_14 = 0x200
                    var_8_2 = 0
                
                if ((*(ecx_2 + (&data_65a778)[edx_1] + 0x28) & 4) == 0)
                    ecx_10 = var_8_2
                else
                    int32_t edx_10
                    edx_10.b = var_14
                    
                    if (edx_10.b == 1 || edx_10.b == 2)
                        ebx = 2
                    
                    ecx_10 = var_8_2
                label_52ae29:
                    void* temp6_1 = eax_14
                    eax_14 += ebx
                    ecx_10 = adc.d(ecx_10, 0, temp6_1 + ebx u< temp6_1)
            else
                char* ecx_8 = arg1[1]
                int32_t eax_11
                int32_t edx_7
                eax_11, edx_7 = count_newline_bytes(0, ecx_8, &ecx_8[esi_2], var_14)
                void* var_c_2 = esi_2 + eax_11
                ecx_10 = adc.d(ecx_7, edx_7, esi_2 + eax_11 u< esi_2)
                
                if ((1 & (arg1[3] u>> 5).b) != 0)
                    edx_7.b = var_14
                    
                    if (edx_7.b == 1 || edx_7.b == 2)
                        ebx = 2
                    
                    eax_14 = var_c_2
                    goto label_52ae29
                
                eax_14 = var_c_2
            
            int32_t var_38_3 = 0
            ebx_1 = var_18
            var_3c_1 = ebx_1
            var_40_1 = ecx_10
            var_44_1 = eax_14
        else
            int32_t var_38_1 = 0
            ebx_1 = var_18
            var_3c_1 = ebx_1
            var_40_1 = ecx_7
            var_44_1 = esi_2
        
        uint32_t eax_25
        int32_t edx_11
        eax_25, edx_11 = __alldiv(var_44_1, var_40_1, var_3c_1, 0)
        uint32_t eax_26
        int32_t edx_12
        eax_26, edx_12 = __alldiv(arg4, arg5, ebx_1, 0)
        result = eax_26 - eax_25 + arg2
    else
        result = arg2
    
    return result
}
