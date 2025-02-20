;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.6.0 #9615 (MINGW32)
;--------------------------------------------------------
	.module simpleserial
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _simpleserial_decode
	.globl _simpleserial_encode
	.globl _putchar
	.globl _getchar
	.globl _simpleserial_get
	.globl _simpleserial_put
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'simpleserial_encode'
;------------------------------------------------------------
;data                      Allocated to stack - _bp -5
;ascii                     Allocated to stack - _bp +1
;i                         Allocated to stack - _bp +4
;n_hi                      Allocated to registers r5 
;n_lo                      Allocated to stack - _bp +6
;------------------------------------------------------------
;	simpleserial.c:18: void simpleserial_encode(uint8_t* ascii, uint8_t* data)
;	-----------------------------------------
;	 function simpleserial_encode
;	-----------------------------------------
_simpleserial_encode:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	push	_bp
	mov	_bp,sp
	push	dpl
	push	dph
	push	b
	inc	sp
	inc	sp
	inc	sp
;	simpleserial.c:22: ascii[0] = 'r';
	mov	r0,_bp
	inc	r0
	mov	dpl,@r0
	inc	r0
	mov	dph,@r0
	inc	r0
	mov	b,@r0
	mov	a,#0x72
	lcall	__gptrput
;	simpleserial.c:23: for(i = 0; i < BLOCK_LENGTH; i++)
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	clr	a
	mov	@r0,a
	inc	r0
	mov	@r0,a
00102$:
;	simpleserial.c:25: unsigned char n_hi = (data[i] >> 4) & 0x0f;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,_bp
	add	a,#0x04
	mov	r1,a
	mov	a,@r1
	add	a,@r0
	mov	r2,a
	inc	r1
	mov	a,@r1
	inc	r0
	addc	a,@r0
	mov	r3,a
	inc	r0
	mov	ar4,@r0
	mov	dpl,r2
	mov	dph,r3
	mov	b,r4
	lcall	__gptrget
	mov	r2,a
	swap	a
	anl	a,#0x0f
	mov	r5,a
;	simpleserial.c:26: unsigned char n_lo =  data[i]       & 0x0f;
	mov	a,_bp
	add	a,#0x06
	mov	r0,a
	mov	a,#0x0f
	anl	a,r2
	mov	@r0,a
;	simpleserial.c:27: ascii[2*i+1] = hex_lookup[n_hi];
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	mov	ar2,@r0
	inc	r0
	mov	a,@r0
	xch	a,r2
	add	a,acc
	xch	a,r2
	rlc	a
	mov	r3,a
	mov	a,#0x01
	add	a,r2
	mov	r4,a
	clr	a
	addc	a,r3
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	a,r4
	add	a,@r0
	mov	r4,a
	mov	a,r7
	inc	r0
	addc	a,@r0
	mov	r7,a
	inc	r0
	mov	ar6,@r0
	mov	a,r5
	mov	dptr,#_hex_lookup
	movc	a,@a+dptr
	mov	r5,a
	mov	dpl,r4
	mov	dph,r7
	mov	b,r6
	lcall	__gptrput
;	simpleserial.c:28: ascii[2*i+2] = hex_lookup[n_lo];
	mov	a,#0x02
	add	a,r2
	mov	r2,a
	clr	a
	addc	a,r3
	mov	r3,a
	mov	r0,_bp
	inc	r0
	mov	a,r2
	add	a,@r0
	mov	r2,a
	mov	a,r3
	inc	r0
	addc	a,@r0
	mov	r3,a
	inc	r0
	mov	ar7,@r0
	mov	a,_bp
	add	a,#0x06
	mov	r0,a
	mov	a,@r0
	mov	dptr,#_hex_lookup
	movc	a,@a+dptr
	mov	r6,a
	mov	dpl,r2
	mov	dph,r3
	mov	b,r7
	lcall	__gptrput
