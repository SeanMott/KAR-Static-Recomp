//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces(PPC::Runtime::GCContext* context)
{
/*8007B650 00078450*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552A30 @ Get_MemoryOffset_HighBit);
/*8007B654 00078454*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552A30 @ Get_MemoryOffset_LowBit);
/*8007B658 00078458*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8007B65C 0007845C*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8007B660 00078460*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8007B664 00078464*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8007B668 00078468*/ PPC::Runtime::ASM::blr();
}