// 函数名称: sub_46e480
// 虚拟地址: 0x46e480
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_46e480(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = data_5cd9f0
    int32_t esi = data_5cd9f0
    int32_t eax = 0
    
    if (esi s> 0)
        void* edx_1 = &data_5c99f0
        
        do
            if (*edx_1 == arg1)
                return (eax << 4) + &data_5c99f0
            
            eax += 1
            edx_1 += 0x10
        while (eax s< esi)
    
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x2145, "GetDisplayItem")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