;	simpleserial.c:23: for(i = 0; i < BLOCK_LENGTH; i++)
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	inc	@r0
	cjne	@r0,#0x00,00113$
	inc	r0
	inc	@r0
00113$:
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	clr	c
	mov	a,@r0
	subb	a,#0x10
	inc	r0
	mov	a,@r0
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00114$
	ljmp	00102$
00114$:
;	simpleserial.c:30: ascii[ASCII_LENGTH-1] = '\n';
	mov	r0,_bp
	inc	r0
	mov	a,#0x21
	add	a,@r0
	mov	r5,a
	clr	a
	inc	r0
	addc	a,@r0
	mov	r6,a
	inc	r0
	mov	ar7,@r0
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	mov	a,#0x0a
	lcall	__gptrput
	mov	sp,_bp
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'simpleserial_decode'
;------------------------------------------------------------
;data                      Allocated to stack - _bp -5
;ascii                     Allocated to stack - _bp +1
;i                         Allocated to registers r3 r4 
;n_hi                      Allocated to stack - _bp +5
;n_lo                      Allocated to stack - _bp +4
;------------------------------------------------------------
;	simpleserial.c:34: void simpleserial_decode(uint8_t* ascii, uint8_t* data)
;	-----------------------------------------
;	 function simpleserial_decode
;	-----------------------------------------
_simpleserial_decode:
	push	_bp
	mov	_bp,sp
	push	dpl
	push	dph
	push	b
	inc	sp
	inc	sp
;	simpleserial.c:38: for(i = 0; i < BLOCK_LENGTH; i++)
	mov	r3,#0x00
	mov	r4,#0x00
00114$:
;	simpleserial.c:40: unsigned char n_hi = ascii[2*i + 1];
	mov	ar2,r3
	mov	a,r4
	xch	a,r2
	add	a,acc
	xch	a,r2
	rlc	a
	mov	r7,a
	mov	a,#0x01
	add	a,r2
	mov	r5,a
	clr	a
	addc	a,r7
	mov	r6,a
	push	ar3
	push	ar4
	mov	r0,_bp
	inc	r0
	mov	a,r5
	add	a,@r0
	mov	r5,a
	mov	a,r6
	inc	r0
	addc	a,@r0
	mov	r4,a
	inc	r0
	mov	ar6,@r0
	mov	dpl,r5
	mov	dph,r4
	mov	b,r6
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	lcall	__gptrget
	mov	@r0,a
;	simpleserial.c:41: unsigned char n_lo = ascii[2*i + 2];
	mov	a,#0x02
	add	a,r2
	mov	r2,a
	clr	a
	addc	a,r7
	mov	r7,a
	mov	r0,_bp
	inc	r0
	mov	a,r2
	add	a,@r0
	mov	r2,a
	mov	a,r7
	inc	r0
	addc	a,@r0
	mov	r7,a
	inc	r0
	mov	ar6,@r0
	mov	dpl,r2
	mov	dph,r7
	mov	b,r6
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	lcall	__gptrget
	mov	@r0,a
;	simpleserial.c:43: if(n_lo <= '9')
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	clr	c
	mov	a,#0x39
	subb	a,@r0
	pop	ar4
	pop	ar3
	jc	00105$
;	simpleserial.c:44: data[i] = n_lo - '0';
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,r3
	add	a,@r0
	mov	r5,a
	mov	a,r4
	inc	r0
	addc	a,@r0
	mov	r6,a
	inc	r0
	mov	ar7,@r0
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	mov	a,@r0
	add	a,#0xd0
	mov	r2,a
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrput
	sjmp	00106$
00105$:
;	simpleserial.c:45: else if(n_lo <= 'F')
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	mov	a,@r0
	add	a,#0xff - 0x46
	jc	00102$
