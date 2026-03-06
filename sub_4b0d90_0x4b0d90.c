// 函数名称: sub_4b0d90
// 虚拟地址: 0x4b0d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b0d90(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5447e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_120 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = *(arg1 + 0x58)
    
    if (ecx[1] != 2)
        sub_44e4d0(&ExceptionList, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
            "c:\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_4
    int32_t edx
    eax_4, edx = sub_4459f0(ecx)
    int32_t eax_5
    uint128_t xmm0
    uint128_t xmm1
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        xmm0 = *(arg1 + 8)
        eax_5 = *(arg1 + 0x28)
        xmm1 = *(arg1 + 0x18)
    else
        xmm0 = *(arg2 + 0x484)
        eax_5 = *(arg2 + 0x4a4)
        xmm1 = *(arg2 + 0x494)
    
    int32_t var_38 = eax_5
    uint128_t var_58 = xmm0
    uint128_t var_48 = xmm1
    uint128_t var_24
    int128_t var_a8 = *sub_4b3c80(&var_24, edx, &var_58:0xc, &var_24)
    uint128_t var_9c
    var_9c:4.q = xmm0
    var_9c:0xc.d = _mm_bsrli_si128(xmm0, 8)
    int128_t var_34 = xmm1:8.d.o
    var_24 = var_9c
    int128_t var_d4
    sub_4a0490(arg2 + 0x3c, &var_34, &var_d4, arg2 + 0x3c)
    var_34 = var_d4
    var_24 = xmm0
    uint32_t eax_9 = sub_45c2a0(arg2 + 0x40)
    
    if (eax_9.b == 0)
        sub_44e4d0(eax_9, &data_5559b1, "QuatIsValid(state.transform.t.r)", 
            "c:\ax2017\engine\fabdef.cpp", 0x27c, "FabModelDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t eax_10 = sub_45c2a0(&var_34:4)
    
    if (eax_10.b == 0)
        sub_44e4d0(eax_10, &data_5559b1, "QuatIsValid(transform.r)", "c:\ax2017\engine\fabdef.cpp", 
            0x27d, "FabModelDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int128_t xmm1_1 = *(arg1 + 0x60)
    xmm1_1 f- 1f
    float var_c4_1 = xmm1_1.d
    eax_10:1.b = (xmm1_1 f== 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 1f) ? 1 : 0) << 2
        | (xmm1_1 f< 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        sub_456bf0(&var_a8:0xc)
    else
        float xmm1_2 = xmm1_1:4.d
        xmm1_2 - 1f
        eax_10:1.b = (xmm1_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 1f) ? 1 : 0) << 2
            | (xmm1_2 < 1f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            sub_456bf0(&var_a8:0xc)
        else
            float xmm1_3 = xmm1_1:8.d
            xmm1_3 - 1f
            eax_10:1.b = (xmm1_3 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_3, 1f) ? 1 : 0) << 2
                | (xmm1_3 < 1f ? 1 : 0)
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (p_5)
                sub_456bf0(&var_a8:0xc)
            else
                float xmm1_4 = xmm1_1:0xc.d
                xmm1_4 - 1f
                eax_10:1.b = (xmm1_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 1f) ? 1 : 0) << 2
                    | (xmm1_4 < 1f ? 1 : 0)
                bool p_7 = unimplemented  {test ah, 0x44}
                
                if (p_7)
                    sub_456bf0(&var_a8:0xc)
    
    char* eax_23 = *(arg1 + 0x5c)
    uint32_t var_78 = 0
    
    if (*eax_23 != 0)
        int32_t ecx_7 = *(arg2 + 0x4bc)
        
        if (ecx_7 == 0)
            int32_t* ecx_8 = *(arg1 + 0x58)
            
            if (ecx_8 == 0)
                sub_44e4d0(eax_23, &data_5559b1, "el.model != NULL", "c:\ax2017\engine\fabdef.cpp", 
                    0x28a, "FabModelDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char** eax_11 = sub_4b6020(ecx_8)
            int32_t* ecx_9 = *(arg1 + 0x58)
            char* eax_12 = *(arg1 + 0x5c)
            
            if (ecx_9[1] != 2)
                sub_44e4d0(eax_12, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                    "c:\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t edi_1 = 0
            void* eax_14 = *sub_4459f0(ecx_9)
            int32_t ecx_10 = *(eax_14 + 0x40)
            int32_t eax_19
            
            if (ecx_10 s> 0)
                int32_t* eax_16 = *(eax_14 + 0x44) + 4
                int32_t* var_78_1 = eax_16
                
                while (true)
                    char* ecx_11 = eax_12
                    char* eax_17 = *eax_16
                    
                    while (true)
                        char edx_2 = *eax_17
                        char temp0_1 = *ecx_11
                        bool c_4 = edx_2 u< temp0_1
                        
                        if (edx_2 == temp0_1)
                            if (edx_2 == 0)
                                eax_19 = 0
                                break
                            
                            edx_2 = eax_17[1]
                            char temp1_1 = ecx_11[1]
                            c_4 = edx_2 u< temp1_1
                            
                            if (edx_2 == temp1_1)
                                eax_17 = &eax_17[2]
                                ecx_11 = &ecx_11[2]
                                
                                if (edx_2 != 0)
                                    continue
                                
                                eax_19 = 0
                                break
                        
                        eax_19 = sbb.d(eax_17, eax_17, c_4) | 1
                        break
                    
                    if (eax_19 == 0)
                        break
                    
                    edi_1 += 1
                    eax_16 = &var_78_1[3]
                    var_78_1 = eax_16
                    
                    if (edi_1 s>= ecx_10)
                        goto label_4b0fdb
            
            char** edi_2
            
            if (ecx_10 s<= 0 || edi_1 == 0xffffffff)
            label_4b0fdb:
                char* var_124_1 = eax_12
                sub_44e260("can't find anim clip: %s")
                edi_2 = eax_11
            else
                edi_2 = eax_11
                sub_4ba8f0(eax_19, ecx_9, edi_2, edi_1)
            
            ecx_7 = edi_2[0x1a]
            *(arg2 + 0x4bc) = ecx_7
        
        int32_t* eax_22 = sub_4b6ca0(ecx_7)
        var_78 = eax_22
        eax_23 = sub_4b6330(eax_22)
    
    int32_t* ecx_13 = *(arg1 + 0x58)
    
    if (ecx_13[1] != 2)
        sub_44e4d0(eax_23, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
            "c:\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_24 = sub_4459f0(ecx_13)
    int32_t esi_1 = 0
    void* var_80_1 = eax_24
    void** edx_4
    
    if (*(eax_24 + 0x30) s> 0)
        int32_t* edi_4 = nullptr
        
        while (__stricmp(*(edi_4 + *(eax_24 + 0x2c)), *(arg1 + 0x70)) != 0)
            eax_24 = var_80_1
            esi_1 += 1
            edi_4 = &edi_4[3]
            
            if (esi_1 s>= *(eax_24 + 0x30))
                goto label_4b107a
        
        if (esi_1 != 0xffffffff)
            edx_4 = *(eax_4 + 0x2c) + ((esi_1 * 3 + 1) << 2)
            goto label_4b1087
    
    label_4b107a:
    
    if (*(eax_4 + 0x28) == 0)
    label_4b1177:
        
        if (data_e49c80 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e49c80)
            
            if (data_e49c80 == 0xffffffff)
                int32_t var_8_3 = 1
                data_e49c84 = sub_48d5b0("sys/draw3d.material", 5)
                int32_t var_8_4 = 0xffffffff
                __Init_thread_footer(&data_e49c80)
        
        int32_t var_128_4 = 0
        sub_459d40(arg1, &var_34, *(arg1 + 0x58), data_e49c84, 0, var_78)
    else
        edx_4 = eax_4 + 0x24
    label_4b1087:
        
        if (edx_4 == 0)
            goto label_4b1177
        
        if (data_655ad4 != 0)
            if (data_e49c78 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                __Init_thread_header(&data_e49c78)
                
                if (data_e49c78 == 0xffffffff)
                    int32_t var_8_1 = 0
                    data_e49c7c = sub_48d5b0("sys/draw3d.material", 5)
                    int32_t var_8_2 = 0xffffffff
                    __Init_thread_footer(&data_e49c78)
            
            int32_t var_128_3 = 0
            sub_459d40(arg1, &var_34, *(arg1 + 0x58), data_e49c7c, 0, var_78)
        else
            void var_114
            int128_t* eax_29 = sub_45c3f0(&var_114, edx_4, &var_34, &var_114)
            int128_t* var_128_2 = &var_34
            int128_t var_74 = *eax_29
            int128_t var_64_1 = eax_29[1]
            var_58 = eax_29[2]
            var_48 = eax_29[3]
            sub_459990(arg1, &var_74, *(arg1 + 0x58), edx_4, var_78)
    
    var_c4_1 - 1f
    int32_t* result
    result:1.b = (var_c4_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(var_c4_1, 1f) ? 1 : 0) << 2
        | (var_c4_1 < 1f ? 1 : 0)
    bool p_9 = unimplemented  {test ah, 0x44}
    
    if (p_9)
        sub_456bf0(&data_571934)
    else
        float xmm1_6 = xmm1_1:4.d
        xmm1_6 - 1f
        result:1.b = (xmm1_6 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_6, 1f) ? 1 : 0) << 2
            | (xmm1_6 < 1f ? 1 : 0)
        bool p_11 = unimplemented  {test ah, 0x44}
        
        if (p_11)
            sub_456bf0(&data_571934)
        else
            float xmm1_7 = xmm1_1:8.d
            xmm1_7 - 1f
            result:1.b = (xmm1_7 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_7, 1f) ? 1 : 0) << 2
                | (xmm1_7 < 1f ? 1 : 0)
            bool p_13 = unimplemented  {test ah, 0x44}
            
            if (p_13)
                sub_456bf0(&data_571934)
            else
                float xmm1_8 = xmm1_1:0xc.d
                xmm1_8 - 1f
                result:1.b = (xmm1_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_8, 1f) ? 1 : 0) << 2
                    | (xmm1_8 < 1f ? 1 : 0)
                bool p_15 = unimplemented  {test ah, 0x44}
                
                if (p_15)
                    sub_456bf0(&data_571934)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
