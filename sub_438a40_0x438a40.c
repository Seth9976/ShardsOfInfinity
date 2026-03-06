// 函数名称: sub_438a40
// 虚拟地址: 0x438a40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_438a40(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg2 = 0x1010101
    *arg2 = 0x1010101
    int32_t result = 0
    arg2[1].b = 1
    char* i = nullptr
    int32_t result_1 = 0
    
    if (*(arg1 + 0x2164) - 1 s> 0)
        do
            int32_t ecx = *(sub_41ad20() + 0xec)
            void* eax_4 = data_65aabc
            
            if (eax_4 == 0)
                sub_44e4d0(eax_4, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_7 = *(eax_4 + 0x648) + 1 + i
            void* edi_2 = eax_7 - ecx
            
            if (eax_7 s< ecx)
                edi_2 = eax_7
            
            uint32_t eax_8 = sub_445af0(arg1, edi_2)
            
            if (*(eax_8 + 8) s<= 0)
                result = result_1
                eax_8.b = 1
            else
                eax_8 = sub_447510(eax_8, edi_2, arg1, 0x33)
                
                if (eax_8.b != 0)
                    result = result_1
                    eax_8.b = 1
                else
                    result = result_1 + 1
                    result_1 = result
            
            *(i + arg2) = eax_8.b
            i = &i[1]
        while (i s< *(arg1 + 0x2164) - 1)
    
    return result
}
