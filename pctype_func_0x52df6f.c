// 函数名称: ___pctype_func
// 虚拟地址: 0x52df6f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall___pctype_func(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* eax = sub_530312()
    var_8 = eax[0x13]
    ___acrt_update_multibyte_info(eax, &var_8)
    return *var_8
}
