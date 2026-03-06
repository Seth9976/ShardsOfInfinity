// 函数名称: sub_50eaf0
// 虚拟地址: 0x50eaf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_50eaf0(int32_t* arg1)
{
    // 第一条实际指令: void var_cc
    void var_cc
    int32_t eax_1 = __security_cookie ^ &var_cc
    int32_t* var_dc = arg1
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_52b118()
    void var_c8
    sub_50db60(eax_2, edx, &var_c8, arg1)
    int32_t result = sub_51a040(&var_c8, "#?RADIANCE\n")
    int32_t var_18
    int32_t var_20 = var_18
    int32_t var_14
    int32_t var_1c = var_14
    
    if (result == 0)
        result = sub_51a040(&var_c8, "#?RGBE\n")
        int32_t var_20_1 = var_18
        int32_t var_1c_1 = var_14
    
    _fseek(arg1, eax_2, 0)
    @__security_check_cookie@4(eax_1 ^ &var_cc)
    return result
}
