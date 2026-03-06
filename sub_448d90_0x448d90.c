// 函数名称: sub_448d90
// 虚拟地址: 0x448d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_448d90(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t* esi = arg3
    void* result_1 = sub_445b50(arg3, arg2)
    int32_t ecx = esi[0x85a]
    void* result = result_1
    
    if (ecx != 2 && ecx != 3)
        uint32_t (* eax)[0x4] = sub_44d360(esi, arg2)
        (*eax)[5] = 1
        (*eax)[6] = 3
        (*eax)[7] = arg5
        result_1 = result
    
    int32_t ecx_2 = *(result_1 + 8)
    uint32_t edx_1 = 0x32 - ecx_2
    
    if (arg5 s< edx_1)
        edx_1 = arg5
    
    int32_t eax_1 = ecx_2 + edx_1
    int32_t var_18 = eax_1
    uint32_t var_1c = edx_1
    *(result + 8) = eax_1
    int32_t var_20 = ecx_2
    uint32_t var_24 = arg5
    int32_t var_28 = *result
    char const* const var_2c = "%s gains %d health."
    int32_t* var_30 = esi
    sub_445a20(result, 0x13, esi, arg2, arg4, arg5, edx_1, 0)
    
    if (*(result + 8) s>= 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "player.health >= 0", "c:\ax2017\jams\shards\code\shardsgame.cpp", 
        0x745, "ExecGainHealth")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
