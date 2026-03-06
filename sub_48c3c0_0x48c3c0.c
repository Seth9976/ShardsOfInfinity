// 函数名称: sub_48c3c0
// 虚拟地址: 0x48c3c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_48c3c0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 8)
    int32_t esi = *(arg1 + 8)
    int32_t i
    
    if (esi != 0)
        int32_t edi_1 = *(arg1 + 4)
        
        for (i = 0; i != 0xffffffff; )
            int32_t ecx_2 = i * 0xf
            i += 1
            
            if (i s>= esi)
                i = 0xffffffff
            
            if (*(edi_1 + (ecx_2 << 2)) == arg2)
                return edi_1 + (ecx_2 << 2)
    
    sub_44e4d0(i, &data_5559b1, "Halt", "c:\ax2017\engine\definition.cpp", 0x47b, "DefFindField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
