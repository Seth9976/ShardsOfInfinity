// 函数名称: sub_44f690
// 虚拟地址: 0x44f690
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __thiscallsub_44f690(int32_t* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 
    
    char* eax_1 = *arg1
    void* ebx_1
    
    if (eax_1 == 0 || *eax_1 == 0)
        sub_44f060(arg1, arg3)
        ebx_1 = nullptr
    else
        char* eax_2 = sub_44f000(arg1)
        void* edx_1 = *arg1
        ebx_1 = *(eax_2 + 8)
        void* eax_3 = edx_1 + ebx_1
        
        if (eax_3 u>= arg2)
            eax_3 = arg2 + arg3
            
            if (eax_3 u>= edx_1)
                sub_44e4d0(eax_3, &data_5559b1, 
                    "mMagicDataPtr + originalLength < str || str + length < mMagicDataPtr", 
                    "c:\ax2017\engine\xstring.cpp", 0x11d, "XString::AppendLength")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
        
        sub_44f100(eax_3, ebx_1 + arg3, arg1, 1)
    
    sub_51d5b0(*arg1 + ebx_1, arg2, arg3)
    *(*arg1 + ebx_1 + arg3) = 0
}
