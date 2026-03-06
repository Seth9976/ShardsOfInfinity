// 函数名称: sub_4b8d90
// 虚拟地址: 0x4b8d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b8d90(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544aee
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_cdf428
    
    if (eax_3 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* edi = *(eax_3 + 4)
    int32_t* result_1
    int32_t* var_38 = &result_1
    int32_t* var_20
    sub_42ce10(&var_20, arg1, 2)
    int32_t var_8_1 = 0
    void* eax_5 = *result_1
    uint32_t (* eax_6)[0x4]
    
    if (eax_5 != 0)
        eax_6 = *(eax_5 + 8)
    
    int32_t* result
    
    if (eax_5 == 0 || eax_6 == 0)
        result = nullptr
    else
        int32_t* result_2 = *(edi + 0x10)
        *(edi + 0x1c) += 1
        result_1 = result_2
        
        if (result_2 == 0)
            sub_4bc650(edi + 0x10)
            result_2 = *(edi + 0x10)
            result_1 = result_2
        
        *(edi + 0x10) = *result_2
        int32_t* result_3 = result_2
        __builtin_memset(&result_2[1], 0, 0x18)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_38_1)(struct 
            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_4bc570
        var_8_1.b = 2
        `eh vector constructor iterator'(&result_2[7], 0xc, 8, PDBStream::PDBStream)
        result_2[0x1f] = 0
        result_2[0x20] = 0
        result_2[0x21] = 0
        var_8_1.b = 0
        result_2[0xc4] = 0
        result_2[0x22] = 0
        result_2[0x2b] = 0
        *result_2 = arg1
        int32_t esi_2 = eax_6 << 6
        result_2[4] = sub_45cff0(esi_2)
        result_2[5] = 0
        result_2[6] = eax_6
        sub_4bc490(&result_2[4], eax_6)
        result_2[0x1f] = sub_45cff0(esi_2)
        result_2[0x20] = 0
        result_2[0x21] = eax_6
        sub_4bc490(&result_2[0x1f], eax_6)
        result = result_1
    
    int32_t* ecx_6 = var_20
    
    if (ecx_6 != 0)
        ecx_6[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
