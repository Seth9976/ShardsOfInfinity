// 函数名称: sub_48f4d0
// 虚拟地址: 0x48f4d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48f4d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543028
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14
    int32_t* var_28 = &var_14
    int32_t* var_18
    sub_42ce10(&var_18, arg1, 3)
    int32_t var_8_1 = 0
    int32_t* esi = var_14
    void* ecx_1 = *esi
    int32_t* result
    
    if (ecx_1 == 0)
        result = nullptr
    else if (*(ecx_1 + 0x24) == 0)
        result = esi[1]
        
        if (result == 0)
            result = sub_48f050(arg1)
            esi[1] = result
    else
        result = sub_48f4d0(eax_2)
    
    int32_t* ecx_4 = var_18
    
    if (ecx_4 != 0)
        ecx_4[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
