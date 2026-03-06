// 函数名称: sub_4ae200
// 虚拟地址: 0x4ae200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4ae200(int32_t arg1, int32_t* arg2, char* arg3, float* arg4, int32_t* arg5, int32_t* arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: float eax
    float eax
    float edx
    eax, edx = sub_4afaf0(arg8)
    int32_t var_3c = arg7
    int32_t var_30 = 0
    int32_t var_24 = 0
    int32_t var_38 = 0
    int32_t var_2c = arg7
    int32_t var_20 = 0
    int32_t var_1c = 0x3f800000
    float var_34 = (arg4[2] - *arg4) * eax + *arg4
    float var_28 = (arg4[3] - arg4[1]) * edx + arg4[1]
    void var_60
    void* var_70 = &var_60
    return sub_4aded0(sub_412bf0(&var_3c, &data_57251c, &var_60, &var_3c), &var_60, arg3, arg2, *arg5, 
        *arg6, arg8)
}
