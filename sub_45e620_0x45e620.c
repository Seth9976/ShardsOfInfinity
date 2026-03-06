// 函数名称: sub_45e620
// 虚拟地址: 0x45e620
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_45e620(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, char* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t edx = data_5c99bc
    int32_t edx = data_5c99bc
    int32_t eax_1 = arg2[1]
    int32_t* var_c = arg3
    int32_t edi = data_5c99c0
    int32_t* ecx_1
    int32_t* esi_2
    
    if (eax_1 == 0)
    label_45e665:
        int32_t eax_2 = data_5c99cc
        int32_t var_28
        char const* const ecx_2
        
        if (eax_2 u>= data_5c99c4)
            char const* const var_24_1 = "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc"
            var_28 = 0xf4
            ecx_2 = "mUsedCount < mMaxSize"
        label_45e775:
            sub_44e4d0(eax_2, &data_5559b1, ecx_2, "c:\ax2017\engine\dataarray.h", var_28, 
                "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_2 = data_5c99c8
        
        if (eax_2 u> edi)
            char const* const var_24_5 = "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc"
            var_28 = 0xf5
            ecx_2 = "mFreeListHead <= mMaxUsedCount"
            goto label_45e775
        
        int32_t eax_3
        
        if (eax_2 != edi)
            edi = eax_2
            eax_3 = *(eax_2 * 0x234 + edx + 0x230)
        else
            eax_3 = edi + 1
            data_5c99c0 = eax_3
        
        data_5c99c8 = eax_3
        esi_2 = edi * 0x234 + edx
        _memset(esi_2, 0, 0x230)
        void* var_10_1 = &esi_2[1]
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_2)(struct 
            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
        `eh vector constructor iterator'(&esi_2[5], 4, 4, sub_44f290)
        esi_2[0x8c] = data_5c99d0 << 0x10 | edi
        int32_t eax_11 = data_5c99d0 + 1
        
        if (eax_11 == 0x10000)
            eax_11 = 1
        
        ecx_1 = arg2
        data_5c99cc += 1
        data_5c99d0 = eax_11
        ecx_1[1] = esi_2[0x8c]
    else
        uint32_t ecx = zx.d(eax_1.w)
        
        if (ecx u>= edi)
            goto label_45e665
        
        esi_2 = ecx * 0x234 + edx
        
        if (esi_2[0x8c] != eax_1)
            goto label_45e665
        
        ecx_1 = arg2
    
    bool cond:1 = *esi_2 != 3
    int32_t eax_13 = *ecx_1
    esi_2[0x19] = eax_13
    
    if (cond:1)
        sub_45e500(eax_13, esi_2, arg3, arg4, arg5, arg6)
        return arg3
    
    sub_45d230(arg3, &esi_2[1])
    return arg3
}
