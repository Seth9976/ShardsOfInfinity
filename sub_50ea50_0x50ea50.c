// 函数名称: sub_50ea50
// 虚拟地址: 0x50ea50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_50ea50(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_c8
    void var_c8
    int32_t eax_1 = __security_cookie ^ &var_c8
    int32_t eax_2 = arg1 + arg2
    int32_t var_20 = arg1
    int32_t var_b8 = 0
    int32_t var_a8 = 0
    int32_t var_1c = eax_2
    int32_t result = sub_51a040(&var_c8, "#?RADIANCE\n")
    int32_t var_20_1 = arg1
    int32_t var_1c_1 = eax_2
    
    if (result == 0)
        result = sub_51a040(&var_c8, "#?RGBE\n")
    
    @__security_check_cookie@4(eax_1 ^ &var_c8)
    return result
}
