//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8007B66C(PPC::Runtime::GCContext* context)
{
/*8007B66C 0007846C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007B670 00078470*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007B674 00078474*/ PPC::Runtime::ASM::lis(context->r3, lbl_80552A30 @ Get_MemoryOffset_HighBit);
/*8007B678 00078478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B67C 0007847C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8007B680 00078480*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80552A30 @ Get_MemoryOffset_LowBit);
/*8007B684 00078484*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8007B688 00078488*/ PPC::Runtime::ASM::bl(fn_804889C0);
/*8007B68C 0007848C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007B690 00078490*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007B694 00078494*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007B698 00078498*/ PPC::Runtime::ASM::blr();
}