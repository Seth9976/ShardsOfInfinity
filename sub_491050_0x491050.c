// 函数名称: sub_491050
// 虚拟地址: 0x491050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_491050(char* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    int32_t i = 0
    uint32_t eax
    
    if (data_cdf478 s> 0)
        void* edi_1 = &data_cdf480
        
        do
            eax = __stricmp(**edi_1, arg1)
            
            if (eax == 0)
                return *edi_1
            
            i += 1
            edi_1 += 4
        while (i s< data_cdf478)
    
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\deftyperegistry.cpp", 0x43, 
        "DefMapFromTypeString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
