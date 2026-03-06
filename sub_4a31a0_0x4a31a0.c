// 函数名称: sub_4a31a0
// 虚拟地址: 0x4a31a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4a31a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543e68
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14
    int32_t* var_20 = &var_14
    int32_t* var_18
    sub_42ce10(&var_18, arg1, 0x1d)
    int32_t var_8_1 = 0
    int32_t result = sub_4a2e30(var_14)
    int32_t* ecx_2 = var_18
    
    if (ecx_2 != 0)
        ecx_2[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
