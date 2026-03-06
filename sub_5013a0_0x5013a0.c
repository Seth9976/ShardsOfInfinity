// 函数名称: sub_5013a0
// 虚拟地址: 0x5013a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_5013a0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == arg2)
    if (arg1 == arg2)
        return 
    
    int32_t* eax_1 = sub_485450(data_d76c60)
    int32_t ecx_1 = eax_1[1]
    int32_t var_144_1
    char const* const var_140_1
    char* ecx_2
    
    if (arg1 s>= ecx_1)
        var_140_1 = "MoveItem"
        var_144_1 = 0x932
        ecx_2 = "source < layout.numElements"
    label_50147a:
        sub_44e4d0(eax_1, &data_5559b1, ecx_2, "c:\ax2017\engine\editor\uieditor.cpp", var_144_1, 
            var_140_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (arg2 s>= ecx_1)
        var_140_1 = "MoveItem"
        var_144_1 = 0x933
        ecx_2 = "dest < layout.numElements"
        goto label_50147a
    
    void* ecx_3 = *eax_1
    char* eax_3 = arg1 * 0x118 + ecx_3
    void var_12c
    __builtin_memcpy(&var_12c, eax_3, 0x118)
    int32_t esi_2 = arg2 * 0x118
    char* var_148_1
    char* var_144_2
    void* var_140_2
    
    if (arg1 s>= arg2)
        char* ecx_5 = ecx_3 + esi_2
        var_140_2 = (arg1 - arg2) * 0x118
        var_144_2 = ecx_5
        var_148_1 = &ecx_5[0x118]
    else
        var_140_2 = (arg2 - arg1) * 0x118
        var_144_2 = &eax_3[0x118]
        var_148_1 = eax_3
    
    sub_51dd40(var_148_1, var_144_2, var_140_2)
    __builtin_memcpy(*eax_1 + esi_2, &var_12c, 0x118)
}
