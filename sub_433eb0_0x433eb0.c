// 函数名称: sub_433eb0
// 虚拟地址: 0x433eb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_433eb0(void* arg1)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x564)
    int32_t esi = *(arg1 + 0x564)
    
    if (data_5bcca8 == esi)
        return *(arg1 + 0x528)
    
    int32_t edx = *(arg1 + 0x4f0)
    
    if (edx s<= 0)
        void* esi_1 = data_65aabc
        
        if (esi_1 != 0)
            if (*(arg1 + 8) != *(esi_1 + 0x648))
                if (edx != 0 || *(arg1 + 0x108) != 1 || *(arg1 + 0x10c) != 6)
                    return 4
                
                return 3
            
            if (edx != 0)
                return 4
            
            int32_t eax_6 = *(arg1 + 0x108)
            
            if (eax_6 == 1)
                if (*(arg1 + 0x10c) == 0x12)
                    return 1
                
                if (eax_6 == 1 && *(arg1 + 0x10c) == 0x16)
                    return 2
            
            if (*(arg1 + 0x108) != 1 || *(arg1 + 0x10c) != 6)
                return 4
            
            return 3
    else
        void* edx_1 = data_65aabc
        
        if (edx_1 != 0)
            int32_t eax_3
            int32_t edx_2
            
            if (*(arg1 + 8) != *(edx_1 + 0x648))
                if (*(arg1 + 0xa0) == 0)
                    return 0
                
                edx_2 = data_5bcaec
                
                if (esi == edx_2 && *(arg1 + 0x508) == 0x16)
                    return 4
                
                eax_3 = *(arg1 + 0x170)
                
                if (eax_3 == 1 && *(arg1 + 0x174) == 0x16)
                    return 4
            else
                if (*(arg1 + 0xa0) == 0)
                    return 0
                
                edx_2 = data_5bcaec
                
                if (esi == edx_2 && *(arg1 + 0x508) == 0x12)
                    return 1
                
                eax_3 = *(arg1 + 0x170)
                
                if (eax_3 == 1 && *(arg1 + 0x174) == 0x12)
                    return 1
                
                if ((esi == edx_2 && *(arg1 + 0x508) == 0x16)
                        || (eax_3 == 1 && *(arg1 + 0x174) == 0x16))
                    return 2
                
                if ((esi == edx_2 && *(arg1 + 0x508) == 0x13)
                        || (eax_3 == 1 && *(arg1 + 0x174) == 0x13))
                    return 3
            
            if (esi != edx_2)
                if (eax_3 != 1 || *(arg1 + 0x174) != 6)
                    return 0
                
                return 3
            
            if (*(arg1 + 0x508) == 6 || (eax_3 == 1 && *(arg1 + 0x174) == 6))
                return 3
            
            return 0
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
