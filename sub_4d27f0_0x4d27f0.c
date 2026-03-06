// 函数名称: sub_4d27f0
// 虚拟地址: 0x4d27f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4d27f0(int32_t arg1, char** arg2)
{
    // 第一条实际指令: int32_t param0
    int32_t param0
    int32_t eax_1 = __security_cookie ^ &param0
    void var_118
    _memset(&var_118, 0, 0x104)
    _memset(&param0, 0, 0x58)
    int32_t var_16c = data_ce1c8c
    void* var_154 = &var_118
    param0 = 0x58
    int32_t var_150 = 0x104
    int32_t var_164 = arg1
    int32_t var_158 = 0
    int32_t var_14c = 0
    int32_t var_148 = 0
    int32_t var_144 = 0
    int32_t var_13c = 0x2001808
    
    if (GetOpenFileNameA(&param0) == 0)
        BOOL eax_3
        eax_3.b = 0
        @__security_check_cookie@4(eax_1 ^ &param0)
        return eax_3
    
    sub_44f590(arg2, &var_118)
    char** eax_4
    eax_4.b = 1
    @__security_check_cookie@4(eax_1 ^ &param0)
    return eax_4
}
