//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803AE550(PPC::Runtime::GCContext* context)
{
/*803AE550 003AB350*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2c0, context->r1));
/*803AE554 003AB354*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AE558 003AB358*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r1));
/*803AE55C 003AB35C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803AE560 003AB360*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803AE564 003AB364*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803AE568 003AB368*/ PPC::Runtime::ASM::stmw(context->r13, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24c, context->r1));
/*803AE56C 003AB36C*/ PPC::Runtime::ASM::stfd(context->f14, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1));
/*803AE570 003AB370*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x100);
/*803AE574 003AB374*/ PPC::Runtime::ASM::psq_stx(context->f14, context->r0, context->r3, 0, context->qr0);
/*803AE578 003AB378*/ PPC::Runtime::ASM::stfd(context->f15, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1));
/*803AE57C 003AB37C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x110);
/*803AE580 003AB380*/ PPC::Runtime::ASM::psq_stx(context->f15, context->r0, context->r3, 0, context->qr0);
/*803AE584 003AB384*/ PPC::Runtime::ASM::stfd(context->f16, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1));
/*803AE588 003AB388*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x120);
/*803AE58C 003AB38C*/ PPC::Runtime::ASM::psq_stx(context->f16, context->r0, context->r3, 0, context->qr0);
/*803AE590 003AB390*/ PPC::Runtime::ASM::stfd(context->f17, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1));
/*803AE594 003AB394*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x130);
/*803AE598 003AB398*/ PPC::Runtime::ASM::psq_stx(context->f17, context->r0, context->r3, 0, context->qr0);
/*803AE59C 003AB39C*/ PPC::Runtime::ASM::stfd(context->f18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r1));
/*803AE5A0 003AB3A0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x140);
/*803AE5A4 003AB3A4*/ PPC::Runtime::ASM::psq_stx(context->f18, context->r0, context->r3, 0, context->qr0);
/*803AE5A8 003AB3A8*/ PPC::Runtime::ASM::stfd(context->f19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r1));
/*803AE5AC 003AB3AC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x150);
/*803AE5B0 003AB3B0*/ PPC::Runtime::ASM::psq_stx(context->f19, context->r0, context->r3, 0, context->qr0);
/*803AE5B4 003AB3B4*/ PPC::Runtime::ASM::stfd(context->f20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r1));
/*803AE5B8 003AB3B8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x160);
/*803AE5BC 003AB3BC*/ PPC::Runtime::ASM::psq_stx(context->f20, context->r0, context->r3, 0, context->qr0);
/*803AE5C0 003AB3C0*/ PPC::Runtime::ASM::stfd(context->f21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r1));
/*803AE5C4 003AB3C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x170);
/*803AE5C8 003AB3C8*/ PPC::Runtime::ASM::psq_stx(context->f21, context->r0, context->r3, 0, context->qr0);
/*803AE5CC 003AB3CC*/ PPC::Runtime::ASM::stfd(context->f22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r1));
/*803AE5D0 003AB3D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x180);
/*803AE5D4 003AB3D4*/ PPC::Runtime::ASM::psq_stx(context->f22, context->r0, context->r3, 0, context->qr0);
/*803AE5D8 003AB3D8*/ PPC::Runtime::ASM::stfd(context->f23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r1));
/*803AE5DC 003AB3DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x190);
/*803AE5E0 003AB3E0*/ PPC::Runtime::ASM::psq_stx(context->f23, context->r0, context->r3, 0, context->qr0);
/*803AE5E4 003AB3E4*/ PPC::Runtime::ASM::stfd(context->f24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r1));
/*803AE5E8 003AB3E8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1a0);
/*803AE5EC 003AB3EC*/ PPC::Runtime::ASM::psq_stx(context->f24, context->r0, context->r3, 0, context->qr0);
/*803AE5F0 003AB3F0*/ PPC::Runtime::ASM::stfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a8, context->r1));
/*803AE5F4 003AB3F4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1b0);
/*803AE5F8 003AB3F8*/ PPC::Runtime::ASM::psq_stx(context->f25, context->r0, context->r3, 0, context->qr0);
/*803AE5FC 003AB3FC*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b8, context->r1));
/*803AE600 003AB400*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c0);
/*803AE604 003AB404*/ PPC::Runtime::ASM::psq_stx(context->f26, context->r0, context->r3, 0, context->qr0);
/*803AE608 003AB408*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r1));
/*803AE60C 003AB40C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1d0);
/*803AE610 003AB410*/ PPC::Runtime::ASM::psq_stx(context->f27, context->r0, context->r3, 0, context->qr0);
/*803AE614 003AB414*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r1));
/*803AE618 003AB418*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1e0);
/*803AE61C 003AB41C*/ PPC::Runtime::ASM::psq_stx(context->f28, context->r0, context->r3, 0, context->qr0);
/*803AE620 003AB420*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r1));
/*803AE624 003AB424*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1f0);
/*803AE628 003AB428*/ PPC::Runtime::ASM::psq_stx(context->f29, context->r0, context->r3, 0, context->qr0);
/*803AE62C 003AB42C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r1));
/*803AE630 003AB430*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x200);
/*803AE634 003AB434*/ PPC::Runtime::ASM::psq_stx(context->f30, context->r0, context->r3, 0, context->qr0);
/*803AE638 003AB438*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r1));
/*803AE63C 003AB43C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x210);
/*803AE640 003AB440*/ PPC::Runtime::ASM::psq_stx(context->f31, context->r0, context->r3, 0, context->qr0);
/*803AE644 003AB444*/ PPC::Runtime::ASM::mfcr(context->r3);
/*803AE648 003AB448*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r1));
/*803AE64C 003AB44C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r1));
/*803AE650 003AB450*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803AE654 003AB454*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29c, context->r1));
/*803AE658 003AB458*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a4, context->r1));
/*803AE65C 003AB45C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r1));
/*803AE660 003AB460*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803AE664 003AB464*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ac, context->r1));
/*803AE668 003AB468*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803AE66C 003AB46C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r1));
/*803AE670 003AB470*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803AE674 003AB474*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r1));
/*803AE678 003AB478*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*803AE67C 003AB47C*/ PPC::Runtime::ASM::bl(fn_803AE6D8);
/*803AE680 003AB480*/ PPC::Runtime::ASM::nop();
/*803AE684 003AB484*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r1));
/*803AE688 003AB488*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803AE68C 003AB48C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x2c0);
/*803AE690 003AB490*/ PPC::Runtime::ASM::blr();
}