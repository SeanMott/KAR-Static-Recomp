//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_ExPPC_IsInSpecification(PPC::Runtime::GCContext* context)
{
/*803AE33C 003AB13C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803AE340 003AB140*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803AE344 003AB144*/ PPC::Runtime::ASM::mtlr(context->r5);
/*803AE348 003AB148*/ PPC::Runtime::ASM::mtcrf(255, context->r6);
/*803AE34C 003AB14C*/ PPC::Runtime::ASM::lwz(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803AE350 003AB150*/ PPC::Runtime::ASM::lwz(context->r2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803AE354 003AB154*/ PPC::Runtime::ASM::lmw(context->r13, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803AE358 003AB158*/ PPC::Runtime::ASM::lfd(context->f14, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*803AE35C 003AB15C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x68);
/*803AE360 003AB160*/ PPC::Runtime::ASM::psq_lx(context->f14, context->r0, context->r7, 0, context->qr0);
/*803AE364 003AB164*/ PPC::Runtime::ASM::lfd(context->f15, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*803AE368 003AB168*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x78);
/*803AE36C 003AB16C*/ PPC::Runtime::ASM::psq_lx(context->f15, context->r0, context->r7, 0, context->qr0);
/*803AE370 003AB170*/ PPC::Runtime::ASM::lfd(context->f16, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*803AE374 003AB174*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x88);
/*803AE378 003AB178*/ PPC::Runtime::ASM::psq_lx(context->f16, context->r0, context->r7, 0, context->qr0);
/*803AE37C 003AB17C*/ PPC::Runtime::ASM::lfd(context->f17, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*803AE380 003AB180*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x98);
/*803AE384 003AB184*/ PPC::Runtime::ASM::psq_lx(context->f17, context->r0, context->r7, 0, context->qr0);
/*803AE388 003AB188*/ PPC::Runtime::ASM::lfd(context->f18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r3));
/*803AE38C 003AB18C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0xa8);
/*803AE390 003AB190*/ PPC::Runtime::ASM::psq_lx(context->f18, context->r0, context->r7, 0, context->qr0);
/*803AE394 003AB194*/ PPC::Runtime::ASM::lfd(context->f19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
/*803AE398 003AB198*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0xb8);
/*803AE39C 003AB19C*/ PPC::Runtime::ASM::psq_lx(context->f19, context->r0, context->r7, 0, context->qr0);
/*803AE3A0 003AB1A0*/ PPC::Runtime::ASM::lfd(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r3));
/*803AE3A4 003AB1A4*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0xc8);
/*803AE3A8 003AB1A8*/ PPC::Runtime::ASM::psq_lx(context->f20, context->r0, context->r7, 0, context->qr0);
/*803AE3AC 003AB1AC*/ PPC::Runtime::ASM::lfd(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*803AE3B0 003AB1B0*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0xd8);
/*803AE3B4 003AB1B4*/ PPC::Runtime::ASM::psq_lx(context->f21, context->r0, context->r7, 0, context->qr0);
/*803AE3B8 003AB1B8*/ PPC::Runtime::ASM::lfd(context->f22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r3));
/*803AE3BC 003AB1BC*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0xe8);
/*803AE3C0 003AB1C0*/ PPC::Runtime::ASM::psq_lx(context->f22, context->r0, context->r7, 0, context->qr0);
/*803AE3C4 003AB1C4*/ PPC::Runtime::ASM::lfd(context->f23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r3));
/*803AE3C8 003AB1C8*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0xf8);
/*803AE3CC 003AB1CC*/ PPC::Runtime::ASM::psq_lx(context->f23, context->r0, context->r7, 0, context->qr0);
/*803AE3D0 003AB1D0*/ PPC::Runtime::ASM::lfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*803AE3D4 003AB1D4*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x108);
/*803AE3D8 003AB1D8*/ PPC::Runtime::ASM::psq_lx(context->f24, context->r0, context->r7, 0, context->qr0);
/*803AE3DC 003AB1DC*/ PPC::Runtime::ASM::lfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r3));
/*803AE3E0 003AB1E0*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x118);
/*803AE3E4 003AB1E4*/ PPC::Runtime::ASM::psq_lx(context->f25, context->r0, context->r7, 0, context->qr0);
/*803AE3E8 003AB1E8*/ PPC::Runtime::ASM::lfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r3));
/*803AE3EC 003AB1EC*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x128);
/*803AE3F0 003AB1F0*/ PPC::Runtime::ASM::psq_lx(context->f26, context->r0, context->r7, 0, context->qr0);
/*803AE3F4 003AB1F4*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r3));
/*803AE3F8 003AB1F8*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x138);
/*803AE3FC 003AB1FC*/ PPC::Runtime::ASM::psq_lx(context->f27, context->r0, context->r7, 0, context->qr0);
/*803AE400 003AB200*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r3));
/*803AE404 003AB204*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x148);
/*803AE408 003AB208*/ PPC::Runtime::ASM::psq_lx(context->f28, context->r0, context->r7, 0, context->qr0);
/*803AE40C 003AB20C*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r3));
/*803AE410 003AB210*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x158);
/*803AE414 003AB214*/ PPC::Runtime::ASM::psq_lx(context->f29, context->r0, context->r7, 0, context->qr0);
/*803AE418 003AB218*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x160, context->r3));
/*803AE41C 003AB21C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x168);
/*803AE420 003AB220*/ PPC::Runtime::ASM::psq_lx(context->f30, context->r0, context->r7, 0, context->qr0);
/*803AE424 003AB224*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r3));
/*803AE428 003AB228*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x178);
/*803AE42C 003AB22C*/ PPC::Runtime::ASM::psq_lx(context->f31, context->r0, context->r7, 0, context->qr0);
/*803AE430 003AB230*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r3));
/*803AE434 003AB234*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803AE438 003AB238*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803AE43C 003AB23C*/ PPC::Runtime::ASM::mtfsf(255, context->f0);
/*803AE440 003AB240*/ PPC::Runtime::ASM::bnelr();
/*803AE444 003AB244*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803AE448 003AB248*/ PPC::Runtime::ASM::blr();
}