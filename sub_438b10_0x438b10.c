// 函数名称: sub_438b10
// 虚拟地址: 0x438b10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_438b10(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* edi = data_5c2e30
    int32_t* edi = data_5c2e30
    int32_t i
    
    if (edi[1] == arg2 && *edi == 1)
        int32_t ebx_1 = edi[0xcf]
        int32_t esi_1 = 0
        
        if (ebx_1 s> 0)
            int32_t* edi_1 = edi[0xce]
            
            do
                uint32_t ecx_1 = zx.d((*edi_1).w)
                
                if (ecx_1 u>= 0xc8)
                    sub_44e4d0(i, &data_5559b1, "idNoMimic < MAX_CARDS", 
                        "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                i = 0
                int32_t* ecx_4 = *((ecx_1 << 5) + data_5c2e2c + 0x14) + 0x34
                
                do
                    int32_t edx = *ecx_4
                    
                    if ((edx & 0x20000000) != 0 && edx.b == 6)
                        i.b = 1
                        return i
                    
                    i += 1
                    ecx_4 = &ecx_4[3]
                while (i s< 4)
                
                esi_1 += 1
                edi_1 = &edi_1[1]
            while (esi_1 s< ebx_1)
    
    i.b = 0
    return i
}
