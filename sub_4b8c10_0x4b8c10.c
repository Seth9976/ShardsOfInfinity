// 函数名称: sub_4b8c10
// 虚拟地址: 0x4b8c10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4b8c10(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t var_c
    char const* const var_8
    int32_t result
    char* ecx_1
    
    if (arg2 s< 0 || arg2 s>= *(arg1 + 0x10))
        var_8 = "AttribTagGetField"
        var_c = 0x8b
        ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
    else
        result = *(*(*(arg1 + 0xc) + (arg2 << 2)) + 0xc)
        
        if (result != 0)
            return result
        
        var_8 = "AttribTagGetDefMap"
        var_c = 0x1fe
        ecx_1 = "pAttribField->pDefMap"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\engine\attribmap.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
