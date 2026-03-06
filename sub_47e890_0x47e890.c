// 函数名称: sub_47e890
// 虚拟地址: 0x47e890
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_47e890()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542ebc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_58 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_54
    int128_t* eax_3 = sub_47e2d0(&var_54)
    int128_t var_34 = *eax_3
    int128_t var_24 = eax_3[1]
    sub_47deb0(&var_34)
    
    if (data_e499d8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e499d8)
        
        if (data_e499d8 == 0xffffffff)
            int32_t var_8_1 = 0
            data_e499dc = sub_48d5b0("sys/sprite_3d_no_zread.material", 5)
            __Init_thread_footer(&data_e499d8)
    
    void* result = data_ce19c4
    *(result + 0x258) = data_e499dc
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
