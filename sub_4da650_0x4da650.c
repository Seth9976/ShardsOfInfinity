// 函数名称: sub_4da650
// 虚拟地址: 0x4da650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4da650(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t result_1 = 0
    
    if (arg2 s> 0)
        void* esi_1 = data_ce26e8
        
        while (true)
            int32_t edi_1 = result * 5
            uint32_t eax = *(arg1 + (edi_1 << 2))
            int32_t var_24_8
            
            if (eax u> 0x50)
            label_4dac80:
                char const* const var_20_24 = "GLSetFunctionRenderState"
                var_24_8 = 0xffa
            label_4dac99:
                sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\openglgraphics.cpp", var_24_8, 
                    "GLSetFunctionRenderState")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            eax = zx.d(lookup_table_4dad30[eax])
            
            switch (eax)
                case 0
                    int32_t edi_3 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x402c) != edi_3)
                        if (edi_3 == 0)
                            glDisable(0xb71)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x402c) = edi_3
                        else
                            glEnable(0xb71)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x402c) = edi_3
                    
                    goto label_4dabd0
                case 1
                    int32_t eax_1 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x4050) == eax_1)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4050) = eax_1
                    glDepthMask(*(arg1 + (edi_1 << 2) + 4))
                label_4dabc1:
                    esi_1 = data_ce26e8
                label_4dabd0:
                    result = result_1 + 1
                    result_1 = result
                    
                    if (result s>= arg2)
                        break
                    
                    continue
                case 2
                    if (*(data_65ae00 + 0x1c) != 0)
                        int32_t edi_4 = *(arg1 + (edi_1 << 2) + 4)
                        
                        if (*(esi_1 + 0x4034) != edi_4)
                            if (edi_4 == 0)
                                glDisable(0x809e)
                                esi_1 = data_ce26e8
                                *(esi_1 + 0x4034) = edi_4
                            else
                                glEnable(0x809e)
                                esi_1 = data_ce26e8
                                *(esi_1 + 0x4034) = edi_4
                    
                    goto label_4dabd0
                case 3
                    int32_t ecx = *(arg1 + (edi_1 << 2) + 4)
                    int32_t eax_4 = *(arg1 + (edi_1 << 2) + 8)
                    
                    if (*(esi_1 + 0x4054) == ecx && *(esi_1 + 0x4058) == eax_4)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4054) = ecx
                    *(esi_1 + 0x4058) = eax_4
                    glBlendFunc(*(arg1 + (edi_1 << 2) + 4), *(arg1 + (edi_1 << 2) + 8))
                    goto label_4dabc1
                case 4
                    char const* const var_20_13 = "GLSetFunctionRenderState"
                    var_24_8 = 0xf71
                    goto label_4dac99
                case 5
                    int32_t edx = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (edx == 1)
                        if (*(esi_1 + 0x4038) != 0)
                            glDisable(0xb44)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x4038) = 0
                        
                        goto label_4dabd0
                    
                    char eax_5 = sub_4ac890()
                    char eax_6
                    
                    if (eax_5 != 0 || edx != 2)
                        eax_6 = sub_4ac890()
                    
                    if ((eax_5 != 0 || edx != 2) && (eax_6 == 0 || edx != 3))
                        if (*(esi_1 + 0x4038) != 1)
                            glEnable(0xb44)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x4038) = 1
                        
                        if (*(esi_1 + 0x405c) == 0x405)
                            goto label_4dabd0
                        
                        *(esi_1 + 0x405c) = 0x405
                        glCullFace(0x405)
                        goto label_4dabc1
                    
                    if (*(esi_1 + 0x4038) != 1)
                        glEnable(0xb44)
                        esi_1 = data_ce26e8
                        *(esi_1 + 0x4038) = 1
                    
                    if (*(esi_1 + 0x405c) == 0x404)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x405c) = 0x404
                    glCullFace(0x404)
                    goto label_4dabc1
                case 6
                    int32_t eax_7 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x4060) == eax_7)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4060) = eax_7
                    glDepthFunc(*(arg1 + (edi_1 << 2) + 4))
                    goto label_4dabc1
                case 7
                    char const* const var_20_14 = "GLSetFunctionRenderState"
                    var_24_8 = 0xf97
                    goto label_4dac99
                case 8
                    int32_t ecx_1 = *(arg1 + (edi_1 << 2) + 4)
                    int32_t eax_8 = *(arg1 + (edi_1 << 2) + 8)
                    
                    if (*(esi_1 + 0x4064) == ecx_1 && *(esi_1 + 0x4068) == eax_8)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4064) = ecx_1
                    *(esi_1 + 0x4068) = eax_8
                    int32_t var_20_4 = ecx_1
                    glAlphaFunc(*(arg1 + (edi_1 << 2) + 4), *(arg1 + (edi_1 << 2) + 8))
                    goto label_4dabc1
                case 9
                    int32_t edi_5 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x403c) != edi_5)
                        if (edi_5 == 0)
                            glDisable(0xbe2)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x403c) = edi_5
                        else
                            glEnable(0xbe2)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x403c) = edi_5
                    
                    goto label_4dabd0
                case 0xa
                    int32_t edi_6 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x4040) != edi_6)
                        if (edi_6 == 0)
                            glDisable(0xb90)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x4040) = edi_6
                        else
                            glEnable(0xb90)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x4040) = edi_6
                    
                    goto label_4dabd0
                case 0xb
                    char const* const var_20_15 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfaa
                    goto label_4dac99
                case 0xc
                    char const* const var_20_16 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfab
                    goto label_4dac99
                case 0xd
                    char const* const var_20_17 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfac
                    goto label_4dac99
                case 0xe
                    int32_t edx_1 = *(arg1 + (edi_1 << 2) + 4)
                    int32_t eax_10 = *(arg1 + (edi_1 << 2) + 0xc)
                    int32_t ecx_2 = *(arg1 + (edi_1 << 2) + 8)
                    
                    if (*(esi_1 + 0x406c) == edx_1 && *(esi_1 + 0x4070) == ecx_2
                            && *(esi_1 + 0x4074) == eax_10)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x406c) = edx_1
                    *(esi_1 + 0x4074) = eax_10
                    *(esi_1 + 0x4070) = ecx_2
                    (*__glewStencilFuncSeparate)(0x404, *(arg1 + (edi_1 << 2) + 4), 
                        *(arg1 + (edi_1 << 2) + 8), *(arg1 + (edi_1 << 2) + 0xc))
                    goto label_4dabc1
                case 0xf
                    char const* const var_20_18 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfb5
                    goto label_4dac99
                case 0x10
                    char const* const var_20_19 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfb6
                    goto label_4dac99
                case 0x11
                    char const* const var_20_20 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfb7
                    goto label_4dac99
                case 0x12
                    char const* const var_20_21 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfb8
                    goto label_4dac99
                case 0x13
                    char const* const var_20_22 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfb9
                    goto label_4dac99
                case 0x14
                    char const* const var_20_23 = "GLSetFunctionRenderState"
                    var_24_8 = 0xfba
                    goto label_4dac99
                case 0x15
                    int32_t edx_2 = *(arg1 + (edi_1 << 2) + 4)
                    int32_t eax_12 = *(arg1 + (edi_1 << 2) + 0xc)
                    int32_t ecx_3 = *(arg1 + (edi_1 << 2) + 8)
                    
                    if (*(esi_1 + 0x4078) == edx_2 && *(esi_1 + 0x407c) == ecx_3
                            && *(esi_1 + 0x4080) == eax_12)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4078) = edx_2
                    *(esi_1 + 0x4080) = eax_12
                    *(esi_1 + 0x407c) = ecx_3
                    (*__glewStencilFuncSeparate)(0x405, *(arg1 + (edi_1 << 2) + 4), 
                        *(arg1 + (edi_1 << 2) + 8), *(arg1 + (edi_1 << 2) + 0xc))
                    goto label_4dabc1
                case 0x16
                    int32_t eax_13 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x4044) == eax_13)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4044) = eax_13
                    int32_t ecx_4 = *(arg1 + (edi_1 << 2) + 4)
                    uint8_t alpha = (ecx_4 u>> 3).b & 1
                    uint8_t blue = (ecx_4 u>> 2).b & 1
                    int32_t eax_18 = ecx_4
                    ecx_4.b &= 1
                    glColorMask(ecx_4.b, (eax_18 u>> 1).b & 1, blue, alpha)
                    goto label_4dabc1
                case 0x17
                    int32_t eax_22 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x4060) == eax_22)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4060) = eax_22
                    (*__glewBlendEquation)(*(arg1 + (edi_1 << 2) + 4))
                    goto label_4dabc1
                case 0x18
                    int32_t eax_26 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (eax_26 == 0)
                        if (*(esi_1 + 0x4048) != eax_26)
                            glDisable(0x8037)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x4048) = 0
                        
                        goto label_4dabd0
                    
                    if (*(esi_1 + 0x4048) != 1)
                        glEnable(0x8037)
                        esi_1 = data_ce26e8
                        *(esi_1 + 0x4048) = 1
                        eax_26 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x4088) == eax_26)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4088) = eax_26
                    float eax_27 = *(arg1 + (edi_1 << 2) + 4)
                    glPolygonOffset(eax_27, eax_27)
                    goto label_4dabc1
                case 0x19
                    char const* const var_20_12 = "GLSetFunctionRenderState"
                    var_24_8 = 0xf54
                    goto label_4dac99
                case 0x1a
                    goto label_4dabd0
                case 0x1b
                    int32_t edi_2 = *(arg1 + (edi_1 << 2) + 4)
                    
                    if (*(esi_1 + 0x4028) != edi_2)
                        if (edi_2 == 0)
                            glDisable(0xb60)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x4028) = edi_2
                        else
                            glEnable(0xb60)
                            esi_1 = data_ce26e8
                            *(esi_1 + 0x4028) = edi_2
                    
                    goto label_4dabd0
                case 0x1c
                    char eax_28 = sub_4d6910(eax, *(arg1 + (edi_1 << 2) + 4), 0xb, 
                        *(arg1 + (edi_1 << 2) + 8), *(arg1 + (edi_1 << 2) + 0xc), 
                        *(arg1 + (edi_1 << 2) + 0x10))
                    
                    if (eax_28 == 0)
                        goto label_4dabd0
                    
                    (*__glewBlendFuncSeparate)(*(arg1 + (edi_1 << 2) + 4), *(arg1 + (edi_1 << 2) + 8), 
                        *(arg1 + (edi_1 << 2) + 0xc), *(arg1 + (edi_1 << 2) + 0x10))
                    goto label_4dabc1
                case 0x1d
                    int32_t ecx_5 = *(arg1 + (edi_1 << 2) + 4)
                    int32_t eax_24 = *(arg1 + (edi_1 << 2) + 8)
                    
                    if (*(esi_1 + 0x4060) == ecx_5 && *(esi_1 + 0x4064) == eax_24)
                        goto label_4dabd0
                    
                    *(esi_1 + 0x4060) = ecx_5
                    *(esi_1 + 0x4064) = eax_24
                    (*__glewBlendEquationSeparate)(*(arg1 + (edi_1 << 2) + 4), 
                        *(arg1 + (edi_1 << 2) + 8))
                    goto label_4dabc1
                case 0x1e
                    goto label_4dac80
    
    return result
}