;	simpleserial.c:46: data[i] = n_lo - 'A' + 10;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,r3
	add	a,@r0
	mov	r5,a
	mov	a,r4
	inc	r0
	addc	a,@r0
	mov	r6,a
	inc	r0
	mov	ar7,@r0
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	mov	ar2,@r0
	mov	a,#0xc9
	add	a,r2
	mov	r2,a
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrput
	sjmp	00106$
00102$:
;	simpleserial.c:48: data[i] = n_lo - 'a' + 10;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,r3
	add	a,@r0
	mov	r5,a
	mov	a,r4
	inc	r0
	addc	a,@r0
	mov	r6,a
	inc	r0
	mov	ar7,@r0
	mov	a,_bp
	add	a,#0x04
	mov	r0,a
	mov	ar2,@r0
	mov	a,#0xa9
	add	a,r2
	mov	r2,a
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrput
00106$:
;	simpleserial.c:50: if(n_hi <= '9')
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	mov	a,@r0
	add	a,#0xff - 0x39
	jc	00111$
;	simpleserial.c:51: data[i] |= (n_hi - '0') << 4;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,r3
	add	a,@r0
	mov	r5,a
	mov	a,r4
	inc	r0
	addc	a,@r0
	mov	r6,a
	inc	r0
	mov	ar7,@r0
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	mov	r2,a
	push	ar3
	push	ar4
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	mov	a,@r0
	add	a,#0xd0
	swap	a
	anl	a,#0xf0
	mov	r4,a
	mov	a,r2
	orl	ar4,a
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	mov	a,r4
	lcall	__gptrput
	pop	ar4
	pop	ar3
	ljmp	00115$
00111$:
;	simpleserial.c:52: else if(n_hi <= 'F')
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	mov	a,@r0
	add	a,#0xff - 0x46
	jc	00108$
;	simpleserial.c:53: data[i] |= (n_hi - 'A' + 10) << 4;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,r3
	add	a,@r0
	mov	r5,a
	mov	a,r4
	inc	r0
	addc	a,@r0
	mov	r6,a
	inc	r0
	mov	ar7,@r0
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	mov	r2,a
	push	ar3
	push	ar4
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	mov	ar4,@r0
	mov	a,#0xc9
	add	a,r4
	swap	a
	anl	a,#0xf0
	mov	r4,a
	mov	a,r2
	orl	ar4,a
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	mov	a,r4
	lcall	__gptrput
	pop	ar4
	pop	ar3
	sjmp	00115$
00108$:
;	simpleserial.c:55: data[i] |= (n_hi - 'a' + 10) << 4;
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,r3
	add	a,@r0
	mov	r5,a
	mov	a,r4
	inc	r0
	addc	a,@r0
	mov	r6,a
	inc	r0
	mov	ar7,@r0
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	__gptrget
	mov	r2,a
	push	ar3
	push	ar4
	mov	a,_bp
	add	a,#0x05
	mov	r0,a
	mov	ar4,@r0
	mov	a,#0xa9
	add	a,r4
	swap	a
	anl	a,#0xf0
	mov	r4,a
	mov	a,r2
	orl	ar4,a
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	mov	a,r4
	lcall	__gptrput
;	simpleserial.c:38: for(i = 0; i < BLOCK_LENGTH; i++)
	pop	ar4
	pop	ar3
;	simpleserial.c:55: data[i] |= (n_hi - 'a' + 10) << 4;
00115$:
;	simpleserial.c:38: for(i = 0; i < BLOCK_LENGTH; i++)
	inc	r3
	cjne	r3,#0x00,00138$
	inc	r4
00138$:
	clr	c
	mov	a,r3
	subb	a,#0x10
	mov	a,r4
	xrl	a,#0x80
	subb	a,#0x80
	jnc	00139$
	ljmp	00114$
