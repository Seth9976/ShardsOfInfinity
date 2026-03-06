// 函数名称: sub_4b46d0
// 虚拟地址: 0x4b46d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

bool __convention("regparm")sub_4b46d0(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4)
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
    *(arg4 + 8) = 0
    *(arg4 + 0xc) = 0
    uint32_t eax_2 = *(eax + 0x10) - 1
    char const* const ecx_3
    
    if (eax_2 u> 0x28)
    label_4b4841:
        char const* const var_14_8 = "sMaterialFunctionalRenderStateValueFromConstant"
        int32_t var_18_5 = 0x28c
        ecx_3 = "Halt"
    label_4b4850:
        char const* const var_1c_2 = "c:\ax2017\engine\material.cpp"
        sub_44e4d0(eax_2, &data_5559b1, ecx_3)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    eax_2 = zx.d(lookup_table_4b4890[eax_2])
    
    switch (eax_2)
        case 0
            *(arg4 + 4) = sub_4b88a0(eax_2, arg2, &data_5b6224, arg3)
        label_4b482d:
            void* var_14_7 = arg4
            int32_t* var_18_4 = arg2
            int32_t var_1c_1 = arg3
            return (*(*data_ce19b4 + 0x78))() != 0
        case 1
            *(arg4 + 4) = sub_4b89b0(eax_2, arg2, &data_5b6224, arg3)
            goto label_4b482d
        case 2
            *(arg4 + 4) = zx.d(sub_4b8920(eax_2, arg2, &data_5b6224, arg3))
            goto label_4b482d
        case 3
            *(arg4 + 4) = sub_4b8b40(eax_2, arg2, &data_5b6224, arg3)
            goto label_4b482d
        case 4
            eax_2 = sub_4b8ac0(eax_2, arg2, &data_5b6224, data_dff650, arg3)
            
            if (eax_2 == 0)
                char const* const var_14_6 = "sMaterialFunctionalRenderStateValueFromConstant"
                int32_t var_18_3 = 0x287
                ecx_3 = "pColor"
                goto label_4b4850
            
            float var_1c
            int32_t eax_14 = sub_45c850((*eax_2).d, var_1c)
            *(arg4 + 4) = (((((eax_14 u>> 0x18 << 8) + zx.d(eax_14.b)) << 8) + zx.d((eax_14 u>> 8).b))
                << 8) + zx.d((eax_14 u>> 0x10).b)
            goto label_4b482d
        case 5
            int32_t* eax_8 = sub_4b8ac0(eax_2, arg2, &data_5b6224, data_dff654, arg3)
            
            if (eax_8 == 0)
                goto label_4b482d
            
            int32_t ecx = *eax_8
            *(arg4 + 4) = (((((ecx u>> 0x18 << 8) + zx.d(ecx.b)) << 8) + zx.d((ecx u>> 8).b)) << 8)
                + zx.d((ecx u>> 0x10).b)
            goto label_4b482d
        case 6
            goto label_4b4841
}
