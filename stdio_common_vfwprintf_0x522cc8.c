// 函数名称: ___stdio_common_vfwprintf
// 虚拟地址: 0x522cc8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___stdio_common_vfwprintf(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_18 = arg6
    int32_t var_18 = arg6
    int32_t var_10 = arg5
    int32_t var_28 = arg1
    int32_t var_14 = arg4
    int32_t var_c = arg3
    int32_t var_24 = arg2
    
    if (arg3 == 0 || arg4 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    int32_t var_1c = arg3
    int32_t* var_3c = &var_c
    int32_t* var_38_1 = &var_10
    int32_t* var_34_1 = &var_28
    int32_t* var_30_1 = &var_14
    int32_t* var_2c_1 = &var_18
    int32_t* var_40_1 = &var_1c
    int32_t var_20 = arg3
    return __crt_seh_guarded_call<class <lambda_75d23329f2fb3d02b2e1cf5509bb1caf>,class <lambda_c4f131f91cb4ec00a5b0a26aa161b8b4>&,class <lambda_114dc79c86b00c313cb0b6b3b001aaf8>,int32_t>::operator()<class <lambda_75d23329f2fb3d02b2e1cf5509bb1caf>,class <lambda_c4f131f91cb4ec00a5b0a26aa161b8b4>&,class <lambda_114dc79c86b00c313cb0b6b3b001aaf8> >(
        &var_20, &var_3c)
}
