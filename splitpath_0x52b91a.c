// 函数名称: __splitpath
// 虚拟地址: 0x52b91a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__splitpath(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_2c = arg2
    int32_t var_2c = arg2
    int32_t eax_1 = neg.d(arg2)
    int32_t var_28 = sbb.d(eax_1, eax_1, arg2 != 0) & 3
    int32_t var_24 = arg3
    int32_t eax_5 = neg.d(arg3)
    int32_t var_30 = 0.d
    int32_t var_20 = sbb.d(eax_5, eax_5, arg3 != 0) & 0x100
    int32_t var_1c = arg4
    int32_t eax_9 = neg.d(arg4)
    int32_t var_18 = sbb.d(eax_9, eax_9, arg4 != 0) & 0x100
    int32_t var_14 = arg5
    int32_t eax_13 = neg.d(arg5)
    int32_t var_10 = sbb.d(eax_13, eax_13, arg5 != 0) & 0x100
    return common_splitpath_internal<char,class <lambda_81dbc9fe9823f496b2e24900666b26ca>,class <lambda_2fb3ae78730702381aca7250c89aa958> >(
        arg1, &var_2c, 0.d)
}
