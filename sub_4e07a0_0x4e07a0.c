// 函数名称: sub_4e07a0
// 虚拟地址: 0x4e07a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4e07a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545af0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = *arg1
    
    if (eax_3 != 0)
        _aligned_free_base(eax_3)
    
    sub_4e0e20(&arg1[0x47])
    *arg1 = 0
    int32_t var_8_1 = 0
    int32_t result = sub_4e0e20(&arg1[0x47])
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
