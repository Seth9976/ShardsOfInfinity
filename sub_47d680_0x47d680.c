// 函数名称: sub_47d680
// 虚拟地址: 0x47d680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_47d680(int128_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542e8c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_e49970 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e49970)
        
        if (data_e49970 == 0xffffffff)
            int32_t var_8_1 = 0
            data_e49974 = sub_48d5b0("sys\white_pixel.texture", 3)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_e49970)
    
    int128_t xmm0 = data_59e3f0
    int32_t* ecx = data_e49974
    int32_t var_1c = *arg2
    int32_t var_18 = 0
    int128_t var_2c = xmm0
    int32_t result = sub_47d1f0(&var_2c, arg1, ecx, &var_2c, &var_1c, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
