//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn_HSD_JOBJ_SetMtxDirtySub.hpp"



void fn_8042FF94(PPC::Runtime::GCContext* context)
{
/*8042FF94 0042CD94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8042FF98 0042CD98*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042FF9C 0042CD9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8042FFA0 0042CDA0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8042FFA4 0042CDA4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*8042FFA8 0042CDA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8042FFAC 0042CDAC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8042FFB0 0042CDB0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8042FFB4 0042CDB4*/ PPC::Runtime::ASM::bne(.L_8042FFC8);
/*8042FFB8 0042CDB8*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_474 @ Get_MemoryOffset_SDA21);
/*8042FFBC 0042CDBC*/ PPC::Runtime::ASM::li(context->r4, 0x455);
/*8042FFC0 0042CDC0*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_473 @ Get_MemoryOffset_SDA21);
/*8042FFC4 0042CDC4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8042FFC8, 0x8042FFC8) //this is a jump label
/*8042FFC8 0042CDC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8042FFCC 0042CDCC*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*8042FFD0 0042CDD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8042FFD4 0042CDD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8042FFD8 0042CDD8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8042FFDC 0042CDDC*/ PPC::Runtime::ASM::bne(.L_80430028);
/*8042FFE0 0042CDE0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8042FFE4 0042CDE4*/ PPC::Runtime::ASM::beq(.L_80430028);
/*8042FFE8 0042CDE8*/ PPC::Runtime::ASM::bne(.L_8042FFFC);
/*8042FFEC 0042CDEC*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_474 @ Get_MemoryOffset_SDA21);
/*8042FFF0 0042CDF0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8042FFF4 0042CDF4*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_473 @ Get_MemoryOffset_SDA21);
/*8042FFF8 0042CDF8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8042FFFC, 0x8042FFFC) //this is a jump label
/*8042FFFC 0042CDFC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80430000 0042CE00*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80430004 0042CE04*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80430008 0042CE08*/ PPC::Runtime::ASM::bne(.L_80430018);
/*8043000C 0042CE0C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80430010 0042CE10*/ PPC::Runtime::ASM::beq(.L_80430018);
/*80430014 0042CE14*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80430018, 0x80430018) //this is a jump label
/*80430018 0042CE18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8043001C 0042CE1C*/ PPC::Runtime::ASM::bne(.L_80430028);
/*80430020 0042CE20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80430024 0042CE24*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80430028, 0x80430028) //this is a jump label
/*80430028 0042CE28*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*8043002C 0042CE2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80430030 0042CE30*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80430034 0042CE34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80430038 0042CE38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043003C 0042CE3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80430040 0042CE40*/ PPC::Runtime::ASM::blr();
}