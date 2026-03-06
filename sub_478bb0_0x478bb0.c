// 函数名称: sub_478bb0
// 虚拟地址: 0x478bb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_478bb0()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_64f844 s> 0)
        int32_t* ebx_1 = &data_5cfa58
        
        do
            int32_t* esi_1 = *ebx_1
            int32_t* eax
            
            if (esi_1[1] != 0)
                sub_44e4d0(eax, &data_5559b1, "gUI2Editor.undoStack[i].def->pParseTree == NULL", 
                    "c:\ax2017\engine\ui2.cpp", 0x3356, "UI2EditorDispose")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if ((esi_1[2].b & 1) == 0)
                esi_1[3]
                sub_48b5b0(*esi_1)
                char** ecx_2 = esi_1[1]
                *esi_1 = 0
                
                if (ecx_2 != 0)
                    sub_491590(ecx_2)
                    esi_1[1] = 0
            
            eax = _aligned_free_base(esi_1)
            i += 1
            ebx_1 = &ebx_1[0x407]
        while (i s< data_64f844)
    
    bool cond:0 = data_5cd9fc == 0
    data_64f840 = 0
    data_64f844 = 0
    data_5cea2c = 0
    
    if (cond:0)
        return 
    
    data_5cd9f8 = 0
    sub_45e9a0(&data_5cd9fc)
    data_5cd9fc = 0
}
