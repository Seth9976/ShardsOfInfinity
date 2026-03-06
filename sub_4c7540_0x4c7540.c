// 函数名称: sub_4c7540
// 虚拟地址: 0x4c7540
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c7540(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* eax = sub_4c7440(arg1)
    int32_t* ecx = data_ce26e4
    void* var_8_1 = eax
    
    if (ecx != 0 && ecx[1] == 0x19)
        eax = sub_4459f0(ecx)
        
        if (eax != 0)
            int32_t i = arg1 + 1
            int32_t result = 0
            
            while (i s< *(eax + 4))
                if (sub_4c7440(i) s<= var_8_1)
                    break
                
                i += 1
                result += 1
            
            return result
    
    sub_44e4d0(eax, &data_5559b1, "pParticleDef", "c:\ax2017\engine\windows\editorwindow.cpp", 0x343, 
        "EmitterNumDescendants")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
