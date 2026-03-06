// 函数名称: sub_482b20
// 虚拟地址: 0x482b20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_482b20(int32_t* arg1, int32_t** arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: char* var_8 = arg3
    char* var_8 = arg3
    char* edx = arg3
    int32_t var_1c_1
    char const* const ecx
    
    if (edx != 0)
        arg1 = arg4[4]
        
        if (arg1 == 0 || *arg1 == 0)
            arg1:1.b = arg4[3].b
            
            if (arg1:1.b == 0)
                *arg2 = arg4[2]
                arg1:1.b = arg4[3].b
            
            void* edi_1 = &arg3[1]
            
            do
                arg1.b = *arg3
                arg3 = &arg3[1]
            while (arg1.b != 0)
            
            void* edi_2 = arg4[2]
            
            if (arg1:1.b == 0)
                sub_51d5b0(*arg4 + edi_2, edx, arg3 - edi_1 + 1)
            
            void* result = edi_2 + arg3 - edi_1 + 1
            arg4[2] = result
            return result
        
        char const* const var_18_3 = "DefBinSerializeString"
        var_1c_1 = 0x15e
        ecx = "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer.pDataSizeWithoutHWBuffers == 0"
    else
        char const* const var_18_1 = "DefBinSerializeString"
        var_1c_1 = 0x15b
        ecx = "pString"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\defbin.cpp", var_1c_1, 
        "DefBinSerializeString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
