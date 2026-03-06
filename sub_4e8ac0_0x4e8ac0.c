// 函数名称: sub_4e8ac0
// 虚拟地址: 0x4e8ac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4e8ac0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_18c
    int32_t var_18c
    int32_t eax_1 = __security_cookie ^ &var_18c
    int32_t* edi = arg2
    int32_t* var_180 = edi
    uint32_t (* eax_3)[0x4] = sub_4ebea0(arg1 + 0x38)
    int32_t i = 0x1e
    *eax_3 = 5
    uint32_t* var_188 = &(*eax_3)[0xd]
    uint32_t* ebx = &(*eax_3)[0x15]
    int32_t var_1a0_2
    int32_t eax_5
    
    do
        eax_5 = *edi
        int32_t edx_1 = 0
        var_18c = eax_5
        
        if (eax_5 s> 0)
            int32_t* ecx_2 = edi[1]
            
            do
                int32_t edi_1 = *ecx_2
                eax_5 = i - 2
                
                if (edi_1 u>= eax_5)
                    eax_5 = i + 3
                    
                    if (edi_1 u<= eax_5)
                        _memset(ebx, 0, 0x34)
                        edi = var_180
                        ebx[1] = sub_4b88a0(i - 2, edi, &data_5b6224, i - 2)
                        int32_t eax_13 = sub_4b88a0(i - 1, edi, &data_5b6224, i - 1)
                        ebx[2] = eax_13
                        ebx[3] = sub_4b88a0(eax_13, edi, &data_5b6224, i)
                        int32_t eax_16 = sub_4b88a0(i + 1, edi, &data_5b6224, i + 1)
                        var_18c = eax_16
                        uint32_t eax_17 = sub_4b88a0(eax_16, edi, &data_5b6224, i + 2)
                        int32_t eax_18 = sub_4b88a0(eax_17, edi, &data_5b6224, i + 3)
                        int32_t edx_12 = var_18c
                        
                        if (eax_18 == 0)
                            eax_18 = 1
                        
                        uint32_t eax_19
                        
                        if (edx_12 != 1)
                            if (edx_12 != 2)
                                if (edx_12 != 3)
                                label_4e8d3f:
                                    sub_44e260("unknown dx11 filter type")
                                    edx_12 = var_18c
                                    eax_19 = 0
                                else
                                    eax_19 = edx_12 + 0x52
                            else if (eax_17 != 1)
                                if (eax_17 != 2)
                                    goto label_4e8d3f
                                
                                if (eax_18 != 1)
                                    if (eax_18 != 2)
                                        goto label_4e8d3f
                                    
                                    eax_19 = 0x15
                                else
                                    eax_19 = eax_17 + 0x12
                            else if (eax_18 != eax_17)
                                if (eax_18 != 2)
                                    goto label_4e8d3f
                                
                                eax_19 = 0x11
                            else
                                eax_19 = edx_12 + 0xe
                        else if (eax_17 != 1)
                            if (eax_17 != 2)
                                goto label_4e8d3f
                            
                            if (eax_18 != 1)
                                if (eax_18 != 2)
                                    goto label_4e8d3f
                                
                                eax_19 = 5
                            else
                                eax_19 = eax_17 + 2
                        else if (eax_18 == eax_17)
                            eax_19 = 0
                        else
                            if (eax_18 != 2)
                                goto label_4e8d3f
                            
                            eax_19 = eax_17
                        
                        *ebx = eax_19
                        int32_t eax_20 = 0
                        ebx[0xb] = 0
                        ebx[0xc] = 0x41700000
                        ebx[6] = 1
                        
                        if (edx_12 == 3)
                            eax_20 = 4
                        
                        ebx[4] = 0xbf000000
                        ebx[5] = eax_20
                        int32_t* eax_22 = *(arg1 + 4)
                        eax_5 = (*(*eax_22 + 0x5c))(eax_22, ebx, var_188)
                        
                        if (eax_5 s>= 0)
                            goto label_4e8b42
                        
                        char const* const var_19c_10 = "Dx11GraphicsInterface::CreateMaterialBuffer"
                        var_1a0_2 = 0x46f
                        goto label_4e90d2
                
                edx_1 += 1
                ecx_2 = &ecx_2[2]
            while (edx_1 s< var_18c)
            
            edi = var_180
        
    label_4e8b42:
        var_188 = &var_188[1]
        i += 6
        ebx = &ebx[0xd]
    while (i s< 0x4e)
    
    int32_t var_150_1 = 1
    int64_t var_174
    __builtin_memset(&var_174, 0, 0x18)
    int64_t var_158_1 = 0
    int32_t var_15c_1 = 1
    int32_t eax_6 = sub_4b88a0(eax_5, edi, &data_5b6224, 5)
    var_174:4.d = eax_6
    int32_t eax_7 = sub_4b88a0(eax_6, edi, &data_5b6224, 0x19)
    var_174.d = eax_7
    int64_t var_16c
    var_16c.d = 0
    var_16c:4.d = 0
    int64_t var_164
    var_164.d = 0
    var_164:4.d = sub_4b89b0(eax_7, edi, &data_5b6224, 0x18)
    var_158_1.d = 0
    int32_t* ecx_3 = *(arg1 + 4)
    int32_t eax_8
    eax_8.b = *(arg1 + 0x60) != 0
    var_158_1:4.d = eax_8
    eax_5 = (*(*ecx_3 + 0x58))(ecx_3, &var_174, &(*eax_3)[0x7d])
    
    if (eax_5 s>= 0)
        int32_t* ecx_9 = *(arg1 + 4)
        var_16c.d = 1
        eax_5 = (*(*ecx_9 + 0x58))(ecx_9, &var_174, &(*eax_3)[0x7e])
        
        if (eax_5 s>= 0)
            uint32_t var_14c
            uint32_t eax_26 = zx.d(sub_4b8920(_memset(&var_14c, 0, 0x34), edi, &data_5b6224, 0))
            var_14c = eax_26
            int32_t eax_27 = sub_4b88a0(eax_26, edi, &data_5b6224, 6)
            int32_t var_144_1 = eax_27
            uint32_t eax_29 = zx.d(sub_4b8920(eax_27, edi, &data_5b6224, 1))
            uint32_t var_148_1 = eax_29
            uint32_t eax_31 = zx.d(sub_4b8920(eax_29, edi, &data_5b6224, 0xa))
            uint32_t var_140_1 = eax_31
            int32_t eax_32 = sub_4b88a0(eax_31, edi, &data_5b6224, 0x10)
            char var_13c_1 = eax_32.b
            int32_t eax_33 = sub_4b88a0(eax_32, edi, &data_5b6224, 0x11)
            char var_13b_1 = eax_33.b
            int32_t eax_34 = sub_4b88a0(eax_33, edi, &data_5b6224, 0xb)
            int32_t var_138_1 = eax_34
            int32_t eax_35 = sub_4b88a0(eax_34, edi, &data_5b6224, 0xc)
            int32_t var_134_1 = eax_35
            int32_t eax_36 = sub_4b88a0(eax_35, edi, &data_5b6224, 0xd)
            int32_t var_130_1 = eax_36
            int32_t eax_37 = sub_4b88a0(eax_36, edi, &data_5b6224, 0xe)
            int32_t var_12c_1 = eax_37
            int32_t eax_38 = sub_4b88a0(eax_37, edi, &data_5b6224, 0x12)
            int32_t var_128_1 = eax_38
            int32_t eax_39 = sub_4b88a0(eax_38, edi, &data_5b6224, 0x13)
            int32_t var_124_1 = eax_39
            int32_t eax_40 = sub_4b88a0(eax_39, edi, &data_5b6224, 0x14)
            int32_t var_120_1 = eax_40
            int32_t eax_41 = sub_4b88a0(eax_40, edi, &data_5b6224, 0x15)
            int32_t* ecx_10 = *(arg1 + 4)
            int32_t var_11c_1 = eax_41
            eax_5 = (*(*ecx_10 + 0x54))(ecx_10, &var_14c, &(*eax_3)[0x7f])
            
            if (eax_5 s>= 0)
                uint32_t var_f3[0xe][0x4]
                uint32_t eax_45 = zx.d(sub_4b8920(_memset(&var_f3, 0, 0xe3), edi, &data_5b6224, 2))
                uint32_t var_118 = eax_45
                int32_t var_114_1 = 0
                uint32_t eax_47 = zx.d(sub_4b8920(eax_45, edi, &data_5b6224, 9))
                uint32_t var_110_1 = eax_47
                int32_t eax_48 = sub_4b88a0(eax_47, edi, &data_5b6224, 0x17)
                int32_t eax_49 = sub_4b88a0(eax_48, edi, &data_5b6224, 3)
                int32_t eax_50 = sub_4b88a0(eax_49, edi, &data_5b6224, 4)
                int32_t eax_51 = sub_4b88a0(eax_50, edi, &data_5b6224, 0x16)
                char var_f4_1 = eax_51.b
                int32_t eax_52 = sub_4b8920(eax_51, edi, &data_5b6224, 0x4d)
                int32_t eax_55
                
                if (eax_52.b == 0)
                    int32_t var_100_2 = sub_4e8a60(eax_49)
                    int32_t var_fc_2 = sub_4e8a60(eax_50)
                    eax_55 = eax_48
                else
                    int32_t eax_53 = sub_4b88a0(eax_52, edi, &data_5b6224, 0x4e)
                    int32_t var_100_1 = eax_53
                    int32_t eax_54 = sub_4b88a0(eax_53, edi, &data_5b6224, 0x4f)
                    int32_t var_fc_1 = eax_54
                    eax_55 = sub_4b88a0(eax_54, edi, &data_5b6224, 0x50)
                
                int32_t* ecx_13 = *(arg1 + 4)
                int32_t var_f8_1 = eax_55
                eax_5 = (*(*ecx_13 + 0x50))(ecx_13, &var_118, &eax_3[0x20])
                
                if (eax_5 s>= 0)
                    uint32_t result = (*eax_3)[0x92]
                    @__security_check_cookie@4(eax_1 ^ &var_18c)
                    return result
                
                char const* const var_19c_16 = "Dx11GraphicsInterface::CreateMaterialBuffer"
                var_1a0_2 = 0x4b4
            else
                char const* const var_19c_14 = "Dx11GraphicsInterface::CreateMaterialBuffer"
                var_1a0_2 = 0x49a
        else
            char const* const var_19c_12 = "Dx11GraphicsInterface::CreateMaterialBuffer"
            var_1a0_2 = 0x486
    else
        char const* const var_19c_2 = "Dx11GraphicsInterface::CreateMaterialBuffer"
        var_1a0_2 = 0x481
    
    label_4e90d2:
    sub_44e4d0(eax_5, &data_5559b1, "SUCCEEDED(hr)", "c:\ax2017\engine\windows\windowsdx11.cpp", 
        var_1a0_2, "Dx11GraphicsInterface::CreateMaterialBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
