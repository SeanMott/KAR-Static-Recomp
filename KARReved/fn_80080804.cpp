//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80083D20.hpp"



void fn_80080804(PPC::Runtime::GCContext* context)
{
/*80080804 0007D604*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80080808 0007D608*/ PPC::Runtime::ASM::mflr(context->r0);
/*8008080C 0007D60C*/ PPC::Runtime::ASM::li(context->r5, -0x2a);
/*80080810 0007D610*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80080814 0007D614*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*80080818 0007D618*/ PPC::Runtime::ASM::li(context->r4, lbl_805D54B0 @ Get_MemoryOffset_SDA21);
/*8008081C 0007D61C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80080820 0007D620*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bbc, context->r7));
/*80080824 0007D624*/ PPC::Runtime::ASM::and(context->r5, context->r6, context->r5);
/*80080828 0007D628*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bbc, context->r7));
/*8008082C 0007D62C*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bbc, context->r7));
/*80080830 0007D630*/ PPC::Runtime::ASM::lbzx(context->r0, context->r4, context->r0);
/*80080834 0007D634*/ PPC::Runtime::ASM::or(context->r0, context->r5, context->r0);
/*80080838 0007D638*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bbc, context->r7));
/*8008083C 0007D63C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1bbc, context->r7));
/*80080840 0007D640*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r0, 24);
/*80080844 0007D644*/ PPC::Runtime::ASM::bl(fn_80083D20);
/*80080848 0007D648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8008084C 0007D64C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80080850 0007D650*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80080854 0007D654*/ PPC::Runtime::ASM::blr();
}