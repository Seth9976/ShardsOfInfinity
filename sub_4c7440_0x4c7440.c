// 函数名称: sub_4c7440
// 虚拟地址: 0x4c7440
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c7440(int32_t arg1)
{
    // 第一条实际指令: int32_t* ecx = data_ce26e4
    int32_t* ecx = data_ce26e4
    int32_t* eax
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax = sub_4459f0(ecx)
    
    int32_t var_c
    char* ecx_2
    
    if (ecx == 0 || ecx[1] != 0x19 || eax == 0)
        char const* const var_8_1 = "EmitterGetIndent"
        var_c = 0x32d
        ecx_2 = "pParticleDef"
    else
        if (arg1 s>= 0 && arg1 s< eax[1])
            return *(arg1 * 0x134 + *eax + 8)
        
        char const* const var_8 = "EmitterGetIndent"
        var_c = 0x32f
        ecx_2 = "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount"
    
    sub_44e4d0(eax, &data_5559b1, ecx_2, "c:\ax2017\engine\windows\editorwindow.cpp", var_c, 
        "EmitterGetIndent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
