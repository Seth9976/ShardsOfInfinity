// 函数名称: sub_459190
// 虚拟地址: 0x459190
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_459190(int32_t arg1, int128_t* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542460
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_1fc = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** i = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* edi = arg2
    int128_t* var_78 = edi
    int32_t* var_7c = arg3
    void* edx = data_cdf428
    
    if (edx != 0)
        i.b = (*(edx + 0x1c) u>> 3).b & 1
        int32_t* var_208
        int128_t var_168
        void var_128
        int128_t var_f8
        int32_t* i_1
        int32_t* i_2
        int128_t var_48
        
        if (i.b != 0)
            int32_t** var_200_1 = &i_2
            var_208 = arg3
            sub_42ce10(&i_1, var_208, 2)
            int32_t var_14_1 = 0
            void* eax_5 = *i_2
            
            if (eax_5 != 0 && arg4 != 0)
                int32_t eax_6 = *(eax_5 + 0x10)
                void* i_3 = nullptr
                i_2 = nullptr
                
                if (eax_6 s> 0)
                    int32_t var_a8_1 = 0x3e99999a
                    int32_t var_a4_1 = 0x3c23d70a
                    int32_t var_a0_1 = 0x3c23d70a
                    int32_t var_98_1 = 0xbc23d70a
                    int32_t var_94_1 = 0xbc23d70a
                    int32_t var_90_1 = 0xbc23d70a
                    int32_t var_c8_1 = 0x3c23d70a
                    int32_t var_c4_1 = 0x3e99999a
                    int32_t var_c0_1 = 0x3c23d70a
                    int32_t var_b8_1 = 0xbc23d70a
                    int32_t var_b4_1 = 0xbc23d70a
                    int32_t var_b0_1 = 0xbc23d70a
                    int32_t var_e8_1 = 0x3c23d70a
                    int32_t var_e4_1 = 0x3c23d70a
                    int32_t var_e0_1 = 0x3e99999a
                    int32_t var_d8_1 = 0xbc23d70a
                    int32_t var_d4_1 = 0xbc23d70a
                    int32_t var_d0_1 = 0xbc23d70a
                    
                    do
                        void var_108
                        int128_t* eax_8
                        int32_t edx_2
                        eax_8, edx_2 = sub_4b58f0(&var_108, i_3, arg4, &var_108)
                        int128_t* ecx_2 = &var_48
                        var_48 = *eax_8
                        int128_t var_38_1 = eax_8[1]
                        int128_t* eax_10 = sub_45c3f0(&var_128, edx_2, ecx_2, &var_128)
                        var_168 = *eax_10
                        int128_t var_158_1 = eax_10[1]
                        int128_t var_148_1 = eax_10[2]
                        var_38_1.d = var_90_1
                        int128_t var_138_1 = eax_10[3]
                        var_38_1:0xc.d = var_a0_1
                        var_f8 = data_59e3c0
                        int128_t* var_200_4 = &var_f8
                        var_48:8.q = var_98_1.q
                        var_38_1:4.q = var_a8_1.q
                        int128_t var_180_1 = var_48
                        int64_t var_170_1 = var_38_1:8.q
                        int128_t* ecx_3 = sub_4558c0(&var_f8, &var_168, ecx_2)
                        var_f8 = data_59e3d0
                        var_38_1.d = var_b0_1
                        var_48:8.q = var_b8_1.q
                        var_38_1:4.q = var_c8_1.q
                        var_38_1:0xc.d = var_c0_1
                        int128_t* var_200_5 = &var_f8
                        int128_t var_198_1 = var_48
                        int64_t var_188_1 = var_38_1:8.q
                        int128_t* ecx_4 = sub_4558c0(&var_f8, &var_168, ecx_3)
                        var_f8 = data_59e400
                        var_38_1.d = var_d0_1
                        var_48:8.q = var_d8_1.q
                        var_38_1:4.q = var_e8_1.q
                        var_38_1:0xc.d = var_e0_1
                        int128_t* var_200_6 = &var_f8
                        int128_t var_1b0_1 = var_48
                        int64_t var_1a0_1 = var_38_1:8.q
                        sub_4558c0(&var_f8, &var_168, ecx_4)
                        i_3 = i_2 + 1
                        i_2 = i_3
                    while (i_3 s< eax_6)
                    
                    edi = var_78
            
            arg3 = var_7c
            int32_t var_14_2 = 0xffffffff
            i = i_1
            edx = data_cdf428
            
            if (i != 0)
                i[7] -= 1
                i_1 = nullptr
        
        if (edx != 0)
            i.b = (*(edx + 0x1c) u>> 2).b & 1
            int128_t var_68
            
            if (i.b == 0)
            label_45960c:
                
                if (edx != 0)
                    i.b = (*(edx + 0x1c) u>> 2).b & 1
                    
                    if (i.b != 0 && arg4 != 0 && *(arg4 + 0x2c) != 0)
                        int128_t** var_200_10 = &var_78
                        sub_42ce10(&i_2, var_7c, 2)
                        int32_t var_14_3 = 1
                        void* eax_27 = *var_78
                        
                        if (eax_27 != 0)
                            int32_t* edx_14 = *(arg4 + 0x2c) + 0x10
                            int32_t* var_84_1 = edx_14
                            int128_t* ecx_11 = edx_14[1]
                            var_78 = ecx_11
                            
                            if (*(eax_27 + 8) != ecx_11)
                                sub_44e4d0(eax_27, &data_5559b1, 
                                    "pStructureData->boneCount == numBones", 
                                    "c:\ax2017\engine\draw3d.cpp", 0x78c, "Structure3DDebugDraw")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t eax_28 = 0
                            int32_t var_80_1 = 0
                            
                            if (ecx_11 s> 0)
                                int32_t ecx_12 = 0
                                int128_t* esi_4 = *(eax_27 + 0xc) + 0xb8
                                int32_t var_7c_1 = 0
                                
                                while (true)
                                    if (ecx_12 s< 0 || eax_28 s>= edx_14[1])
                                        sub_44e4d0(eax_28, &data_5559b1, "index >= 0 && index < mSize", 
                                            "c:\ax2017\engine\xarray.h", 0xc3, 
                                            "XArray<struct Mat4>::operator []")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_44e680()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    *edx_14
                                    int128_t* eax_29 = sub_45c570(&var_128)
                                    var_168 = *eax_29
                                    int128_t var_158_2 = eax_29[1]
                                    int128_t var_148_2 = eax_29[2]
                                    int128_t* var_200_12 = &var_f8
                                    int128_t var_138_2 = eax_29[3]
                                    var_f8 = data_59e3c0
                                    sub_4558c0(&var_f8, &var_168, esi_4)
                                    var_f8 = data_59e3d0
                                    void var_1f0
                                    int128_t* eax_31 = sub_45c570(&var_1f0)
                                    var_68 = *eax_31
                                    int128_t var_58_3 = eax_31[1]
                                    var_48 = eax_31[2]
                                    int128_t* var_200_14 = &var_f8
                                    int128_t var_38_4 = eax_31[3]
                                    sub_4558c0(&var_f8, &var_68, esi_4)
                                    eax_28 = var_80_1 + 1
                                    edx_14 = var_84_1
                                    ecx_12 = var_7c_1 + 0x40
                                    esi_4 = &esi_4[0xd]
                                    var_80_1 = eax_28
                                    var_7c_1 = ecx_12
                                    
                                    if (eax_28 s>= var_78)
                                        break
                                    
                                    continue
                        
                        i = i_2
                        
                        if (i != 0)
                            i[7] -= 1
            else
                if (arg3[1] != 2)
                    sub_44e4d0(i, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                        "c:\ax2017\engine\assetutils.cpp", 0x30c, "StructureDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                i = sub_4459f0(arg3)
                int128_t* edx_6 = *i
                var_78 = edx_6
                
                if (edx_6 != 0)
                    i = nullptr
                    i_2 = nullptr
                    
                    if (*(edx_6 + 0x18) s> 0)
                        int32_t* i_4 = nullptr
                        i_1 = nullptr
                        
                        do
                            void* esi_1 = *(edx_6 + 0x1c)
                            int32_t edx_7 = *(esi_1 + i_4 + 0x40)
                            void* esi_2 = esi_1 + i_4
                            var_68 = *edi
                            int128_t var_58_1 = edi[1]
                            var_48 = edi[2]
                            int128_t var_38_2 = edi[3]
                            
                            if (edx_7 s>= 0)
                                if (arg4 != 0)
                                    void* eax_21 = *(arg4 + 0x2c)
                                    
                                    if (eax_21 != 0)
                                        if (edx_7 s>= *(eax_21 + 0x14))
                                            sub_44e4d0(eax_21, &data_5559b1, 
                                                "index >= 0 && index < mSize", 
                                                "c:\ax2017\engine\xarray.h", 0xc3, 
                                                "XArray<struct Mat4>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        
                                        *(eax_21 + 0x10)
                                        int128_t* eax_22 = sub_45c570(&var_168)
                                        var_68 = *eax_22
                                        int128_t var_58_2 = eax_22[1]
                                        var_48 = eax_22[2]
                                        int128_t var_38_3 = eax_22[3]
                                    
                                    i = i_2
                                
                                i_4 = i_1
                            
                            int32_t edx_10 = *(esi_2 + 4)
                            
                            if (edx_10 == 1)
                                int128_t* var_200_8 = &var_f8
                                var_f8 = data_59e400
                                sub_4560f0(&var_f8, &var_68, esi_2 + 8)
                                i_4 = i_1
                                i = i_2
                            else if (edx_10 == 2)
                                int128_t* var_200_9 = &var_f8
                                var_f8 = data_59e400
                                sub_4588e0(&var_f8, &var_68, esi_2 + 0x30, var_208)
                                i_4 = i_1
                                i = i_2
                            
                            edx_6 = var_78
                            i += 1
                            i_4 = &i_4[0x11]
                            i_2 = i
                            i_1 = i_4
                        while (i s< *(edx_6 + 0x18))
                    
                    edx = data_cdf428
                    goto label_45960c
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return i
}
