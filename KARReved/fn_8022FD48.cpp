//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"
#include "fn_800F7DB0.hpp"



void fn_8022FD48(PPC::Runtime::GCContext* context)
{
/*8022FD48 0022CB48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022FD4C 0022CB4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022FD50 0022CB50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022FD54 0022CB54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022FD58 0022CB58*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022FD5C 0022CB5C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022FD60 0022CB60*/ PPC::Runtime::ASM::blt(.L_8022FD7C);
/*8022FD64 0022CB64*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*8022FD68 0022CB68*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8022FD6C 0022CB6C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8022FD70 0022CB70*/ PPC::Runtime::ASM::li(context->r4, 0x559);
/*8022FD74 0022CB74*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*8022FD78 0022CB78*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022FD7C, 0x8022FD7C) //this is a jump label
/*8022FD7C 0022CB7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022FD80 0022CB80*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022FD84 0022CB84*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x643, context->r3));
/*8022FD88 0022CB88*/ PPC::Runtime::ASM::li(context->r3, 0x18);
/*8022FD8C 0022CB8C*/ PPC::Runtime::ASM::bl(fn_800F7DB0);
/*8022FD90 0022CB90*/ PPC::Runtime::ASM::cmplw(context->r31, context->r3);
/*8022FD94 0022CB94*/ PPC::Runtime::ASM::bne(.L_8022FDA8);
/*8022FD98 0022CB98*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8022FD9C 0022CB9C*/ PPC::Runtime::ASM::beq(.L_8022FDA8);
/*8022FDA0 0022CBA0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8022FDA4 0022CBA4*/ PPC::Runtime::ASM::b(.L_8022FDAC);
RUNTIME_PPC_JUMP_LABEL(.L_8022FDA8, 0x8022FDA8) //this is a jump label
/*8022FDA8 0022CBA8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8022FDAC, 0x8022FDAC) //this is a jump label
/*8022FDAC 0022CBAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022FDB0 0022CBB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022FDB4 0022CBB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022FDB8 0022CBB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022FDBC 0022CBBC*/ PPC::Runtime::ASM::blr();
}