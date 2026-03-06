// 函数名称: sub_4c6a60
// 虚拟地址: 0x4c6a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4c6a60()
{
    // 第一条实际指令: LRESULT eax_1 = SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
    LRESULT eax_1 = SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
    LRESULT esi = eax_1
    
    if (esi == 0xffffffff)
        return 0
    
    int32_t* ecx = data_ce26e4
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax_1 = sub_4459f0(ecx)
        
        if (eax_1 != 0 && esi s>= 0 && esi s< *(eax_1 + 4))
            return esi * 0x134 + *eax_1
    
    sub_44e4d0(eax_1, &data_5559b1, 
        "pParticleDef && currentSelection >= 0 && currentSelection < pParticleDef->mEmitterCount", 
        "c:\ax2017\engine\windows\editorwindow.cpp", 0x1c6, "EditorGetSelectedEmitter")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
