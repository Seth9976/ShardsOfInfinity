// 函数名称: sub_4e04c0
// 虚拟地址: 0x4e04c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4e04c0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    char* esi = arg2
    int32_t ebx
    ebx.b = *esi
    
    while (ebx.b != 0)
        int32_t eax_1 = sx.d(ebx.b)
        int32_t var_18_1 = *arg1
        char const* const var_24_2
        uint32_t eax
        
        if (eax_1 == 0x3c)
            int32_t var_1c_2 = 4
            int32_t var_20_2 = 1
            var_24_2 = "&lt;"
        label_4e050f:
            eax = _fwrite(var_24_2, 1, 4)
            
            if (eax != 4)
                sub_44e4d0(eax, &data_5559b1, "resultCount == len", "c:\ax2017\engine\xmlwriter.cpp", 
                    0x29, "sXmlEmit")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
        else
            if (eax_1 == 0x3e)
                int32_t var_1c_1 = 4
                int32_t var_20_1 = 1
                var_24_2 = "&gt;"
                goto label_4e050f
            
            var_8.b = ebx.b
            eax = _fwrite(&var_8, 1, 1)
            
            if (eax != 1)
                sub_44e4d0(eax, &data_5559b1, "resultCount == 1", "c:\ax2017\engine\xmlwriter.cpp", 
                    0x31, "sXmlEmitChar")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
        ebx.b = esi[1]
        esi = &esi[1]
}
