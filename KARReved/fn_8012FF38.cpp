//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011245C.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_8012FF38(PPC::Runtime::GCContext* context)
{
/*8012FF38 0012CD38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8012FF3C 0012CD3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012FF40 0012CD40*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1127 @ Get_MemoryOffset_HighBit);
/*8012FF44 0012CD44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012FF48 0012CD48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012FF4C 0012CD4C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012FF50 0012CD50*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_1127 @ Get_MemoryOffset_LowBit);
/*8012FF54 0012CD54*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012FF58 0012CD58*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012FF5C 0012CD5C*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xd48);
/*8012FF60 0012CD60*/ PPC::Runtime::ASM::bl(fn_8011245C);
/*8012FF64 0012CD64*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012FF68 0012CD68*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8012FF6C 0012CD6C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8012FF70 0012CD70*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8012FF74 0012CD74*/ PPC::Runtime::ASM::beq(.L_8012FFA4);
/*8012FF78 0012CD78*/ PPC::Runtime::ASM::bge(.L_8012FFC0);
/*8012FF7C 0012CD7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8012FF80 0012CD80*/ PPC::Runtime::ASM::bge(.L_8012FF88);
/*8012FF84 0012CD84*/ PPC::Runtime::ASM::b(.L_8012FFC0);
RUNTIME_PPC_JUMP_LABEL(.L_8012FF88, 0x8012FF88) //this is a jump label
/*8012FF88 0012CD88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012FF8C 0012CD8C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012FF90 0012CD90*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*8012FF94 0012CD94*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012FF98 0012CD98*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012FF9C 0012CD9C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8012FFA0 0012CDA0*/ PPC::Runtime::ASM::b(.L_8012FFD8);
RUNTIME_PPC_JUMP_LABEL(.L_8012FFA4, 0x8012FFA4) //this is a jump label
/*8012FFA4 0012CDA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012FFA8 0012CDA8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012FFAC 0012CDAC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*8012FFB0 0012CDB0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012FFB4 0012CDB4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012FFB8 0012CDB8*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8012FFBC 0012CDBC*/ PPC::Runtime::ASM::b(.L_8012FFD8);
RUNTIME_PPC_JUMP_LABEL(.L_8012FFC0, 0x8012FFC0) //this is a jump label
/*8012FFC0 0012CDC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012FFC4 0012CDC4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8012FFC8 0012CDC8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x38);
/*8012FFCC 0012CDCC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012FFD0 0012CDD0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012FFD4 0012CDD4*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_8012FFD8, 0x8012FFD8) //this is a jump label
/*8012FFD8 0012CDD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012FFDC 0012CDDC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8012FFE0 0012CDE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012FFE4 0012CDE4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012FFE8 0012CDE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012FFEC 0012CDEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8012FFF0 0012CDF0*/ PPC::Runtime::ASM::blr();
}