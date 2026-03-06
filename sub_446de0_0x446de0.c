// 函数名称: sub_446de0
// 虚拟地址: 0x446de0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_446de0(int32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    uint32_t eax_1 = sub_446460(eax, 1, &data_dfd4c8, 0xffffffff)
    uint32_t edx = 0
    
    if (data_dff634 != 0)
        goto label_446e4c
    
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    char* ecx_1
    
    if (eax_1 s> 0)
        int32_t edx_1 = 0
        int32_t eax_3 = data_dfee9c * 0x41c64e6d + 0x3039
        data_dfee9c = eax_3
        uint32_t temp1_1 = modu.dp.d(edx_1:eax_3, eax_1)
        eax_1 = divu.dp.d(edx_1:eax_3, eax_1)
        edx = temp1_1
    label_446e4c:
        uint32_t eax_4 = sub_446a60(eax_1, 1, &data_dfd4c8, 0xffffffff, edx)
        int32_t var_8
        eax_1 = sub_4460d0(&var_8, 0xa, &data_dfd4c8, arg2, &var_8)
        *eax_1 = eax_4
        
        if (arg2 != 0xffffffff)
            uint32_t ecx_2 = zx.d(eax_4.w)
            
            if (ecx_2 u< 0xc8)
                int32_t eax_6 = var_8
                *((ecx_2 << 5) + 0xdfd4d0) = arg2
                *((ecx_2 << 5) + 0xdfd4cc) = 0xa
                *((ecx_2 << 5) + 0xdfd4d8) = eax_6
                *((ecx_2 << 5) + 0xdfd4d4) = 0
                return sub_445a20(eax_6, 6, &data_dfd4c8, arg2, eax_4, 0, 0, 0)
            
            var_18 = "CardGet"
            var_1c = 0x90
            ecx_1 = "idNoMimic < MAX_CARDS"
        else
            var_18 = "AddCardTail"
            var_1c = 0x1a7
            ecx_1 = "where == CW_GLOBAL_DECK || where == CW_GLOBAL_DISCARD || where == CW_GLOBAL_CENTER "
            "|| where == CW_GLOBAL_HERO"
        
        var_20 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
    else
        var_18 = "RandomLCInt"
        var_1c = 0xcd
        var_20 = "c:\ax2017\engine\random.cpp"
        ecx_1 = "maxPlusOne > 0"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