00139$:
	mov	sp,_bp
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'simpleserial_get'
;------------------------------------------------------------
;key                       Allocated to stack - _bp -5
;input                     Allocated to stack - _bp +1
;ascii_buffer              Allocated to stack - _bp +4
;ascii_pos                 Allocated to registers r4 
;state                     Allocated to registers r3 
;sloc0                     Allocated to stack - _bp +40
;------------------------------------------------------------
;	simpleserial.c:59: int simpleserial_get(uint8_t* input, uint8_t* key)
;	-----------------------------------------
;	 function simpleserial_get
;	-----------------------------------------
_simpleserial_get:
	push	_bp
	mov	_bp,sp
	push	dpl
	push	dph
	push	b
	mov	a,sp
	add	a,#0x22
	mov	sp,a
;	simpleserial.c:63: unsigned char ascii_pos = 0;
;	simpleserial.c:66: unsigned char state = STATE_IDLE;
;	simpleserial.c:69: while(1)
	clr	a
	mov	r4,a
	mov	r3,a
	mov	a,_bp
	add	a,#0x04
	mov	r2,a
00127$:
;	simpleserial.c:72: ascii_buffer[ascii_pos] = getchar();
	mov	a,r4
	add	a,r2
	mov	r1,a
	push	ar4
	push	ar3
	push	ar2
	push	ar1
	lcall	_getchar
	mov	a,dpl
	pop	ar1
	pop	ar2
	pop	ar3
	pop	ar4
	mov	@r1,a
;	simpleserial.c:74: if(state == STATE_IDLE)
	mov	a,r3
	jnz	00124$
;	simpleserial.c:78: if(ascii_buffer[ascii_pos] == 'k')
	mov	ar7,@r1
	cjne	r7,#0x6b,00104$
;	simpleserial.c:80: state = STATE_KEY;
	mov	r3,#0x02
;	simpleserial.c:81: ascii_pos++;
	inc	r4
;	simpleserial.c:82: continue;
	sjmp	00127$
00104$:
;	simpleserial.c:84: else if(ascii_buffer[ascii_pos] == 'p')
	mov	ar7,@r1
	cjne	r7,#0x70,00167$
	sjmp	00168$
00167$:
	ljmp	00125$
00168$:
;	simpleserial.c:86: state = STATE_PT;
	mov	r3,#0x01
;	simpleserial.c:87: ascii_pos++;
	inc	r4
;	simpleserial.c:88: continue;
	sjmp	00127$
00124$:
;	simpleserial.c:94: if(ascii_pos < (ASCII_LENGTH - 1))
	cjne	r4,#0x21,00169$
00169$:
	jnc	00121$
