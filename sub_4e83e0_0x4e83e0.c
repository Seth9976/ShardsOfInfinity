// 函数名称: sub_4e83e0
// 虚拟地址: 0x4e83e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4e83e0(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5460e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_120 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t SrcDataSize_1
    int32_t* var_124 = &SrcDataSize_1
    int32_t* var_4c
    sub_42ce10(&var_4c, arg2, 4)
    int32_t var_8_1 = 0
    int32_t esi = SrcDataSize_1 + arg3 * 0x14
    void* eax_5 = *(esi + 4)
    uint32_t result
    
    if (eax_5 != 0)
        int32_t pSrcData = *(eax_5 + 0x14)
        SrcDataSize_1 = *(eax_5 + 0x10)
        uint32_t (* eax_8)[0x4] = sub_4ebea0(arg1 + 0x38)
        uint32_t (* esi_1)[0x4]
        uint32_t SrcDataSize
        
        if (arg3 == 0)
            SrcDataSize = SrcDataSize_1
            *eax_8 = 3
            int32_t* ecx_12 = *(arg1 + 4)
            
            if ((*(*ecx_12 + 0x30))(ecx_12, pSrcData, SrcDataSize, 0, &(*eax_8)[0xa]) s>= 0)
            label_4e8522:
                int32_t* ppReflector = nullptr
                HRESULT eax_17 = D3DReflect(pSrcData, SrcDataSize, &data_54c660, &ppReflector)
                
                if (eax_17 s< 0)
                    sub_44e4d0(eax_17, &data_5559b1, "SUCCEEDED(hr)", 
                        "c:\ax2017\engine\windows\windowsdx11.cpp", 0x358, 
                        "Dx11GraphicsInterface::CreateShaderBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t* ppReflector_1 = ppReflector
                void var_110
                (*(*ppReflector_1 + 0xc))(ppReflector_1, &var_110)
                int32_t var_100
                int32_t ebx_1 = var_100
                int32_t var_40_1 = ebx_1
                int32_t var_104
                int32_t var_28
                int32_t var_20
                
                if (var_104 != 0)
                    if (var_104 != 1)
                        sub_44e4d0(var_104, &data_5559b1, "shaderDesc.ConstantBuffers == 1", 
                            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x361, 
                            "Dx11GraphicsInterface::CreateShaderBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t* ppReflector_2 = ppReflector
                    int32_t* eax_19 = (*(*ppReflector_2 + 0x10))(ppReflector_2, 0)
                    int32_t eax_20 = (**eax_19)(eax_19, &var_28)
                    
                    if (eax_20 s< 0)
                        sub_44e4d0(eax_20, &data_5559b1, "SUCCEEDED(hr)", 
                            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x367, 
                            "Dx11GraphicsInterface::CreateShaderBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    ebx_1 += var_20
                    var_40_1 = ebx_1
                
                *(esi + 0x10) = sub_45ce00(ebx_1 * 0xc)
                *(esi + 0xc) = 0
                SrcDataSize_1 = 0
                
                if (var_104 != 0)
                    if (var_104 != 1)
                        sub_44e4d0(var_104, &data_5559b1, "shaderDesc.ConstantBuffers == 1", 
                            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x375, 
                            "Dx11GraphicsInterface::CreateShaderBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t* ppReflector_3 = ppReflector
                    int32_t* eax_23 = (*(*ppReflector_3 + 0x10))(ppReflector_3, 0)
                    int32_t eax_24 = (**eax_23)(eax_23, &var_28)
                    
                    if (eax_24 s< 0)
                        sub_44e4d0(eax_24, &data_5559b1, "SUCCEEDED(hr)", 
                            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x37b, 
                            "Dx11GraphicsInterface::CreateShaderBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t edi_3 = 0
                    
                    if (var_20 u> 0)
                        do
                            int32_t* eax_26 = (*(*eax_23 + 4))(eax_23, edi_3)
                            char* var_78
                            (**eax_26)(eax_26, &var_78)
                            int32_t eax_27 = sub_4b8d10(&data_5b6224, var_78)
                            
                            if (eax_27 != 0xffffffff)
                                int32_t eax_28 = *(esi + 0xc)
                                
                                if (eax_28 s>= ebx_1)
                                    sub_44e4d0(eax_28, &data_5559b1, 
                                        "constantTable->constantCount < maxConstants", 
                                        "c:\ax2017\engine\windows\windowsdx11.cpp", 0x38b, 
                                        "Dx11GraphicsInterface::CreateShaderBuffer")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                int32_t* edx_4 = *(esi + 0x10) + eax_28 * 0xc
                                uint32_t SrcDataSize_2 = SrcDataSize_1
                                edx_4[2] = eax_27
                                int32_t var_74
                                *edx_4 = var_74
                                int32_t var_70
                                edx_4[1] = var_70
                                *(esi + 0xc) += 1
                                uint32_t SrcDataSize_5 = edx_4[1] + *edx_4
                                
                                if (SrcDataSize_2 s<= SrcDataSize_5)
                                    SrcDataSize_2 = SrcDataSize_5
                                
                                SrcDataSize_1 = SrcDataSize_2
                            else
                                char* var_124_11 = var_78
                                sub_44e260("Dx11 Unknown shader constant '%s'")
                            
                            edi_3 += 1
                        while (edi_3 u< var_20)
                
                int32_t edi_4 = 0
                uint32_t SrcDataSize_4
                
                if (var_100 s> 0)
                    do
                        int32_t* ppReflector_4 = ppReflector
                        char* var_34
                        int32_t eax_34 = (*(*ppReflector_4 + 0x18))(ppReflector_4, edi_4, &var_34)
                        
                        if (eax_34 s< 0)
                            sub_44e4d0(eax_34, &data_5559b1, "SUCCEEDED(hr)", 
                                "c:\ax2017\engine\windows\windowsdx11.cpp", 0x39c, 
                                "Dx11GraphicsInterface::CreateShaderBuffer")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        int32_t var_30
                        
                        if (var_30 == 2)
                            int32_t eax_35 = sub_4b8d10(&data_5b6224, var_34)
                            
                            if (eax_35 != 0xffffffff)
                                if (*(sub_4b8c10(&data_5b6224, eax_35) + 0x10) == 0xf)
                                    int32_t eax_37 = *(esi + 0xc)
                                    
                                    if (eax_37 s>= var_40_1)
                                        sub_44e4d0(eax_37, &data_5559b1, 
                                            "constantTable->constantCount < maxConstants", 
                                            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x3ae, 
                                            "Dx11GraphicsInterface::CreateShaderBuffer")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    int32_t ecx_25 = eax_37 * 3
                                    int32_t eax_38 = *(esi + 0x10)
                                    *(eax_38 + (ecx_25 << 2) + 8) = eax_35
                                    uint32_t* ecx_26 = eax_38 + (ecx_25 << 2)
                                    *ecx_26 = SrcDataSize_4
                                    ecx_26[1] = 0
                                    *(esi + 0xc) += 1
                                else
                                    char* var_124_14 = var_34
                                    sub_44e260("Dx11 shader variable '%s' isn't a texture")
                            else
                                char* var_124_13 = var_34
                                sub_44e260("Dx11 Unknown texture '%s'")
                        
                        edi_4 += 1
                    while (edi_4 s< var_100)
                
                if (*(esi + 0xc) == 0)
                    int32_t eax_40 = *(esi + 0x10)
                    
                    if (eax_40 != 0)
                        _aligned_free_base(eax_40)
                    
                    *(esi + 0x10) = 0
                
                uint32_t SrcDataSize_3 = SrcDataSize_1
                
                if (SrcDataSize_3 s<= 0)
                    esi_1 = eax_8
                else
                    int32_t edx_8 = SrcDataSize_3 & 0x8000000f
                    bool cond:0_1 = edx_8 == 0
                    
                    if (edx_8 s< 0)
                        int32_t edx_10 = (edx_8 - 1) | 0xfffffff0
                        edx_8 = edx_10 + 1
                        cond:0_1 = edx_10 == 0xffffffff
                    
                    if (not(cond:0_1))
                        SrcDataSize_3 += 0x10 - edx_8
                    
                    esi_1 = eax_8
                    SrcDataSize_4 = SrcDataSize_3
                    int64_t var_1c_1 = 0
                    int32_t* ecx_27 = *(arg1 + 4)
                    var_28 = 2
                    int32_t var_24_1 = 4
                    int32_t var_20_1 = 0x10000
                    int32_t eax_44 = (*(*ecx_27 + 0xc))(ecx_27, &SrcDataSize_4, 0, &(*esi_1)[6])
                    
                    if (eax_44 s< 0)
                        sub_44e4d0(eax_44, &data_5559b1, "SUCCEEDED(hr)", 
                            "c:\ax2017\engine\windows\windowsdx11.cpp", 0x3d0, 
                            "Dx11GraphicsInterface::CreateShaderBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
            else
                char* const ecx_13 = &data_5559b1
                char* eax_16 = arg2[8]
                
                if (eax_16 != 0)
                    ecx_13 = eax_16
                
                char* const var_124_4 = ecx_13
                sub_44e260("failed to load vertex shader %s")
                esi_1 = eax_8
        else
            if (arg3 != 1)
                sub_44e4d0(eax_8, &data_5559b1, "Halt", "c:\ax2017\engine\windows\windowsdx11.cpp", 
                    0x353, "Dx11GraphicsInterface::CreateShaderBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            *eax_8 = 4
            int32_t* ecx_5 = *(arg1 + 4)
            SrcDataSize = SrcDataSize_1
            
            if ((*(*ecx_5 + 0x3c))(ecx_5, pSrcData, SrcDataSize, arg3 - 1, &(*eax_8)[0xb]) s>= 0)
                goto label_4e8522
            
            char* const ecx_6 = &data_5559b1
            char* eax_12 = arg2[8]
            
            if (eax_12 != 0)
                ecx_6 = eax_12
            
            char* const var_124_2 = ecx_6
            sub_44e260("failed to load pixel shader %s")
            esi_1 = eax_8
        int32_t* ecx_7 = var_4c
        result = (*esi_1)[0x92]
        
        if (ecx_7 != 0)
            ecx_7[7] -= 1
    else
        int32_t* eax_6 = var_4c
        
        if (eax_6 != 0)
            eax_6[7] -= 1
        
        result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
