// 函数名称: ___stdio_common_vfscanf
// 虚拟地址: 0x52970e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___stdio_common_vfscanf(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_18 = arg6
    int32_t var_18 = arg6
    int32_t var_c = arg5
    int32_t var_28 = arg1
    int32_t var_14 = arg4
    int32_t var_10 = arg3
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
    return __crt_seh_guarded_call<class <lambda_274ecf0a8038e561263518ab346655e8>,class <lambda_21448eb78dd3c4a522ed7c65a98d88e6>&,class <lambda_0ca1de2171e49cefb1e8dc85c06db622>,int32_t>::operator()<class <lambda_274ecf0a8038e561263518ab346655e8>,class <lambda_21448eb78dd3c4a522ed7c65a98d88e6>&,class <lambda_0ca1de2171e49cefb1e8dc85c06db622> >(
        &var_20, &var_3c)
}
