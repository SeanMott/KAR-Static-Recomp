//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8013025C(PPC::Runtime::GCContext* context)
{
/*8013025C 0012D05C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80130260 0012D060*/ PPC::Runtime::ASM::mflr(context->r0);
/*80130264 0012D064*/ PPC::Runtime::ASM::lis(context->r5, lbl_80558758 @ Get_MemoryOffset_HighBit);
/*80130268 0012D068*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8013026C 0012D06C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80130270 0012D070*/ PPC::Runtime::ASM::addi(context->r3, context->r5, lbl_80558758 @ Get_MemoryOffset_LowBit);
/*80130274 0012D074*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*80130278 0012D078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013027C 0012D07C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80130280 0012D080*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80130284 0012D084*/ PPC::Runtime::ASM::blr();
}