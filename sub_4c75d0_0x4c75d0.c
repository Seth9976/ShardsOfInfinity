// 函数名称: sub_4c75d0
// 虚拟地址: 0x4c75d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c75d0(int32_t arg1)
{
    // 第一条实际指令: void* eax = sub_4c7440(arg1)
    void* eax = sub_4c7440(arg1)
    int32_t* ecx = data_ce26e4
    void* edi = eax
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax = sub_4459f0(ecx)
        
        if (eax != 0)
            for (int32_t i = arg1 + 1; i s< *(eax + 4); i += 1)
                int32_t eax_1 = sub_4c7440(i)
                
                if (eax_1 s< edi)
                    break
                
                if (eax_1 == edi)
                    return i
            
            return 0xffffffff
    
    sub_44e4d0(eax, &data_5559b1, "pParticleDef", "c:\ax2017\engine\windows\editorwindow.cpp", 0x370, 
        "EmitterNextSibling")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
