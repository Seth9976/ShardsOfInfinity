// 函数名称: sub_452820
// 虚拟地址: 0x452820
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_452820(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5411c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* i = *(arg2 + 0x3c)
    
    while (i != 0)
        int32_t* i_2 = i
        i = i[1]
        sub_45d050(i_2, 0xc)
    
    *(arg2 + 0x44) = 0
    *(arg2 + 0x3c) = 0
    *(arg2 + 0x40) = 0
    int32_t var_8_2 = 1
    int32_t* i_1 = *(arg2 + 0x30)
    
    while (i_1 != 0)
        int32_t* i_3 = i_1
        i_1 = i_1[1]
        sub_45d050(i_3, 0xc)
    
    *(arg2 + 0x38) = 0
    *(arg2 + 0x30) = 0
    *(arg2 + 0x34) = 0
    uint32_t result = zx.d(*(arg2 + 0x48))
    int32_t ecx = *(arg1 + 0xc)
    *(arg1 + 0xc) = result
    *(arg2 + 0x48) = ecx
    *(arg1 + 0x10) -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
