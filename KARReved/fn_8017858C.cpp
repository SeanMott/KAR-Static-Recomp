//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8017858C(PPC::Runtime::GCContext* context)
{
/*8017858C 0017538C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80178590 00175390*/ PPC::Runtime::ASM::mflr(context->r0);
/*80178594 00175394*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80178598 00175398*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8017859C 0017539C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801785A0 001753A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801785A4 001753A4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801785A8 001753A8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801785AC 001753AC*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801785B0 001753B0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801785B4 001753B4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801785B8 001753B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd58, context->r3));
/*801785BC 001753BC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*801785C0 001753C0*/ PPC::Runtime::ASM::beq(.L_80178658);
/*801785C4 001753C4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*801785C8 001753C8*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*801785CC 001753CC*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*801785D0 001753D0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0CAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801785D4 001753D4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r5));
/*801785D8 001753D8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5f, context->r5));
/*801785DC 001753DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*801785E0 001753E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*801785E4 001753E4*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*801785E8 001753E8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801785EC 001753EC*/ PPC::Runtime::ASM::bne(.L_80178600);
/*801785F0 001753F0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D48 @ Get_MemoryOffset_SDA21);
/*801785F4 001753F4*/ PPC::Runtime::ASM::li(context->r4, 0x3b8);
/*801785F8 001753F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D50 @ Get_MemoryOffset_SDA21);
/*801785FC 001753FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80178600, 0x80178600) //this is a jump label
/*80178600 00175400*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80178604 00175404*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80178608 00175408*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8017860C 0017540C*/ PPC::Runtime::ASM::bne(.L_80178658);
/*80178610 00175410*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80178614 00175414*/ PPC::Runtime::ASM::beq(.L_80178658);
/*80178618 00175418*/ PPC::Runtime::ASM::bne(.L_8017862C);
/*8017861C 0017541C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D48 @ Get_MemoryOffset_SDA21);
/*80178620 00175420*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80178624 00175424*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D50 @ Get_MemoryOffset_SDA21);
/*80178628 00175428*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017862C, 0x8017862C) //this is a jump label
/*8017862C 0017542C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80178630 00175430*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80178634 00175434*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80178638 00175438*/ PPC::Runtime::ASM::bne(.L_80178648);
/*8017863C 0017543C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80178640 00175440*/ PPC::Runtime::ASM::beq(.L_80178648);
/*80178644 00175444*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80178648, 0x80178648) //this is a jump label
/*80178648 00175448*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8017864C 0017544C*/ PPC::Runtime::ASM::bne(.L_80178658);
/*80178650 00175450*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80178654 00175454*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80178658, 0x80178658) //this is a jump label
/*80178658 00175458*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*8017865C 0017545C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80178660 00175460*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80178664 00175464*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80178668 00175468*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017866C 0017546C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80178670 00175470*/ PPC::Runtime::ASM::blr();
}