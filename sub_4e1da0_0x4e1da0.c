// 函数名称: sub_4e1da0
// 虚拟地址: 0x4e1da0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4e1da0(int32_t** arg1, char* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_545c00
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_2c = &data_5559b1
    char* const var_28 = &data_5559b1
    int32_t var_14_1 = 0
    sub_44f590(&var_2c, arg2)
    int32_t var_40_1 = 1
    sub_44f8c0(&var_28, &data_5828f8)
    int32_t* eax_3 = sub_45cfa0(0x10)
    int32_t* ecx_1 = eax_3
    eax_3[3] += 1
    int32_t* esi = *eax_3
    
    if (esi == 0)
        sub_45ce30(ecx_1)
        ecx_1 = eax_3
        esi = *ecx_1
    
    *ecx_1 = *esi
    char* const eax_5 = var_2c
    int32_t* var_24_1 = esi
    *esi = zx.o(0)
    *esi = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_44f000(esi)
        *(eax_6 + 4) += 1
    
    var_14_1.b = 1
    char* const eax_7 = var_28
    esi[1] = eax_7
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_44f000(&esi[1])
        *(eax_8 + 4) += 1
    
    esi[2] = 0
    esi[3] = arg1[1]
    void* eax_10 = arg1[1]
    
    if (eax_10 == 0)
        *arg1 = esi
    else
        *(eax_10 + 8) = esi
    
    arg1[2] += 1
    arg1[1] = esi
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4a3060(&var_2c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
