// 函数名称: sub_501690
// 虚拟地址: 0x501690
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_501690(int32_t arg1, char* arg2, char* arg3, char* arg4, char* arg5, char* arg6, int32_t arg7)
{
    // 第一条实际指令: char* var_8 = arg3
    char* var_8 = arg3
    int32_t var_18 = 0x1c
    int32_t var_1c = 1
    char** result_1 = _calloc()
    result_1[5] = arg7
    char** result = result_1
    *result = sub_501620(arg3)
    result[1] = sub_501620(arg2)
    result[4] = sub_501620(arg4)
    char* ebx_1
    
    if (arg7 == 1 || arg7 == 2)
        char* edi_1 = arg5
        char* eax_2
        
        if (edi_1 != 0)
            eax_2.b = *edi_1
        
        if (edi_1 == 0 || eax_2.b == 0)
            eax_2.b = 0
            edi_1 = &data_5559b1
        
        void* esi_1 = nullptr
        char* edx = edi_1
        
        if (eax_2.b != 0)
            char i
            
            do
                char* eax_4 = edx
                
                do
                    i = *eax_4
                    eax_4 = &eax_4[1]
                while (i != 0)
                
                edx = &edx[1] + eax_4 - &eax_4[1]
                esi_1 = edx - edi_1
            while (*edx != i)
        
        int32_t var_18_1 = 1
        void* var_1c_1 = esi_1 + 1
        ebx_1 = _calloc()
        
        if (ebx_1 != 0)
            sub_51dd40(ebx_1, edi_1, esi_1)
        else
            int32_t var_18_2 = 1
            int32_t var_1c_2 = 1
            ebx_1 = _calloc()
        
        result = result_1
    else
        ebx_1 = sub_501620(arg5)
    
    result[2] = ebx_1
    result[3] = sub_501620(arg6)
    return result
}
