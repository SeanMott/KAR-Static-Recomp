//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8016CDB0.hpp"



void fn_8016DDD0(PPC::Runtime::GCContext* context)
{
/*8016DDD0 0016ABD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016DDD4 0016ABD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016DDD8 0016ABD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016DDDC 0016ABDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016DDE0 0016ABE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016DDE4 0016ABE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8016DDE8 0016ABE8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016DDEC 0016ABEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8016DDF0 0016ABF0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8016DDF4 0016ABF4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8016DDF8 0016ABF8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016DDFC 0016ABFC*/ PPC::Runtime::ASM::bl(fn_8016CDB0);
/*8016DE00 0016AC00*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8016DE04 0016AC04*/ PPC::Runtime::ASM::bne(.L_8016DE18);
/*8016DE08 0016AC08*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6BD0 @ Get_MemoryOffset_SDA21);
/*8016DE0C 0016AC0C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8016DE10 0016AC10*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6BD8 @ Get_MemoryOffset_SDA21);
/*8016DE14 0016AC14*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016DE18, 0x8016DE18) //this is a jump label
/*8016DE18 0016AC18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8016DE1C 0016AC1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8016DE20 0016AC20*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8016DE24 0016AC24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8016DE28 0016AC28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016DE2C 0016AC2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8016DE30 0016AC30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8016DE34 0016AC34*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8016DE38 0016AC38*/ PPC::Runtime::ASM::bne(.L_8016DE84);
/*8016DE3C 0016AC3C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8016DE40 0016AC40*/ PPC::Runtime::ASM::beq(.L_8016DE84);
/*8016DE44 0016AC44*/ PPC::Runtime::ASM::bne(.L_8016DE58);
/*8016DE48 0016AC48*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6BD0 @ Get_MemoryOffset_SDA21);
/*8016DE4C 0016AC4C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8016DE50 0016AC50*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6BD8 @ Get_MemoryOffset_SDA21);
/*8016DE54 0016AC54*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016DE58, 0x8016DE58) //this is a jump label
/*8016DE58 0016AC58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8016DE5C 0016AC5C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016DE60 0016AC60*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8016DE64 0016AC64*/ PPC::Runtime::ASM::bne(.L_8016DE74);
/*8016DE68 0016AC68*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8016DE6C 0016AC6C*/ PPC::Runtime::ASM::beq(.L_8016DE74);
/*8016DE70 0016AC70*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8016DE74, 0x8016DE74) //this is a jump label
/*8016DE74 0016AC74*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8016DE78 0016AC78*/ PPC::Runtime::ASM::bne(.L_8016DE84);
/*8016DE7C 0016AC7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8016DE80 0016AC80*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8016DE84, 0x8016DE84) //this is a jump label
/*8016DE84 0016AC84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016DE88 0016AC88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016DE8C 0016AC8C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016DE90 0016AC90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016DE94 0016AC94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016DE98 0016AC98*/ PPC::Runtime::ASM::blr();
}