//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803D4BBC(PPC::Runtime::GCContext* context)
{
/*803D4BBC 003D19BC*/ PPC::Runtime::ASM::mfmsr(context->r5);
/*803D4BC0 003D19C0*/ PPC::Runtime::ASM::ori(context->r5, context->r5, 0x2000);
/*803D4BC4 003D19C4*/ PPC::Runtime::ASM::mtmsr(context->r5);
/*803D4BC8 003D19C8*/ PPC::Runtime::ASM::isync();
/*803D4BCC 003D19CC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*803D4BD0 003D19D0*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*803D4BD4 003D19D4*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r3));
/*803D4BD8 003D19D8*/ PPC::Runtime::ASM::stfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r3));
/*803D4BDC 003D19DC*/ PPC::Runtime::ASM::stfd(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
/*803D4BE0 003D19E0*/ PPC::Runtime::ASM::stfd(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r3));
/*803D4BE4 003D19E4*/ PPC::Runtime::ASM::stfd(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r3));
/*803D4BE8 003D19E8*/ PPC::Runtime::ASM::stfd(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*803D4BEC 003D19EC*/ PPC::Runtime::ASM::stfd(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*803D4BF0 003D19F0*/ PPC::Runtime::ASM::stfd(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r3));
/*803D4BF4 003D19F4*/ PPC::Runtime::ASM::stfd(context->f10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r3));
/*803D4BF8 003D19F8*/ PPC::Runtime::ASM::stfd(context->f11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r3));
/*803D4BFC 003D19FC*/ PPC::Runtime::ASM::stfd(context->f12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r3));
/*803D4C00 003D1A00*/ PPC::Runtime::ASM::stfd(context->f13, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*803D4C04 003D1A04*/ PPC::Runtime::ASM::stfd(context->f14, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*803D4C08 003D1A08*/ PPC::Runtime::ASM::stfd(context->f15, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r3));
/*803D4C0C 003D1A0C*/ PPC::Runtime::ASM::stfd(context->f16, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r3));
/*803D4C10 003D1A10*/ PPC::Runtime::ASM::stfd(context->f17, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r3));
/*803D4C14 003D1A14*/ PPC::Runtime::ASM::stfd(context->f18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r3));
/*803D4C18 003D1A18*/ PPC::Runtime::ASM::stfd(context->f19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r3));
/*803D4C1C 003D1A1C*/ PPC::Runtime::ASM::stfd(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r3));
/*803D4C20 003D1A20*/ PPC::Runtime::ASM::stfd(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*803D4C24 003D1A24*/ PPC::Runtime::ASM::stfd(context->f22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r3));
/*803D4C28 003D1A28*/ PPC::Runtime::ASM::stfd(context->f23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r3));
/*803D4C2C 003D1A2C*/ PPC::Runtime::ASM::stfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r3));
/*803D4C30 003D1A30*/ PPC::Runtime::ASM::stfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r3));
/*803D4C34 003D1A34*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r3));
/*803D4C38 003D1A38*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r3));
/*803D4C3C 003D1A3C*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*803D4C40 003D1A40*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r3));
/*803D4C44 003D1A44*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r3));
/*803D4C48 003D1A48*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r3));
/*803D4C4C 003D1A4C*/ PPC::Runtime::ASM::mffs(context->f0);
/*803D4C50 003D1A50*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x190, context->r3));
/*803D4C54 003D1A54*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*803D4C58 003D1A58*/ PPC::Runtime::ASM::mfspr(context->r5, context->HID2);
/* 803D4C5C 003D1A5C  54 A5 1F FF */ extrwi. context->r5 , context->r5 , 1 , 2
/*803D4C60 003D1A60*/ PPC::Runtime::ASM::beq(.L_803D4CE4);
/*803D4C64 003D1A64*/ PPC::Runtime::ASM::psq_st(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r3)0, context->qr0);
/*803D4C68 003D1A68*/ PPC::Runtime::ASM::psq_st(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r3)0, context->qr0);
/*803D4C6C 003D1A6C*/ PPC::Runtime::ASM::psq_st(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r3)0, context->qr0);
/*803D4C70 003D1A70*/ PPC::Runtime::ASM::psq_st(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e0, context->r3)0, context->qr0);
/*803D4C74 003D1A74*/ PPC::Runtime::ASM::psq_st(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r3)0, context->qr0);
/*803D4C78 003D1A78*/ PPC::Runtime::ASM::psq_st(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r3)0, context->qr0);
/*803D4C7C 003D1A7C*/ PPC::Runtime::ASM::psq_st(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r3)0, context->qr0);
/*803D4C80 003D1A80*/ PPC::Runtime::ASM::psq_st(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r3)0, context->qr0);
/*803D4C84 003D1A84*/ PPC::Runtime::ASM::psq_st(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r3)0, context->qr0);
/*803D4C88 003D1A88*/ PPC::Runtime::ASM::psq_st(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r3)0, context->qr0);
/*803D4C8C 003D1A8C*/ PPC::Runtime::ASM::psq_st(context->f10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x218, context->r3)0, context->qr0);
/*803D4C90 003D1A90*/ PPC::Runtime::ASM::psq_st(context->f11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x220, context->r3)0, context->qr0);
/*803D4C94 003D1A94*/ PPC::Runtime::ASM::psq_st(context->f12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x228, context->r3)0, context->qr0);
/*803D4C98 003D1A98*/ PPC::Runtime::ASM::psq_st(context->f13, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r3)0, context->qr0);
/*803D4C9C 003D1A9C*/ PPC::Runtime::ASM::psq_st(context->f14, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x238, context->r3)0, context->qr0);
/*803D4CA0 003D1AA0*/ PPC::Runtime::ASM::psq_st(context->f15, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r3)0, context->qr0);
/*803D4CA4 003D1AA4*/ PPC::Runtime::ASM::psq_st(context->f16, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r3)0, context->qr0);
/*803D4CA8 003D1AA8*/ PPC::Runtime::ASM::psq_st(context->f17, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x250, context->r3)0, context->qr0);
/*803D4CAC 003D1AAC*/ PPC::Runtime::ASM::psq_st(context->f18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x258, context->r3)0, context->qr0);
/*803D4CB0 003D1AB0*/ PPC::Runtime::ASM::psq_st(context->f19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x260, context->r3)0, context->qr0);
/*803D4CB4 003D1AB4*/ PPC::Runtime::ASM::psq_st(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r3)0, context->qr0);
/*803D4CB8 003D1AB8*/ PPC::Runtime::ASM::psq_st(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x270, context->r3)0, context->qr0);
/*803D4CBC 003D1ABC*/ PPC::Runtime::ASM::psq_st(context->f22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r3)0, context->qr0);
/*803D4CC0 003D1AC0*/ PPC::Runtime::ASM::psq_st(context->f23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x280, context->r3)0, context->qr0);
/*803D4CC4 003D1AC4*/ PPC::Runtime::ASM::psq_st(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x288, context->r3)0, context->qr0);
/*803D4CC8 003D1AC8*/ PPC::Runtime::ASM::psq_st(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x290, context->r3)0, context->qr0);
/*803D4CCC 003D1ACC*/ PPC::Runtime::ASM::psq_st(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r3)0, context->qr0);
/*803D4CD0 003D1AD0*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a0, context->r3)0, context->qr0);
/*803D4CD4 003D1AD4*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r3)0, context->qr0);
/*803D4CD8 003D1AD8*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r3)0, context->qr0);
/*803D4CDC 003D1ADC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r3)0, context->qr0);
/*803D4CE0 003D1AE0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c0, context->r3)0, context->qr0);
RUNTIME_PPC_JUMP_LABEL(.L_803D4CE4, 0x803D4CE4) //this is a jump label
/*803D4CE4 003D1AE4*/ PPC::Runtime::ASM::blr();
}