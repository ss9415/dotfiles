Vim�UnDo� ���XĻ�[�1ۂ&�H��cN��x)}W�I�      #// conveniently accessible from C.       "                       `R	�    _�                             ����                                                                                                                                                                                                                                                                                                                                                  V        `Q'    �                	/**write:   ( * Writes a character to the framebuffer    *   ' * @param buf The pointer to the buffer   & * @param len The length of the string    */   'int write(char *buf, unsigned int len);    5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             `Q'�     �   	            3void outb(unsigned short port, unsigned char data);5�_�                    
   :    ����                                                                                                                                                                                                                                                                                                                                                             `Q'�     �   	            :extern void outb(unsigned short port, unsigned char data);5�_�                    
   I    ����                                                                                                                                                                                                                                                                                                                                                             `Q'�    �   	            Iextern void outb(unsigned short port, unsigned char data) __asm__("outb")5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             `Q(     �   	            Jextern void outb(unsigned short port, unsigned char data) __asm__("outb");5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             `Q(     �   	            Ixtern void outb(unsigned short port, unsigned char data) __asm__("outb");5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             `Q(     �   	            Htern void outb(unsigned short port, unsigned char data) __asm__("outb");5�_�      	              
   I    ����                                                                                                                                                                                                                                                                                                                                                             `Q(    �   	            Jextern void outb(unsigned short port, unsigned char data) __asm__("outb");5�_�      
           	   
        ����                                                                                                                                                                                                                                                                                                                                                             `QE�    �   	            :extern void outb(unsigned short port, unsigned char data);5�_�   	              
   
        ����                                                                                                                                                                                                                                                                                                                                                             `QE�     �   	            =// extern void outb(unsigned short port, unsigned char data);5�_�   
                 
        ����                                                                                                                                                                                                                                                                                                                                                             `QE�     �   	            </ extern void outb(unsigned short port, unsigned char data);5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             `QE�    �   	            ; extern void outb(unsigned short port, unsigned char data);5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `R	o     �   
             �   
          5�_�                       %    ����                                                                                                                                                                                                                                                                                                                               *          %       V   *    `R	r     �               %     *  Read a byte from an I/O port.        *   0     *  @param  port The address of the I/O port   "     *  @return      The read byte        */   +    unsigned char inb(unsigned short port);5�_�                           ����                                                                                                                                                                                                                                                                                                                               *          %       V   *    `R	t     �   
          5�_�                            ����                                                                                                                                                                                                                                                                                                                               *          %       V   *    `R	u     �               'unsigned char inb(unsigned short port);5�_�                           ����                                                                                                                                                                                                                                                                                                                               *          %       V   *    `R	{     �                 #endif /* INCLUDE_IO_H */5�_�                           ����                                                                                                                                                                                                                                                                                                                               *          %       V   *    `R	~     �                 #endif // INCLUDE_IO_H */5�_�                           ����                                                                                                                                                                                                                                                                                                                               *          %       V   *    `R	�     �                 #endif // INCLUDE_IO_H5�_�                            ����                                                                                                                                                                                                                                                                                                                                       	           V        `R	�     �      
         */�      	         /*  @param data The data to send to the I/O port�               /*  @param port The I/O port to send the data to�               *�               >*  Sends the given data to the given I/O port. Defined in io.s5�_�                            ����                                                                                                                                                                                                                                                                                                                                       	           V        `R	�     �                �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `R	�     �                5�_�                        "    ����                                                                                                                                                                                                                                                                                                                            	                      V        `R	�    �               #// conveniently accessible from C. 5��