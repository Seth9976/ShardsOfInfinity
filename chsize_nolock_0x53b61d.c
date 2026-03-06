// 函数名称: __chsize_nolock
// 虚拟地址: 0x53b61d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__chsize_nolock(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_1c = edi
    int32_t eax
    int32_t edx
    eax, edx = __lseeki64_nolock(arg1, 0, 0, FILE_CURRENT)
    
    if ((eax & edx) != 0xffffffff)
        int32_t eax_3
        int32_t edx_1
        eax_3, edx_1 = __lseeki64_nolock(arg1, 0, 0, FILE_END)
        
        if ((eax_3 & edx_1) != 0xffffffff)
            enum CONSOLE_MODE ebx_2 = arg2 - eax_3
            bool c_1 = arg2 u< eax_3
            int32_t i_2 = sbb.d(arg3, edx_1, c_1)
            bool s_1 = sbb.d(arg3, edx_1, c_1) s< 0
            bool o_1 = unimplemented  {sbb eax, edx}
            int32_t i_1 = i_2
            
            if (s_1 || ((sbb.d(arg3, edx_1, c_1) == 0 || s_1 != o_1) && ebx_2 u<= 0))
                if (i_2 s> 0 || (i_2 s>= 0 && ebx_2 u>= 0))
                label_53b717:
                    int32_t eax_12
                    int32_t edx_3
                    eax_12, edx_3 = __lseeki64_nolock(arg1, eax, edx, FILE_BEGIN)
                    
                    if ((eax_12 & edx_3) != 0xffffffff)
                        return 0
                else
                    int32_t eax_18
                    int32_t edx_4
                    eax_18, edx_4 = __lseeki64_nolock(arg1, arg2, arg3, FILE_BEGIN)
                    
                    if ((eax_18 & edx_4) != 0xffffffff)
                        if (SetEndOfFile(__get_osfhandle(arg1)) != 0)
                            goto label_53b717
                        
                        *__errno() = 0xd
                        void* eax_23 = ___doserrno()
                        *eax_23 = GetLastError()
                
                return *__errno()
            
            int16_t* eax_5 = __calloc_base(0x1000, 1)
            
            if (eax_5 == 0)
                *__errno() = 0xc
            label_53b74a:
                int32_t result = *__errno()
                __free_base(eax_5)
                return result
            
            int32_t eax_7 = sub_52f373(arg1, 0x8000)
            int32_t i = i_1
            
            while (true)
                enum CONSOLE_MODE eax_8
                
                if (i s< 0 || (i s<= 0 && ebx_2 u< 0x1000))
                    eax_8 = ebx_2
                    goto label_53b6d9
                
                do
                    eax_8 = 0x1000
                label_53b6d9:
                    int32_t eax_9 = __write_nolock(arg1, eax_5, eax_8)
                    
                    if (eax_9 == 0xffffffff)
                        if (*___doserrno() == 5)
                            *__errno() = 0xd
                        
                        goto label_53b74a
                    
                    int32_t eax_10
                    int32_t edx_2
                    edx_2:eax_10 = sx.q(eax_9)
                    enum CONSOLE_MODE temp3_1 = ebx_2
                    ebx_2 -= eax_10
                    i = sbb.d(i_1, edx_2, temp3_1 u< eax_10)
                    i_1 = i
                while (i s> 0)
                
                if (i s>= 0 && ebx_2 != 0)
                    continue
                
                sub_52f373(arg1, eax_7)
                __free_base(eax_5)
                break
            
            goto label_53b717
    
    return *__errno()
}
