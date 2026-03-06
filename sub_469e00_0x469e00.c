// 函数名称: sub_469e00
// 虚拟地址: 0x469e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_469e00(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5429e5
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = arg1
    void* var_5c = ebx
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_90)(struct _EXCEPTION_REGISTRATION_RECORD**
        * arg1) = sub_44f380
    int32_t var_54[0x10]
    int32_t var_90_1 = `eh vector constructor iterator'(&var_54, 4, 0x10, sub_44f290)
    int32_t var_8_1 = 0
    int32_t eax_3 = sub_45f3b0(arg2, &var_54)
    
    if (*(ebx + 0x760) == 0)
        *(ebx + 0x758) = sub_45cff0(0x3000)
        *(ebx + 0x75c) = 0
        *(ebx + 0x760) = 0x200
    
    int32_t eax_5 = 0
    int32_t var_58 = 0
    
    if (eax_3 s> 0)
        do
            int32_t var_78_1 = 0
            int32_t var_70_1 = 0
            char* const var_6c = &data_5559b1
            var_8_1.b = 1
            char* const edi_1 = &data_5559b1
            char* eax_6 = var_54[eax_5]
            int32_t* esi_2 = data_cdf418
            int64_t var_68_1 = 0
            
            if (eax_6 != 0)
                edi_1 = eax_6
            
            int32_t var_70_2 = 0
            int32_t var_74_1 = 0xffffffff
            
            if (esi_2 == 0)
            label_469f09:
                esi_2 = operator new(0x14)
                int32_t* var_7c_1 = esi_2
                char* const edx_1 = &data_5559b1
                char* ecx_4 = var_54[var_58]
                *esi_2 = &data_5865dc
                
                if (ecx_4 != 0)
                    edx_1 = ecx_4
                
                esi_2[4] = &data_5559b1
                var_8_1.b = 3
                sub_44f590(&esi_2[4], edx_1)
                int32_t eax_11 = data_cdf41c
                esi_2[1] = eax_11
                data_cdf41c = eax_11 + 1
                esi_2[3] = data_cdf418
                data_cdf418 = esi_2
                var_8_1.b = 1
            else
                while (__stricmp(edi_1, (**esi_2)(eax_2)) != 0)
                    esi_2 = esi_2[3]
                    
                    if (esi_2 == 0)
                        goto label_469f09
            
            int32_t eax_14 = *(ebx + 0x75c)
            int32_t* var_78_2 = esi_2
            var_68_1.d = 0x3f800000
            
            if (eax_14 s>= *(ebx + 0x760))
                sub_44e4d0(eax_14, &data_5559b1, "mSize < mSizeReserved", "c:\ax2017\engine\xarray.h", 
                    0x96, "XArray<struct UI2State>::Append")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t ebx_1 = *(ebx + 0x758)
            int32_t edi_2 = eax_14 * 3
            *(ebx_1 + (edi_2 << 3)) = esi_2
            *(ebx_1 + (edi_2 << 3) + 4) = 0xffffffff
            *(ebx_1 + (edi_2 << 3) + 8) = 0
            *((edi_2 << 3) + 0xc + ebx_1) = &data_5559b1
            *(ebx_1 + (edi_2 << 3) + 0x10) = 0x3f800000
            *(ebx_1 + (edi_2 << 3) + 0x14) = var_68_1:4.d
            ebx = var_5c
            *(ebx + 0x75c) += 1
            var_8_1.b = 4
            data_cdf414
            eax_5 = var_58 + 1
            var_58 = eax_5
        while (eax_5 s< eax_3)
    
    int32_t var_8_2 = 0xffffffff
    int32_t result = `eh vector vbase constructor iterator'(&var_54, 4, 0x10, sub_44f380)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
