// 函数名称: sub_4c74c0
// 虚拟地址: 0x4c74c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c74c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t* ecx = data_ce26e4
    int32_t* eax
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax = sub_4459f0(ecx)
    
    int32_t var_14
    char* ecx_3
    
    if (ecx == 0 || ecx[1] != 0x19 || eax == 0)
        char const* const var_10_1 = "EmitterSetIndent"
        var_14 = 0x337
        ecx_3 = "pParticleDef"
    else
        if (arg1 s>= 0 && arg1 s< eax[1])
            int32_t result = *eax
            *(arg1 * 0x134 + result + 8) = arg2
            return result
        
        char const* const var_10 = "EmitterSetIndent"
        var_14 = 0x339
        ecx_3 = "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount"
    
    sub_44e4d0(eax, &data_5559b1, ecx_3, "c:\ax2017\engine\windows\editorwindow.cpp", var_14, 
        "EmitterSetIndent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
