// 函数名称: sub_4c1b90
// 虚拟地址: 0x4c1b90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4c1b90(int32_t arg1, int32_t arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: void var_128
    void var_128
    int32_t eax_1 = __security_cookie ^ &var_128
    int32_t var_14 = eax_1
    int32_t* ecx = *arg3
    char const* const var_13c
    int32_t var_138
    char const* const var_134
    char* ecx_1
    
    if (ecx[1] != 0x18)
        var_134 = "FlanimGetDef"
        var_138 = 0x2e6
        var_13c = "c:\ax2017\engine\assetutils.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_FLANIM"
    label_4c1e54:
        sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_13c, var_138, var_134)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    void* result_1
    int32_t edx
    result_1, edx = sub_4459f0(ecx)
    int128_t var_f0
    int128_t* eax_3 = sub_45c3f0(&var_f0, edx, arg4, &var_f0)
    int32_t* esi_1 = arg3
    int32_t edx_1 = esi_1[0x1e]
    int128_t var_b0 = *eax_3
    int128_t var_a0_1 = eax_3[1]
    int128_t var_90_1 = eax_3[2]
    int128_t var_80_1 = eax_3[3]
    float var_68
    int32_t* edx_3
    
    if (edx_1 == 0xffffffff)
        edx_3 = &esi_1[8]
    else
        sub_4c31d0(&var_68, edx_1, esi_1, &var_68)
        __builtin_memcpy(&var_f0, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        var_f0:0xc.d = var_68 ^ (data_59e5c0.o).d
        int128_t var_e0
        int32_t var_64
        var_e0:0xc.d = var_64 ^ (data_59e5c0.o).d
        float* eax_6 = sub_45c930(&var_68, &var_f0, &esi_1[8], &var_68)
        edx_3 = &var_f0
        var_f0 = *eax_6
        int128_t var_e0_1 = *(eax_6 + 0x10)
        int128_t var_d0_1 = *(eax_6 + 0x20)
        int128_t var_c0_1 = *(eax_6 + 0x30)
    
    float* eax_8 = sub_45c930(&var_68, edx_3, &var_b0, &var_68)
    int32_t edi_1 = 0
    int32_t var_118_1 = 0
    var_f0 = *eax_8
    int128_t var_e0_2 = *(eax_8 + 0x10)
    int128_t var_d0_2 = *(eax_8 + 0x20)
    void* result = result_1
    int128_t var_c0_2 = *(eax_8 + 0x30)
    
    if (*(result + 0x14) s> 0)
        int32_t eax_9 = 0
        int32_t var_124_1 = 0
        
        while (true)
            void* esi_3 = esi_1[0x1a] + eax_9
            
            if (*(esi_3 + 0x54) == 0)
                sub_4c17e0(&var_f0, edi_1, arg3, &var_f0)
                int32_t ecx_7 = *(esi_3 + 0x5c)
                
                if (ecx_7 != 0)
                    void* var_10c_1 = esi_3 + 0x5c
                    void* eax_11 = sub_4d5c60(ecx_7)
                    int64_t xmm0_17 = eax_11.q
                    int32_t ecx_8 = 0.d
                    int32_t var_f4_1 = ecx_8
                    
                    if (eax_11 != 0)
                        void* edi_2 = xmm0_17:4.d
                        eax_11.b = ecx_8.b
                        int32_t* i = xmm0_17.d
                        char var_125_1 = eax_11.b
                        
                        do
                            int32_t eax_12 = *i
                            
                            if (eax_12 == 1)
                                void* eax_15 = sub_495430(i[1])
                                
                                if (eax_15 != 0)
                                    sub_49ee40(eax_15, arg4)
                            else
                                eax_1 = eax_12 - 2
                                
                                if (eax_12 != 2)
                                    var_134 = "AttachmentDrawOne"
                                    var_138 = 0x17a
                                    var_13c = "c:\ax2017\engine\attachment.cpp"
                                    ecx_1 = "Halt"
                                    goto label_4c1e54
                                
                                if (sub_4c0f50(i[2]) != 0)
                                    sub_4c1b90(arg4)
                            
                            if (var_125_1 == 0)
                                edi_2 = &i[3]
                            else
                                var_125_1 = 0
                            
                            i = sub_4d5c60(*edi_2)
                        while (i != 0)
                        
                        edi_1 = var_118_1
            
            result = result_1
            edi_1 += 1
            var_124_1 += 0x60
            var_118_1 = edi_1
            
            if (edi_1 s>= *(result + 0x14))
                break
            
            eax_9 = var_124_1
            esi_1 = arg3
    
    @__security_check_cookie@4(var_14 ^ &var_128)
    return result
}
