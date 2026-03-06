// 函数名称: sub_46fd80
// 虚拟地址: 0x46fd80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_46fd80(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t* eax_1 = sub_45d320(arg1)
    char* edi = *arg2
    int32_t* ebx = eax_1
    char* const esi_1 = &data_5559b1
    char* const edx = &data_5559b1
    char* const ecx = &data_5559b1
    
    if (edi != 0)
        edx = edi
    
    int32_t eax_3
    
    while (true)
        eax_1.b = *edx
        char temp0_1 = *ecx
        bool c_1 = eax_1.b u< temp0_1
        
        if (eax_1.b == temp0_1)
            if (eax_1.b == 0)
                eax_3 = 0
                break
            
            eax_1.b = edx[1]
            char temp1_1 = ecx[1]
            c_1 = eax_1.b u< temp1_1
            
            if (eax_1.b == temp1_1)
                edx = &edx[2]
                ecx = &ecx[2]
                
                if (eax_1.b != 0)
                    continue
                
                eax_3 = 0
                break
        
        eax_3 = sbb.d(eax_1, eax_1, c_1) | 1
        break
    
    if (eax_3 == 0)
        return sub_4b8790(sub_44f590(arg1 + 0x798, &data_5559b1), ebx, &data_5b1d6c, 0x6b)
    
    if (edi != 0)
        esi_1 = edi
    
    return sub_4b8610(eax_3, ebx, &data_5b1d6c, 0x6b, esi_1)
}
