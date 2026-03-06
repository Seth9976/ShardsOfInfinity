// 函数名称: sub_49ee40
// 虚拟地址: 0x49ee40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_49ee40(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_9c
    void var_9c
    int32_t eax_1 = __security_cookie ^ &var_9c
    void* eax_2 = data_cdf428
    
    if (eax_2 == 0)
        sub_44e4d0(eax_2, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_3 = *(eax_2 + 0x10)
    *(eax_3 + 0x20) += 1
    int64_t var_98
    _memset(&var_98, 0, 0x88)
    bool cond:0 = *(arg1 + 0x75) == 0
    int32_t result = 0x3f800000
    var_98 = 0x3f8000003f800000
    int32_t var_90 = 0x3f800000
    int128_t var_74
    __builtin_memcpy(&var_74, 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x20)
    int128_t var_30 = *(arg1 + 0x2c)
    int128_t var_20 = *(arg1 + 0x3c)
    
    if (not(cond:0) && *(arg1 + 0x74) != 0)
        result = sub_45ade0(&var_20:4)
    
    void* esi = nullptr
    
    while (true)
        if (esi != 0)
            esi = *(esi + 0x2fc)
        else
            esi = *(arg1 + 8)
        
        if (esi == 0)
            break
        
        result = sub_49eb70(esi, arg2)
    
    if (*(arg1 + 0x75) != 0 && *(arg1 + 0x74) != 0)
        sub_45ae60()
    
    @__security_check_cookie@4(eax_1 ^ &var_9c)
    return result
}
