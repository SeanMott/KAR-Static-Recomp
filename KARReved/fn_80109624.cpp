//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F466C.hpp"
#include "fn_80109684.hpp"



void fn_80109624(PPC::Runtime::GCContext* context)
{
/*80109624 00106424*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80109628 00106428*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010962C 0010642C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80109630 00106430*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80109634 00106434*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80109638 00106438*/ PPC::Runtime::ASM::li(context->r3, 0x3e);
/*8010963C 0010643C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80109640 00106440*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80109644 00106444*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80109648 00106448*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8010964C 0010644C*/ PPC::Runtime::ASM::bl(fn_800F466C);
/*80109650 00106450*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80109654 00106454*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80109658 00106458*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*8010965C 0010645C*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*80109660 00106460*/ PPC::Runtime::ASM::bl(fn_80109684);
/*80109664 00106464*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80109668 00106468*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010966C 0010646C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80109670 00106470*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80109674 00106474*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80109678 00106478*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010967C 0010647C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80109680 00106480*/ PPC::Runtime::ASM::blr();
}