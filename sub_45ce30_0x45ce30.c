// 函数名称: sub_45ce30
// 虚拟地址: 0x45ce30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_45ce30(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[2]
    int32_t ecx = arg1[2]
    int32_t var_10
    char const* const ecx_1
    
    if (ecx s> 0)
        int32_t edi_1 = arg1[4]
        
        if (edi_1 u>= 4)
            void* result = sub_45cd70(ecx * edi_1 + 4)
            *result = arg1[1]
            int32_t i = 0
            void* result_1 = *arg1
            arg1[1] = result
            
            if (arg1[2] s> 0)
                result += 4
                
                do
                    *result = result_1
                    i += 1
                    result_1 = result
                    result += edi_1
                while (i s< arg1[2])
            
            *arg1 = result_1
            return result
        
        char const* const var_c_1 = "XAllocator::Grow"
        var_10 = 0x33
        ecx_1 = "mItemSize >= sizeof(void*)"
    else
        char const* const var_c = "XAllocator::Grow"
        var_10 = 0x32
        ecx_1 = "mGrowCount > 0"
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\engine\xalloc.cpp", var_10, "XAllocator::Grow")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
