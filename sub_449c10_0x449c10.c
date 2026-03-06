// 函数名称: sub_449c10
// 虚拟地址: 0x449c10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_449c10(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: void* result_3 = sub_447380(arg3, arg5)
    void* result_3 = sub_447380(arg3, arg5)
    uint32_t ecx_1 = zx.d(arg4.w)
    void* result_1 = result_3
    int32_t var_24
    char const* const var_20
    char* ecx_2
    
    if (ecx_1 u< 0xc8)
        int32_t var_20_1 = *(result_3 + 4)
        int32_t var_24_1 = *(*((ecx_1 << 5) + arg3 + 0x14) + 0x24)
        int32_t var_28_1 = *sub_445b50(arg3, arg2)
        char const* const var_2c_1 = "%s copies %s (x%d)"
        void* var_30_1 = arg3
        int32_t eax_2 = *(arg3 + 0x2168)
        uint32_t ecx_6
        
        if (eax_2 == 2 || eax_2 == 3)
            ecx_6 = arg4
        else
            uint32_t (* eax_3)[0x4] = sub_44d360(arg3, arg2)
            ecx_6 = arg4
            (*eax_3)[5] = 5
            eax_3[2][0] = ecx_6
        
        void* result = result_1
        void* result_2 = nullptr
        
        if (*(result + 4) s<= 0)
            return result
        
        while (true)
            uint32_t eax_4 = sub_4497f0(result, arg2, arg3, ecx_6)
            result_3 = sub_449980(eax_4, arg2, arg3, eax_4, 0)
            
            if (arg2 == 0xffffffff)
                break
            
            sub_445a20(sub_4461a0(sub_446860(arg3, eax_4), eax_4, arg3, 5, arg2), 9, arg3, arg2, eax_4, 
                0, 0, 0)
            result = result_2 + 1
            result_2 = result
            ecx_6 = arg4
            
            if (result s>= *(result_1 + 4))
                return result
        
        var_20 = "MoveCard"
        var_24 = 0x294
        ecx_2 = "where == CW_GLOBAL_DECK || where == CW_GLOBAL_DISCARD"
    else
        var_20 = "CardGet"
        var_24 = 0x90
        ecx_2 = "idNoMimic < MAX_CARDS"
    
    sub_44e4d0(result_3, &data_5559b1, ecx_2, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_24, 
        var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
