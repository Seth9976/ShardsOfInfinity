// 函数名称: sub_4b4fd0
// 虚拟地址: 0x4b4fd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4b4fd0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, char arg9)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_544988
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_5c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* eax_3 = sub_48bbf0(data_e47034)
    int32_t* result = sub_48dc50(5, eax_3)
    sub_4b4e30(eax_3)
    void* var_28
    int32_t* var_60 = &var_28
    int32_t* var_3c
    sub_42ce10(&var_3c, result, 5)
    int32_t var_14_1 = 0
    void* eax_5 = *(var_28 + 4)
    int32_t* esi_2 = *(eax_5 + 4) + 4
    int32_t* var_30 = esi_2
    char* eax_7 =
        sub_4b8610(sub_4b8610(eax_5, esi_2, &data_5b6224, 0x5b, arg3), esi_2, &data_5b6224, 0x5c, arg3)
    
    if (arg4 s> 8)
        sub_44e4d0(eax_7, &data_5559b1, "numTextures <= NUM_DIFFUSE", "c:\ax2017\engine\material.cpp", 
            0x3b5, "MaterialCreateMemory")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* eax_8 = nullptr
    char* var_2c = nullptr
    
    if (arg4 s> 0)
        int32_t edi_1 = 0x1d
        
        do
            sub_4b8610(&eax_8[0x53], esi_2, &data_5b6224, &eax_8[0x53], *(arg2 + (eax_8 << 2)))
            sub_4b8610(sub_4b8610(edi_1 - 1, esi_2, &data_5b6224, edi_1 - 1, 1), esi_2, &data_5b6224, 
                edi_1, 1)
            sub_4b8610(edi_1 + 2, esi_2, &data_5b6224, edi_1 + 2, 2)
            sub_4b8610(edi_1 + 3, esi_2, &data_5b6224, edi_1 + 3, 2)
            sub_4b8610(edi_1 + 4, esi_2, &data_5b6224, edi_1 + 4, 2)
            eax_8 = &var_2c[1]
            edi_1 += 6
            var_2c = eax_8
        while (eax_8 s< arg4)
    
    int32_t i_1 = arg6
    
    if (i_1 s> 0)
        int32_t ecx_5 = 0
        void* esi_3 = var_28
        int32_t i
        
        do
            ecx_5 += 0x20
            eax_8 = *(*(esi_3 + 4) + 4)
            *(eax_8 + ecx_5 - 0x14) = *(ecx_5 + arg5 - 0x20)
            *(eax_8 + ecx_5 - 4) = *(ecx_5 + arg5 - 0x10)
            i = i_1
            i_1 -= 1
        while (i != 1)
        esi_2 = var_30
    
    int32_t edx_9 = 0
    
    if (arg8 s> 0)
        int32_t edi_3 = 0
        void* esi_4 = var_28
        
        do
            edi_3 += 0x10
            int32_t ecx_6 = *(arg7 + (edx_9 << 2))
            edx_9 += 1
            float xmm0_5 = _mm_cvtepi32_ps(zx.o(ecx_6.b)) / 255f
            float var_48_1 = _mm_cvtepi32_ps(zx.o((ecx_6 u>> 8).b)) / 255f
            float xmm0_10 = _mm_cvtepi32_ps(zx.o((ecx_6 u>> 0x10).b))
            eax_8 = *(*(esi_4 + 4) + 4)
            float var_44_1 = xmm0_10 / 255f
            float var_40_1 = _mm_cvtepi32_ps(zx.o(ecx_6 u>> 0x18)) / 255f
            *(eax_8 + edi_3 + 0x7c) = xmm0_5.o
        while (edx_9 s< arg8)
        
        esi_2 = var_30
    
    if (arg9 != 0)
        eax_8 = sub_4b8610(sub_4b8610(eax_8, esi_2, &data_5b6224, 3, 5), esi_2, &data_5b6224, 4, 2)
    
    sub_4b8610(sub_4b8610(eax_8, esi_2, &data_5b6224, 0, 1), esi_2, &data_5b6224, 1, nullptr)
    int32_t* eax_28 = var_3c
    
    if (eax_28 != 0)
        eax_28[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
