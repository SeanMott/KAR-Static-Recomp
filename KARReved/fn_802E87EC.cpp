//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E87EC(PPC::Runtime::GCContext* context)
{
/*802E87EC 002E55EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802E87F0 002E55F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E87F4 002E55F4*/ PPC::Runtime::ASM::li(context->r5, 0xff);
/*802E87F8 002E55F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E87FC 002E55FC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802E8800 002E5600*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802E8804 002E5604*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E8808 002E5608*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*802E880C 002E560C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*802E8810 002E5610*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*802E8814 002E5614*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802E8818 002E5618*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802E881C 002E561C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8820 002E5620*/ PPC::Runtime::ASM::bctrl();
/*802E8824 002E5624*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E8828 002E5628*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E882C 002E562C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802E8830 002E5630*/ PPC::Runtime::ASM::blr();
}