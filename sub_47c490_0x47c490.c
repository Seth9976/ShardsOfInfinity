// 函数名称: sub_47c490
// 虚拟地址: 0x47c490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_47c490(int32_t arg1, float* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542e58
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_9c = esi
    int32_t edi
    int32_t var_a0 = edi
    int32_t var_a4 = eax_2
    int32_t* esp = &var_a4
    fsbase->NtTib.ExceptionList = &ExceptionList
    float* var_5c = arg2
    int32_t* var_58 = arg3
    int32_t* esi_1 = arg6
    void* eax_4 = data_ce19c4
    int32_t* var_60 = arg5
    float result
    int32_t* var_a8
    float var_68
    float var_64
    int64_t var_54
    float var_50
    
    if (*(eax_4 + 0xe3) != 0)
        float xmm1_1 = *(eax_4 + 0xe8)
        void* edi_2 = &var_54:4
        int32_t i = 0
        float xmm3_1 = 1f / (*(eax_4 + 0xe4) * xmm1_1)
        var_64 = 1f / xmm1_1
        float var_74_1 = xmm3_1
        void* edx
        
        do
            float xmm0_4 = arg3[i * 2] f* xmm3_1
            var_68 = xmm0_4
            *(edi_2 - 4) = sub_4145d0(xmm0_4) f* *(data_ce19c4 + 0xe4)
            float xmm0_8 = sub_4145b0(var_68)
            edx = data_ce19c4
            edi_2 += 0xc
            arg3 = var_58
            xmm3_1 = var_74_1
            *(edi_2 - 0xc) = xmm0_8 f* *(edx + 0xe4)
            float xmm0_10 = arg3[i * 2 + 1]
            i += 1
            *(edi_2 - 8) = (xmm0_10 * var_64) ^ (data_59e5c0.o).d
        while (i s< 4)
        
        int32_t* eax_6 = esi_1
        
        if (eax_6 == 0)
            eax_6 = *(edx + 0x258)
            
            if (eax_6 == 0)
                arg3 = *fsbase->ThreadLocalStoragePointer
                
                if (data_e49960 s> arg3[1])
                    var_a8 = &data_e49960
                    arg3 = __Init_thread_header(var_a8)
                    
                    if (data_e49960 == 0xffffffff)
                        int32_t var_14_1 = 0
                        int32_t* eax_9 = sub_48d5b0("sys/sprite_3d.material", 5)
                        var_a8 = &data_e49960
                        data_e49964 = eax_9
                        int32_t var_14_2 = 0xffffffff
                        arg3 = __Init_thread_footer(var_a8)
                
                eax_6 = data_e49964
        
        int64_t var_30
        float xmm3_3 = var_54.d f+ var_30.d
        var_a8 = eax_6
        float var_4c
        float var_28
        float xmm1_4 = (var_28 + var_4c) * 0.5f
        result = sub_457e00(xmm1_4, var_5c, &var_54, arg4, 0, 
            _mm_unpacklo_ps(xmm3_3 * 0.5f, (var_30:4.d + var_50) * 0.5f), xmm1_4, var_60, arg3)
        esp = &var_a4
    else
        int64_t var_48
        
        if (*(eax_4 + 0xe0) == 0)
            void* eax_22 = sub_4bd1a0(1)
            void* edi_3 = data_cdf424
            
            if (*(edi_3 + 0x1d) == 0)
                var_a8 = "SpriteDrawVerts"
                sub_44e4d0(eax_22, &data_5559b1, "gpSpriteAppData->spritesDrawing", 
                    "c:\ax2017\engine\sprite.cpp", 0x159, var_a8)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t* ecx_3 = var_60
            
            if (ecx_3 != 0)
                var_a8 = ecx_3
                char eax_24 = sub_48f8a0(&var_48:4, var_5c, ecx_3, &var_48:4)
                ecx_3 = var_60
                esp = &var_a4
                
                if (eax_24 != 0)
                    var_5c = &var_48:4
                    ecx_3 = *(*sub_454030(ecx_3) + 0x24)
                    var_60 = ecx_3
                
                edi_3 = data_cdf424
            
            int32_t* eax_39 = *(edi_3 + 0x18)
            
            if (eax_39 == 0 || eax_39 == 0x400)
            label_47cbb0:
                sub_47c290()
                edi_3 = data_cdf424
                eax_39 = var_60
                *(edi_3 + 0x4c) = eax_39
                *(edi_3 + 0x50) = esi_1
            else if (*(edi_3 + 0x4c) != ecx_3 || *(edi_3 + 0x50) != esi_1)
                void* eax_27 = data_ce19c4
                *(eax_27 + 0x30) += 1
                void* eax_28 = data_cdf428
                
                if (eax_28 != 0 && ((*(eax_28 + 0x1c) u>> 8).b & 1) != 0)
                    void* eax_31 = *(edi_3 + 0x50)
                    
                    if (eax_31 == esi_1)
                        void* edi_5 = *(edi_3 + 0x4c)
                        
                        if (edi_5 == 0 || ecx_3 == 0)
                            var_a8 = "Texture Swap with null"
                            sub_44e260(var_a8)
                            esp = &var_a4
                        else
                            char* eax_37 = ecx_3[8]
                            char* const edx_8 = &data_5559b1
                            char* const ecx_11 = &data_5559b1
                            
                            if (eax_37 != 0)
                                edx_8 = eax_37
                            
                            char* eax_38 = *(edi_5 + 0x20)
                            var_a8 = edx_8
                            
                            if (eax_38 != 0)
                                ecx_11 = eax_38
                            
                            char* const var_ac_5 = ecx_11
                            sub_44e260("Texture Swap: %s %s")
                            esp = &var_a4
                    else
                        var_68 = &data_5559b1
                        int32_t var_14_5 = 2
                        var_64 = &data_5559b1
                        var_14_5.b = 3
                        int32_t* ecx_4 = &var_68
                        
                        if (eax_31 == 0)
                            var_a8 = "Default"
                            sub_44f590(ecx_4, var_a8)
                        else
                            var_a8 = eax_31 + 0x20
                            sub_44f510(ecx_4, var_a8)
                        
                        int32_t* ecx_5 = &var_64
                        
                        if (esi_1 == 0)
                            var_a8 = "Default"
                            sub_44f590(ecx_5, var_a8)
                        else
                            var_a8 = &esi_1[8]
                            sub_44f510(ecx_5, var_a8)
                        
                        int32_t* esi_2 = var_64
                        int32_t* ecx_6 = &data_5559b1
                        float edi_4 = var_68
                        char* const eax_34 = &data_5559b1
                        
                        if (esi_2 != 0)
                            ecx_6 = esi_2
                        
                        var_a8 = ecx_6
                        
                        if (edi_4 != 0)
                            eax_34 = edi_4
                        
                        char* const var_ac_4 = eax_34
                        sub_44e260("Material change: %s to  %s")
                        esp = &var_a4
                        var_14_5.b = 4
                        
                        if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                            char* eax_35 = sub_44f000(&var_64)
                            int32_t temp0_1 = *(eax_35 + 4)
                            *(eax_35 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                                var_64 = &data_5559b1
                        
                        int32_t var_14_6 = 5
                        
                        if (data_cdf414 != 0 && edi_4 != 0 && *edi_4 != 0)
                            char* eax_36 = sub_44f000(&var_68)
                            int32_t temp1_1 = *(eax_36 + 4)
                            *(eax_36 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_45d050(eax_36, *(eax_36 + 0xc) + 0x10)
                                var_68 = &data_5559b1
                        
                        int32_t var_14_7 = 0xffffffff
                
                goto label_47cbb0
            
            int32_t ecx_13 = *(edi_3 + 0x3c)
            
            if (ecx_13 == 0)
                if (*(edi_3 + 0x18) != ecx_13)
                    var_a8 = "SpriteDrawVerts"
                    sub_44e4d0(eax_39, &data_5559b1, "gpSpriteAppData->numBufferSprites == 0", 
                        "c:\ax2017\engine\sprite.cpp", 0x1b1, var_a8)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* edx_9 = *data_ce19b4
                var_a8 = *(edi_3 + (*(edi_3 + 0x10) << 2))
                uint32_t (* eax_42)[0x4] = (*(edx_9 + 0x60))(var_a8)
                edi_3 = data_cdf424
                *(edi_3 + 0x3c) = eax_42
                _memset(eax_42, 0, 0x18000)
                ecx_13 = *(edi_3 + 0x3c)
                esp = &var_a8
            
            int32_t* esi_5 = *(edi_3 + 0x18) * 0x60 + ecx_13
            int32_t edx_10 = *arg4
            char eax_65
            uint32_t ecx_19
            uint32_t edx_14
            
            if (data_ce19b8 != 1)
                ecx_19 = (((((edx_10 u>> 0x18 << 8) + zx.d(edx_10.b)) << 8) + zx.d((edx_10 u>> 8).b))
                    << 8) + zx.d((edx_10 u>> 0x10).b)
                int32_t eax_71 = arg4[1]
                edx_14 = (((eax_71 u>> 0x18 << 8) + zx.d(eax_71.b)) << 8) + zx.d((arg4[1] u>> 8).b)
                eax_65 = (arg4[1] u>> 0x10).b
            else
                ecx_19 = ((((zx.d((edx_10 u>> 0x10).b) + (edx_10 u>> 0x18 << 8)) << 8)
                    + zx.d((edx_10 u>> 8).b)) << 8) + zx.d(edx_10.b)
                edx_14 = ((zx.d((arg4[1] u>> 0x10).b) + (arg4[1] u>> 0x18 << 8)) << 8)
                    + zx.d((arg4[1] u>> 8).b)
                eax_65 = (arg4[1]).b
            
            uint32_t edx_23 = (edx_14 << 8) + zx.d(eax_65)
            void* edi_8 = data_cdf424
            *esi_5 = *var_58
            esi_5[1] = var_58[1]
            esi_5[2] = *var_5c
            esi_5[3] = var_5c[1]
            esi_5[4] = ecx_19
            esi_5[5] = edx_23
            esi_5[6] = var_58[2]
            esi_5[7] = var_58[3]
            esi_5[8] = var_5c[2]
            esi_5[9] = var_5c[3]
            esi_5[0xa] = ecx_19
            esi_5[0xb] = edx_23
            esi_5[0xc] = var_58[4]
            esi_5[0xd] = var_58[5]
            esi_5[0xe] = var_5c[4]
            esi_5[0xf] = var_5c[5]
            esi_5[0x10] = ecx_19
            esi_5[0x11] = edx_23
            esi_5[0x12] = var_58[6]
            esi_5[0x13] = var_58[7]
            esi_5[0x14] = var_5c[6]
            esi_5[0x15] = var_5c[7]
            result = data_ce19c4
            esi_5[0x16] = ecx_19
            esi_5[0x17] = edx_23
            *(edi_8 + 0x18) += 1
            *(result i+ 0x28) += 1
        else
            float xmm0_13 = *(eax_4 + 0xa0)
            float xmm5_1 = *arg3
            float xmm4_1 = arg3[1]
            float xmm1_6 = *(eax_4 + 0xa8) * 0f
            float xmm3_8 = xmm5_1 * xmm0_13 + xmm4_1 f* *(eax_4 + 0xa4)
            float xmm6_1 = *(eax_4 + 0xb8)
            float xmm0_16 = *(eax_4 + 0xb0)
            float xmm7_1 = *(eax_4 + 0xc8)
            var_68 = xmm1_6
            float xmm6_2 = xmm6_1 * 0f
            float xmm7_2 = xmm7_1 * 0f
            float xmm4_2 = xmm4_1 f* *(eax_4 + 0xc4)
            float xmm3_10[0x4] = xmm3_8 + xmm1_6 f+ *(eax_4 + 0xac)
            float xmm1_9 = xmm5_1 * xmm0_16 + xmm4_1 f* *(eax_4 + 0xb4)
            float xmm2_5 = arg3[3]
            float xmm0_19 = *(eax_4 + 0xc0)
            var_64 = xmm6_2
            float xmm6_3 = *(eax_4 + 0xcc)
            var_54 = _mm_unpacklo_ps(xmm3_10, xmm1_9 + xmm6_2 f+ *(eax_4 + 0xbc))
            float xmm3_12 = arg3[2]
            void* eax_13 = data_ce19c4
            float xmm5_6 = *(eax_13 + 0xbc)
            float xmm2_7 = arg3[5]
            float xmm3_16 = xmm3_12 * xmm0_19 + xmm2_5 f* *(eax_13 + 0xc4) + xmm7_2 + xmm6_3
            float xmm3_17 = arg3[4]
            var_48 = _mm_unpacklo_ps(
                xmm3_12 * xmm0_13 + xmm2_5 f* *(eax_13 + 0xa4) + var_68 f+ *(eax_13 + 0xac), 
                xmm3_12 * xmm0_16 + xmm2_5 f* *(eax_13 + 0xb4) + var_64 + xmm5_6)
            float var_40_1 = xmm3_16
            void* eax_15 = data_ce19c4
            float xmm0_28 = arg3[6]
            float xmm3_21 = xmm3_17 * xmm0_19 + xmm2_7 f* *(eax_15 + 0xc4) + xmm7_2 + xmm6_3
            int64_t xmm4_14 = _mm_unpacklo_ps(
                xmm3_17 * xmm0_13 + xmm2_7 f* *(eax_15 + 0xa4) + var_68 f+ *(eax_15 + 0xac), 
                xmm3_17 * xmm0_16 + xmm2_7 f* *(eax_15 + 0xb4) + var_64 + xmm5_6)
            float xmm1_22 = arg3[7]
            int32_t* ecx_1 = data_ce19c4
            int64_t var_3c_1 = xmm4_14
            float var_34_1 = xmm3_21
            float xmm3_26[0x4] = xmm0_13 * xmm0_28 + ecx_1[0x29] f* xmm1_22 + var_68 f+ ecx_1[0x2b]
            int64_t xmm4_19 = xmm0_16 * xmm0_28 + ecx_1[0x2d] f* xmm1_22 + var_64 + xmm5_6
            int64_t var_78_2 = xmm3_26
            int32_t var_60_2 = xmm4_19
            float xmm2_17 = xmm0_19 * xmm0_28 + ecx_1[0x31] f* xmm1_22 + xmm7_2 + xmm6_3
            int64_t var_30_1 = _mm_unpacklo_ps(xmm3_26, xmm4_19)
            float var_28_1 = xmm2_17
            
            if (esi_1 == 0)
                esi_1 = ecx_1[0x96]
                
                if (esi_1 == 0)
                    ecx_1 = *fsbase->ThreadLocalStoragePointer
                    
                    if (data_e49968 s> ecx_1[1])
                        var_a8 = &data_e49968
                        ecx_1 = __Init_thread_header(var_a8)
                        
                        if (data_e49968 == 0xffffffff)
                            int32_t var_14_3 = 1
                            int32_t* eax_20 = sub_48d5b0("sys/sprite_3d.material", esi_1 + 5)
                            var_a8 = &data_e49968
                            data_e4996c = eax_20
                            int32_t var_14_4 = 0xffffffff
                            ecx_1 = __Init_thread_footer(var_a8)
                        
                        arg2 = var_5c
                        xmm4_19 = var_60_2
                        xmm3_26 = zx.o(var_78_2)
                    
                    esi_1 = data_e4996c
            
            float xmm3_27 = xmm3_26 f+ var_54.d
            var_a8 = esi_1
            float xmm2_19 = (xmm2_17 + xmm5_1 * xmm0_19 + xmm4_2 + xmm7_2 + xmm6_3) * 0.5f
            result = sub_457e00(xmm2_19, arg2, &var_54, arg4, 0, 
                _mm_unpacklo_ps(xmm3_27 * 0.5f, (xmm4_19 f+ var_50) * 0.5f), xmm2_19, arg5, ecx_1)
            esp = &var_a4
    fsbase->NtTib.ExceptionList = ExceptionList
    esp[1]
    esp[2]
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
