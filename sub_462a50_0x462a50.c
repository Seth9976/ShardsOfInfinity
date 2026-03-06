// 函数名称: sub_462a50
// 虚拟地址: 0x462a50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_462a50(void* arg1)
{
    // 第一条实际指令: void* var_c = arg1
    void* var_c = arg1
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_47b6d0(arg1 + 0x758)
    int32_t i = 0
    
    if (*(arg1 + 0x7f4) s> 0)
        do
            sub_4627e0(arg1, i)
            result = sub_462a50()
            i += 1
        while (i s< *(arg1 + 0x7f4))
    
    if (*(arg1 + 0x69c) == 2)
        int32_t edi_1 = 0
        void* esi = arg1 + 0xbf8
        
        while (true)
            int32_t edx_2 = *esi
            
            if (edx_2 == 0)
                break
            
            result = zx.d(edx_2.w)
            
            if (result u< data_5c99a4)
                void* ecx_4 = result * 0x1008 + data_5c99a0
                
                if (*(ecx_4 + 0x1004) == edx_2)
                    if (ecx_4 == 0)
                        break
                    
                    result = sub_462a50()
                    edi_1 += 1
                    esi += 4
                    
                    if (edi_1 s>= 5)
                        break
                    
                    continue
            
            sub_44e4d0(result, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return result
}
