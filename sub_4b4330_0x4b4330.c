// 函数名称: sub_4b4330
// 虚拟地址: 0x4b4330
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4b4330(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    void* eax = sub_4b8c10(&data_5b6224, arg3)
    int32_t edx_1 = 0
    *(arg4 + 0xc) = eax
    int32_t eax_1 = *arg2
    uint32_t eax_3
    int128_t var_28_1
    
    if (eax_1 s<= 0)
    label_4b4372:
        eax_3 = *(eax + 0x10) - 1
        
        if (eax_3 u> 0x28)
            return eax_3
        
        eax_3 = zx.d(lookup_table_4b4528[eax_3])
        
        switch (eax_3)
            case 0
                int32_t eax_11 = sub_4b8850(&data_5b6224, arg3)
                *(arg4 + 0x10) = eax_11
                return eax_11
            case 1
            label_4b4465:
                int32_t var_1c_5 = arg3
                int32_t eax_12 = sub_4b8b40(eax_3, arg2, &data_5b6224)
                *(arg4 + 0x10) = eax_12
                return eax_12
            case 2
                eax_3 = sub_4b8850(&data_5b6224, arg3)
                
                if (eax_3 == 0)
                    return eax_3
                
                var_28_1 = *eax_3
            label_4b44ab:
                int32_t eax_13 = sub_45c850(var_28_1)
                eax_3 = zx.d((eax_13 u>> 0x10).b)
                *(arg4 + 0x10) = (((((eax_13 u>> 0x18 << 8) + zx.d(eax_13.b)) << 8)
                    + zx.d((eax_13 u>> 8).b)) << 8) + eax_3
                return eax_3
            case 3
                eax_3 = sub_4b8850(&data_5b6224, arg3)
            case 4
                return eax_3
    else
        int32_t* ecx = arg2[1]
        
        while (*ecx != arg3)
            edx_1 += 1
            ecx = &ecx[2]
            
            if (edx_1 s>= eax_1)
                goto label_4b4372
        
        eax_3 = *(eax + 0x10) - 1
        int128_t var_28
        char const* const ecx_7
        
        if (eax_3 u> 0x28)
        label_4b44e2:
            char const* const var_1c_6 = "sMaterialRenderStateValueFromConstant"
            var_28:8.d = 0x1f3
            ecx_7 = "Halt"
        label_4b44f1:
            var_28:4.d = "c:\ax2017\engine\material.cpp"
            sub_44e4d0(eax_3, &data_5559b1, ecx_7)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_3 = zx.d(lookup_table_4b4568[eax_3])
        
        switch (eax_3)
            case 0
                int32_t var_1c_1 = arg3
                var_28:8.d = eax
                int32_t eax_5 = sub_4b8ac0(eax_3, arg2, &data_5b6224)
                *(arg4 + 0x10) = eax_5
                return eax_5
            case 1
                goto label_4b4465
            case 2
                int32_t var_1c_3 = arg3
                var_28:8.d = data_dff650
                eax_3 = sub_4b8ac0(eax_3, arg2, &data_5b6224)
                
                if (eax_3 != 0)
                    var_28_1 = *eax_3
                    goto label_4b44ab
                
                char const* const var_1c_4 = "sMaterialRenderStateValueFromConstant"
                var_28:8.d = 0x1eb
                ecx_7 = "pColor"
                goto label_4b44f1
            case 3
                int32_t var_1c_2 = arg3
                var_28:8.d = data_dff654
                eax_3 = sub_4b8ac0(eax_3, arg2, &data_5b6224)
            case 4
                goto label_4b44e2
    
    if (eax_3 == 0)
        return eax_3
    
    int32_t ecx_3 = *eax_3
    uint32_t eax_10 = zx.d((ecx_3 u>> 0x10).b)
    *(arg4 + 0x10) =
        (((((ecx_3 u>> 0x18 << 8) + zx.d(ecx_3.b)) << 8) + zx.d((ecx_3 u>> 8).b)) << 8) + eax_10
    return eax_10
}
