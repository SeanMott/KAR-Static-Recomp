//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_ExPPC_UnwindStack(PPC::Runtime::GCContext* context)
{
/*803AE238 003AB038*/ PPC::Runtime::ASM::mflr(context->r5);
/*803AE23C 003AB03C*/ PPC::Runtime::ASM::mfcr(context->r6);
/*803AE240 003AB040*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AE244 003AB044*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803AE248 003AB048*/ PPC::Runtime::ASM::stw(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803AE24C 003AB04C*/ PPC::Runtime::ASM::stw(context->r2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803AE250 003AB050*/ PPC::Runtime::ASM::stmw(context->r13, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803AE254 003AB054*/ PPC::Runtime::ASM::mffs(context->f0);
/*803AE258 003AB058*/ PPC::Runtime::ASM::stfd(context->f14, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*803AE25C 003AB05C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x68);
/*803AE260 003AB060*/ PPC::Runtime::ASM::psq_stx(context->f14, context->r0, context->r4, 0, context->qr0);
/*803AE264 003AB064*/ PPC::Runtime::ASM::stfd(context->f15, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*803AE268 003AB068*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x78);
/*803AE26C 003AB06C*/ PPC::Runtime::ASM::psq_stx(context->f15, context->r0, context->r4, 0, context->qr0);
/*803AE270 003AB070*/ PPC::Runtime::ASM::stfd(context->f16, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*803AE274 003AB074*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x88);
/*803AE278 003AB078*/ PPC::Runtime::ASM::psq_stx(context->f16, context->r0, context->r4, 0, context->qr0);
/*803AE27C 003AB07C*/ PPC::Runtime::ASM::stfd(context->f17, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*803AE280 003AB080*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x98);
/*803AE284 003AB084*/ PPC::Runtime::ASM::psq_stx(context->f17, context->r0, context->r4, 0, context->qr0);
/*803AE288 003AB088*/ PPC::Runtime::ASM::stfd(context->f18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r3));
/*803AE28C 003AB08C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xa8);
/*803AE290 003AB090*/ PPC::Runtime::ASM::psq_stx(context->f18, context->r0, context->r4, 0, context->qr0);
/*803AE294 003AB094*/ PPC::Runtime::ASM::stfd(context->f19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
/*803AE298 003AB098*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xb8);
/*803AE29C 003AB09C*/ PPC::Runtime::ASM::psq_stx(context->f19, context->r0, context->r4, 0, context->qr0);
/*803AE2A0 003AB0A0*/ PPC::Runtime::ASM::stfd(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r3));
/*803AE2A4 003AB0A4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xc8);
/*803AE2A8 003AB0A8*/ PPC::Runtime::ASM::psq_stx(context->f20, context->r0, context->r4, 0, context->qr0);
/*803AE2AC 003AB0AC*/ PPC::Runtime::ASM::stfd(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*803AE2B0 003AB0B0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xd8);
/*803AE2B4 003AB0B4*/ PPC::Runtime::ASM::psq_stx(context->f21, context->r0, context->r4, 0, context->qr0);
/*803AE2B8 003AB0B8*/ PPC::Runtime::ASM::stfd(context->f22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r3));
/*803AE2BC 003AB0BC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xe8);
/*803AE2C0 003AB0C0*/ PPC::Runtime::ASM::psq_stx(context->f22, context->r0, context->r4, 0, context->qr0);
/*803AE2C4 003AB0C4*/ PPC::Runtime::ASM::stfd(context->f23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r3));
/*803AE2C8 003AB0C8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xf8);
/*803AE2CC 003AB0CC*/ PPC::Runtime::ASM::psq_stx(context->f23, context->r0, context->r4, 0, context->qr0);
/*803AE2D0 003AB0D0*/ PPC::Runtime::ASM::stfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*803AE2D4 003AB0D4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x108);
/*803AE2D8 003AB0D8*/ PPC::Runtime::ASM::psq_stx(context->f24, context->r0, context->r4, 0, context->qr0);
/*803AE2DC 003AB0DC*/ PPC::Runtime::ASM::stfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r3));
/*803AE2E0 003AB0E0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x118);
/*803AE2E4 003AB0E4*/ PPC::Runtime::ASM::psq_stx(context->f25, context->r0, context->r4, 0, context->qr0);
/*803AE2E8 003AB0E8*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r3));
/*803AE2EC 003AB0EC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x128);
/*803AE2F0 003AB0F0*/ PPC::Runtime::ASM::psq_stx(context->f26, context->r0, context->r4, 0, context->qr0);
/*803AE2F4 003AB0F4*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r3));
/*803AE2F8 003AB0F8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x138);
/*803AE2FC 003AB0FC*/ PPC::Runtime::ASM::psq_stx(context->f27, context->r0, context->r4, 0, context->qr0);
/*803AE300 003AB100*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r3));
/*803AE304 003AB104*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x148);
/*803AE308 003AB108*/ PPC::Runtime::ASM::psq_stx(context->f28, context->r0, context->r4, 0, context->qr0);
/*803AE30C 003AB10C*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r3));
/*803AE310 003AB110*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x158);
/*803AE314 003AB114*/ PPC::Runtime::ASM::psq_stx(context->f29, context->r0, context->r4, 0, context->qr0);
/*803AE318 003AB118*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r3));
/*803AE31C 003AB11C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x168);
/*803AE320 003AB120*/ PPC::Runtime::ASM::psq_stx(context->f30, context->r0, context->r4, 0, context->qr0);
/*803AE324 003AB124*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*803AE328 003AB128*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x178);
/*803AE32C 003AB12C*/ PPC::Runtime::ASM::psq_stx(context->f31, context->r0, context->r4, 0, context->qr0);
/*803AE330 003AB130*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r3));
/*803AE334 003AB134*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803AE338 003AB138*/ PPC::Runtime::ASM::blr();
}