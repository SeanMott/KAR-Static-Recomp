//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803BF73C.hpp"
#include "fn_SetTRKConnected.hpp"
#include "OSReport.hpp"
#include "fn_SetTRKConnected.hpp"



void fn_usr_puts_serial(PPC::Runtime::GCContext* context)
{
/*803BE624 003BB424*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803BE628 003BB428*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BE62C 003BB42C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803BE630 003BB430*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803BE634 003BB434*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803BE638 003BB438*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BE63C 003BB43C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803BE640 003BB440*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803BE644 003BB444*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BE648 003BB448*/ PPC::Runtime::ASM::b(.L_803BE678);
RUNTIME_PPC_JUMP_LABEL(.L_803BE64C, 0x803BE64C) //this is a jump label
/*803BE64C 003BB44C*/ PPC::Runtime::ASM::bl(fn_803BF73C);
/*803BE650 003BB450*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BE654 003BB454*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803BE658 003BB458*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BE65C 003BB45C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*803BE660 003BB460*/ PPC::Runtime::ASM::bl(fn_SetTRKConnected);
/*803BE664 003BB464*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803BE668 003BB468*/ PPC::Runtime::ASM::bl(OSReport);
/*803BE66C 003BB46C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803BE670 003BB470*/ PPC::Runtime::ASM::bl(fn_SetTRKConnected);
/*803BE674 003BB474*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803BE678, 0x803BE678) //this is a jump label
/*803BE678 003BB478*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803BE67C 003BB47C*/ PPC::Runtime::ASM::bne(.L_803BE690);
/*803BE680 003BB480*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803BE684 003BB484*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*803BE688 003BB488*/ PPC::Runtime::ASM::extsb.(context->r30, context->r0);
/*803BE68C 003BB48C*/ PPC::Runtime::ASM::bne(.L_803BE64C);
RUNTIME_PPC_JUMP_LABEL(.L_803BE690, 0x803BE690) //this is a jump label
/*803BE690 003BB490*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803BE694 003BB494*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803BE698 003BB498*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BE69C 003BB49C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803BE6A0 003BB4A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BE6A4 003BB4A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803BE6A8 003BB4A8*/ PPC::Runtime::ASM::blr();
}