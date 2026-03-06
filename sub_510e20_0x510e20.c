// 函数名称: sub_510e20
// 虚拟地址: 0x510e20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_510e20(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    char eax = edi[0x11f1].b
    
    if (eax != 0xff)
        edi[0x11f1].b = 0xff
        return eax
    
    void* esi = *edi
    char* eax_1 = *(esi + 0xa8)
    
    if (eax_1 u< *(esi + 0xac))
        goto label_510e5a
    
    if (*(esi + 0x20) != 0)
        sub_50ebb0(esi)
        eax_1 = *(esi + 0xa8)
    label_510e5a:
        arg1.b = *eax_1
        *(esi + 0xa8) = &eax_1[1]
        
        if (arg1.b == 0xff)
            do
                void* esi_1 = *edi
                char* eax_2 = *(esi_1 + 0xa8)
                
                if (eax_2 u>= *(esi_1 + 0xac))
                    if (*(esi_1 + 0x20) == 0)
                        eax_2.b = 0
                        return eax_2
                    
                    sub_50ebb0(esi_1)
                    eax_2 = *(esi_1 + 0xa8)
                
                arg1.b = *eax_2
                *(esi_1 + 0xa8) = &eax_2[1]
            while (arg1.b == 0xff)
            
            void* eax_3
            eax_3.b = arg1.b
            return eax_3
    
    eax_1.b = 0xff
    return eax_1
}
