//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8017C648(PPC::Runtime::GCContext* context)
{
/*8017C648 00179448*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017C64C 0017944C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017C650 00179450*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AD238 @ Get_MemoryOffset_HighBit);
/*8017C654 00179454*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8017C658 00179458*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017C65C 0017945C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804AD238 @ Get_MemoryOffset_LowBit);
/*8017C660 00179460*/ PPC::Runtime::ASM::li(context->r5, String_ "SIS_La" Get_MemoryOffset_SDA21);
/*8017C664 00179464*/ PPC::Runtime::ASM::bl(fn_SomeFuncToDoWithTheStatdiumTitlesAndOtherShit);
/*8017C668 00179468*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017C66C 0017946C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017C670 00179470*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8017C674 00179474*/ PPC::Runtime::ASM::blr();
}