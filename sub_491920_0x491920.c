// 函数名称: sub_491920
// 虚拟地址: 0x491920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_491920(int32_t arg1, void* arg2, int32_t* arg3, void* arg4, char* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *(arg5 + 0xc) = arg4
    uint32_t eax_4 = *(arg2 + 0x10) - 1
    int32_t var_4c_1
    char const* const var_48_1
    char* ecx_3
    
    if (eax_4 u> 0x2a)
    label_491c7f:
        var_48_1 = "DefParseReadSimpleField"
        var_4c_1 = 0x1c7
        ecx_3 = "Halt"
    label_491c98:
        sub_44e4d0(eax_4, &data_5559b1, ecx_3, "c:\ax2017\engine\defparsetree.cpp", var_4c_1, var_48_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    eax_4 = zx.d(lookup_table_491d00[eax_4])
    char* const ebx_1 = &data_5559b1
    char const* const var_54_2
    int16_t var_1c
    void* eax_5
    void* eax_20
    char* ecx_1
    char* const ecx_14
    bool cond:4_1
    
    switch (eax_4)
        case 0
            eax_4 = *(arg4 + 0x28)
            
            if ((eax_4.b & 0x22) == 0)
                eax_5 = sub_491610(arg5)
                ecx_1.b = eax_5.b
                goto label_491c10
            
            void* ecx_2 = *(arg4 + 0x1c)
            
            if ((eax_4.b & 0x20) != 0)
                if (ecx_2 == 0)
                    var_48_1 = "DefParseReadEnum"
                    var_4c_1 = 0xda
                    ecx_3 = "pAttribTable"
                    goto label_491c98
                
                char* eax_6 = *(arg5 + 4)
                char* edx_1 = &data_5559b1
                
                if (eax_6 != 0)
                    edx_1 = eax_6
                
                eax_5 = sub_4b8d10(ecx_2, edx_1)
                
                if (eax_5 != 0xffffffff)
                    *arg3 = eax_5
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_5
            else if (ecx_2 != 0)
                char* eax_7 = *(arg5 + 4)
                char* edx_2 = &data_5559b1
                
                if (eax_7 != 0)
                    edx_2 = eax_7
                
                void* eax_8 = sub_48d020(ecx_2, edx_2)
                
                if (eax_8 != 0)
                    int32_t eax_9 = *eax_8
                    *arg3 = eax_9
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_9
        case 1
            ecx_1.b = sub_491610(arg5).b
            eax_5.w = var_1c
            *arg3 = eax_5.w
        label_491c10:
            
            if (ecx_1.b != 0)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_5
        case 2
            ecx_1.b = sub_491610(arg5).b
            char var_20
            eax_5.b = var_20
            *arg3 = eax_5.b
            goto label_491c10
        case 3
            char* eax_14 = *(arg5 + 4)
            char* const ecx_9 = &data_5559b1
            int32_t* var_48_3 = arg3
            
            if (eax_14 != 0)
                ecx_9 = eax_14
            
            eax_5 = sub_4529c0(eax_14, arg2, ecx_9, ecx_9, &data_584ae4)
            cond:4_1 = eax_5 == 1
            goto label_491c3e
        case 4
            eax_5, ecx_1 = sub_491640(arg5, arg3)
            ecx_1.b = eax_5.b
            goto label_491c10
        case 5
            ecx_1.b = sub_491610(arg5).b
            int32_t var_24
            eax_5.b = var_24 != 0
            *arg3 = eax_5.b
            goto label_491c10
        case 6
            char* eax_10 = *(arg5 + 4)
            char* ecx_8 = &data_5559b1
            
            if (eax_10 != 0)
                ecx_8 = eax_10
            
            int32_t var_34
            int32_t* var_48_2 = &var_34
            int32_t eax_12
            eax_12, ecx_1 = sub_4529c0(&var_34, arg2, ecx_8, ecx_8, "%lld")
            *arg3 = var_34
            ecx_1.b = eax_12 == 1
            void* var_30
            eax_5 = var_30
            arg3[1] = eax_5
            goto label_491c10
        case 7
            eax_5, ecx_1 = sub_491690(arg3, arg5)
            ecx_1.b = eax_5.b
            goto label_491c10
        case 8
            char* eax_15 = *(arg5 + 4)
            char* const ecx_10 = &data_5559b1
            int32_t* var_48_4 = arg3
            
            if (eax_15 != 0)
                ecx_10 = eax_15
            
            eax_5 = sub_4529c0(eax_15, arg2, ecx_10, ecx_10, 0x589104)
            cond:4_1 = eax_5 == 1
            goto label_491c3e
        case 9
            eax_5 = sub_4918e0(arg3, arg5)
            ecx_1.b = eax_5.b
            goto label_491c10
        case 0xa
            char* eax_21 = *(arg5 + 4)
            char* const ecx_15 = &data_5559b1
            
            if (eax_21 != 0)
                ecx_15 = eax_21
            
            void* var_48_7 = &arg3[3]
            void* var_4c_4 = &arg3[2]
            void* var_50_5 = &arg3[1]
            int32_t* var_54_3 = arg3
            eax_5 = sub_4529c0(&arg3[1], arg2, ecx_15, ecx_15, "%f %f %f %f")
            cond:4_1 = eax_5 == 4
            goto label_491c3e
        case 0xb
            char* eax_16 = *(arg5 + 4)
            char* const ecx_13 = &data_5559b1
            
            if (eax_16 != 0)
                ecx_13 = eax_16
            
            void* var_48_5 = &arg3[1]
            int32_t* var_4c_2 = arg3
            eax_5 = sub_4529c0(&arg3[1], arg2, ecx_13, ecx_13, "%f %f")
            cond:4_1 = eax_5 == 2
            goto label_491c3e
        case 0xc
            char* eax_18 = *(arg5 + 4)
            ecx_14 = &data_5559b1
            
            if (eax_18 != 0)
                ecx_14 = eax_18
            
            void* var_48_6 = &arg3[2]
            eax_20 = &arg3[1]
            void* var_4c_3 = eax_20
            int32_t* var_50_4 = arg3
            var_54_2 = "%f %f %f"
        label_491c33:
            eax_5 = sub_4529c0(eax_20, arg2, ecx_14, ecx_14, var_54_2)
            cond:4_1 = eax_5 == 3
        label_491c3e:
            
            if (cond:4_1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_5
        case 0xd
            char* eax_25 = *(arg5 + 4)
            char* const ecx_16 = &data_5559b1
            
            if (eax_25 != 0)
                ecx_16 = eax_25
            
            void* var_48_8 = &arg3[5]
            void* var_4c_5 = &arg3[4]
            void* var_50_6 = &arg3[3]
            void* var_54_4 = &arg3[2]
            void* var_58_1 = &arg3[1]
            int32_t* var_5c_2 = arg3
            eax_5 = sub_4529c0(&arg3[1], arg2, ecx_16, ecx_16, "%f %f %f %f %f %f")
            cond:4_1 = eax_5 == 6
            goto label_491c3e
        case 0xe
            char* eax_31 = *(arg5 + 4)
            char* const ecx_17 = &data_5559b1
            
            if (eax_31 != 0)
                ecx_17 = eax_31
            
            void* var_48_9 = &arg3[7]
            void* var_4c_6 = &arg3[6]
            void* var_50_7 = &arg3[5]
            void* var_54_5 = &arg3[4]
            void* var_58_2 = &arg3[3]
            void* var_5c_3 = &arg3[2]
            void* var_60_1 = &arg3[1]
            int32_t* var_64_2 = arg3
            eax_5 = sub_4529c0(&arg3[1], arg2, ecx_17, ecx_17, "%f %f %f %f %f %f %f %f")
            cond:4_1 = eax_5 == 8
            goto label_491c3e
        case 0xf
            char* eax_39 = *(arg5 + 4)
            char* ecx_18 = &data_5559b1
            
            if (eax_39 != 0)
                ecx_18 = eax_39
            
            void* var_48_10 = &arg3[1]
            int32_t* var_4c_7 = arg3
            eax_5 = sub_4529c0(&arg3[1], arg2, ecx_18, ecx_18, "%d %d")
            cond:4_1 = eax_5 == 2
            goto label_491c3e
        case 0x10
            char* eax_42 = *(arg5 + 4)
            ecx_14 = &data_5559b1
            
            if (eax_42 != 0)
                ecx_14 = eax_42
            
            void* var_48_11 = &arg3[2]
            eax_20 = &arg3[1]
            void* var_4c_8 = eax_20
            int32_t* var_50_8 = arg3
            var_54_2 = "%d %d %d"
            goto label_491c33
        case 0x11
            char var_18
            ecx_1.b = sub_4918e0(&var_18, arg5)
            var_1c.b = var_18
            char var_10
            char var_1a_1 = var_10
            char var_14
            var_1c:1.b = var_14
            char var_c
            char var_19_1 = var_c
            eax_5 = var_1c.d
            *arg3 = eax_5
            goto label_491c10
        case 0x12
            goto label_491c7f
    
    char* eax_44 = *(arg5 + 4)
    
    if (eax_44 != 0)
        ebx_1 = eax_44
    
    char* const var_48_12 = ebx_1
    int32_t var_4c_9 = *(arg4 + 4)
    void* eax_46 = sub_48ae70(sub_44e260("DefParse: failed to read '%s': %s"), arg2, arg3, arg4)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_46
}
