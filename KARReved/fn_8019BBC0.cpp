//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80068D74.hpp"



void fn_8019BBC0(PPC::Runtime::GCContext* context)
{
/*8019BBC0 001989C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8019BBC4 001989C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019BBC8 001989C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8019BBCC 001989CC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019BBD0 001989D0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8019BBD4 001989D4*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019BBD8 001989D8*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8019BBDC 001989DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019BBE0 001989E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019BBE4 001989E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019BBE8 001989E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019BBEC 001989EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8019BBF0 001989F0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r3));
/*8019BBF4 001989F4*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x38);
/*8019BBF8 001989F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29c, context->r3));
/*8019BBFC 001989FC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8019BC00 00198A00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8019BC04 00198A04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r3));
/*8019BC08 00198A08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8019BC0C 00198A0C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8019BC10 00198A10*/ PPC::Runtime::ASM::beq(.L_8019BD14);
/*8019BC14 00198A14*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E11A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019BC18 00198A18*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8019BC1C 00198A1C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*8019BC20 00198A20*/ PPC::Runtime::ASM::beq(.L_8019BC30);
/*8019BC24 00198A24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a0, context->r31));
/*8019BC28 00198A28*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8019BC2C 00198A2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8019BC30, 0x8019BC30) //this is a jump label
/*8019BC30 00198A30*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E11A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8019BC34, 0x8019BC34) //this is a jump label
/*8019BC34 00198A34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019BC38 00198A38*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8019BC3C 00198A3C*/ PPC::Runtime::ASM::beq(.L_8019BD14);
/*8019BC40 00198A40*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8019BC44 00198A44*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f1);
/*8019BC48 00198A48*/ PPC::Runtime::ASM::bne(.L_8019BC6C);
/*8019BC4C 00198A4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8019BC50 00198A50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a0, context->r31));
/*8019BC54 00198A54*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8019BC58 00198A58*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8019BC5C 00198A5C*/ PPC::Runtime::ASM::beq(.L_8019BD14);
/*8019BC60 00198A60*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*8019BC64 00198A64*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8019BC68 00198A68*/ PPC::Runtime::ASM::b(.L_8019BC78);
RUNTIME_PPC_JUMP_LABEL(.L_8019BC6C, 0x8019BC6C) //this is a jump label
/*8019BC6C 00198A6C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E11AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019BC70 00198A70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8019BC74 00198A74*/ PPC::Runtime::ASM::bgt(.L_8019BD14);
RUNTIME_PPC_JUMP_LABEL(.L_8019BC78, 0x8019BC78) //this is a jump label
/*8019BC78 00198A78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019BC7C 00198A7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8019BC80 00198A80*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8019BC84 00198A84*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8019BC88 00198A88*/ PPC::Runtime::ASM::extrwi(context->r29, context->r0, 6, 24);
/*8019BC8C 00198A8C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8019BC90 00198A90*/ PPC::Runtime::ASM::bl(fn_80068D74);
/*8019BC94 00198A94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019BC98 00198A98*/ PPC::Runtime::ASM::bne(.L_8019BCE4);
/*8019BC9C 00198A9C*/ PPC::Runtime::ASM::subi(context->r0, context->r29, 0xb);
/*8019BCA0 00198AA0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AE1C8 @ Get_MemoryOffset_HighBit);
/*8019BCA4 00198AA4*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0xc);
/*8019BCA8 00198AA8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804AE1C8 @ Get_MemoryOffset_LowBit);
/*8019BCAC 00198AAC*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8019BCB0 00198AB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8019BCB4 00198AB4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8019BCB8 00198AB8*/ PPC::Runtime::ASM::beq(.L_8019BCD0);
/*8019BCBC 00198ABC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019BCC0 00198AC0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8019BCC4 00198AC4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8019BCC8 00198AC8*/ PPC::Runtime::ASM::bctrl();
/*8019BCCC 00198ACC*/ PPC::Runtime::ASM::b(.L_8019BCE4);
RUNTIME_PPC_JUMP_LABEL(.L_8019BCD0, 0x8019BCD0) //this is a jump label
/*8019BCD0 00198AD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8019BCD4 00198AD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8019BCD8 00198AD8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8019BCDC 00198ADC*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*8019BCE0 00198AE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8019BCE4, 0x8019BCE4) //this is a jump label
/*8019BCE4 00198AE4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8019BCE8 00198AE8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f30);
/*8019BCEC 00198AEC*/ PPC::Runtime::ASM::beq(.L_8019BD08);
/*8019BCF0 00198AF0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E11AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019BCF4 00198AF4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8019BCF8 00198AF8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8019BCFC 00198AFC*/ PPC::Runtime::ASM::bne(.L_8019BD08);
/*8019BD00 00198B00*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8019BD04 00198B04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x818, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8019BD08, 0x8019BD08) //this is a jump label
/*8019BD08 00198B08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8019BD0C 00198B0C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*8019BD10 00198B10*/ PPC::Runtime::ASM::bne(.L_8019BC34);
RUNTIME_PPC_JUMP_LABEL(.L_8019BD14, 0x8019BD14) //this is a jump label
/*8019BD14 00198B14*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8019BD18 00198B18*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019BD1C 00198B1C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8019BD20 00198B20*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019BD24 00198B24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019BD28 00198B28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019BD2C 00198B2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8019BD30 00198B30*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019BD34 00198B34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019BD38 00198B38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8019BD3C 00198B3C*/ PPC::Runtime::ASM::blr();
}