;	simpleserial.c:96: if((ascii_buffer[ascii_pos] >= '0' && ascii_buffer[ascii_pos] <= '9')
	mov	ar7,@r1
	cjne	r7,#0x30,00171$
00171$:
	jc	00110$
	mov	a,@r1
	mov	r7,a
	add	a,#0xff - 0x39
	jnc	00106$
00110$:
;	simpleserial.c:97: || (ascii_buffer[ascii_pos] >= 'A' && ascii_buffer[ascii_pos] <= 'F')
	mov	a,r4
	add	a,r2
	mov	r0,a
	mov	ar7,@r0
	cjne	r7,#0x41,00174$
00174$:
	jc	00112$
	mov	a,r7
	add	a,#0xff - 0x46
	jnc	00106$
00112$:
;	simpleserial.c:98: || (ascii_buffer[ascii_pos] >= 'a' && ascii_buffer[ascii_pos] <= 'f')
	cjne	r7,#0x61,00177$
00177$:
	jc	00125$
	mov	a,r7
	add	a,#0xff - 0x66
	jc	00125$
00106$:
;	simpleserial.c:101: ascii_pos++;
	inc	r4
;	simpleserial.c:102: continue;
	sjmp	00127$
00121$:
;	simpleserial.c:107: else if((ascii_pos == ASCII_LENGTH-1)
	cjne	r4,#0x21,00125$
;	simpleserial.c:108: && ((ascii_buffer[ascii_pos] == '\n') || (ascii_buffer[ascii_pos] == '\r')))
	mov	ar4,@r1
	cjne	r4,#0x0a,00182$
	sjmp	00116$
00182$:
	mov	ar4,@r1
	cjne	r4,#0x0d,00125$
00116$:
;	simpleserial.c:111: if(state == STATE_PT)
	cjne	r3,#0x01,00114$
;	simpleserial.c:113: simpleserial_decode(ascii_buffer, input);
	mov	ar4,r2
	mov	ar3,r4
	mov	r4,#0x00
	mov	r7,#0x40
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	mov	dpl,r3
	mov	dph,r4
	mov	b,r7
	lcall	_simpleserial_decode
	dec	sp
	dec	sp
	dec	sp
;	simpleserial.c:114: return 1;
	mov	dptr,#0x0001
	sjmp	00129$
00114$:
;	simpleserial.c:118: simpleserial_decode(ascii_buffer, key);
	mov	r7,#0x00
	mov	r6,#0x40
	mov	a,_bp
	add	a,#0xfb
	mov	r0,a
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	mov	dpl,r2
	mov	dph,r7
	mov	b,r6
	lcall	_simpleserial_decode
	dec	sp
	dec	sp
	dec	sp
;	simpleserial.c:119: return 0;
	mov	dptr,#0x0000
	sjmp	00129$
00125$:
;	simpleserial.c:126: return 0;
	mov	dptr,#0x0000
00129$:
	mov	sp,_bp
	pop	_bp
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'simpleserial_put'
;------------------------------------------------------------
;output                    Allocated to stack - _bp +1
;ascii_buffer              Allocated to stack - _bp +4
;ascii_pos                 Allocated to registers r7 
;------------------------------------------------------------
;	simpleserial.c:130: void simpleserial_put(uint8_t* output)
;	-----------------------------------------
;	 function simpleserial_put
;	-----------------------------------------
_simpleserial_put:
	push	_bp
	mov	_bp,sp
	push	dpl
	push	dph
	push	b
	mov	a,sp
	add	a,#0x22
	mov	sp,a
;	simpleserial.c:136: simpleserial_encode(ascii_buffer, output);
	mov	a,_bp
	add	a,#0x04
	mov	r4,a
	mov	r2,a
	mov	r3,#0x00
	mov	r7,#0x40
	push	ar4
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	inc	r0
	mov	a,@r0
	push	acc
	mov	dpl,r2
	mov	dph,r3
	mov	b,r7
	lcall	_simpleserial_encode
	dec	sp
	dec	sp
	dec	sp
	pop	ar4
;	simpleserial.c:137: for(ascii_pos = 0; ascii_pos < ASCII_LENGTH; ascii_pos++)
	mov	r7,#0x00
00102$:
;	simpleserial.c:139: putchar(ascii_buffer[ascii_pos]);
	mov	a,r7
	add	a,r4
	mov	r1,a
	mov	dpl,@r1
	push	ar7
	push	ar4
	lcall	_putchar
	pop	ar4
	pop	ar7
;	simpleserial.c:137: for(ascii_pos = 0; ascii_pos < ASCII_LENGTH; ascii_pos++)
	inc	r7
	cjne	r7,#0x22,00110$
00110$:
	jc	00102$
	mov	sp,_bp
	pop	_bp
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
_hex_lookup:
	.db #0x30	; 48	'0'
	.db #0x31	; 49	'1'
	.db #0x32	; 50	'2'
	.db #0x33	; 51	'3'
	.db #0x34	; 52	'4'
	.db #0x35	; 53	'5'
	.db #0x36	; 54	'6'
	.db #0x37	; 55	'7'
	.db #0x38	; 56	'8'
	.db #0x39	; 57	'9'
	.db #0x41	; 65	'A'
	.db #0x42	; 66	'B'
	.db #0x43	; 67	'C'
	.db #0x44	; 68	'D'
	.db #0x45	; 69	'E'
	.db #0x46	; 70	'F'
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
