//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8033AB50(PPC::Runtime::GCContext* context)
{
/*8033AB50 00337950*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8033AB54 00337954*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E63A4 @ Get_MemoryOffset_HighBit);
/*8033AB58 00337958*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_804E63A4 @ Get_MemoryOffset_LowBit);
/*8033AB5C 0033795C*/ PPC::Runtime::ASM::bnelr();
/*8033AB60 00337960*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E6320 @ Get_MemoryOffset_HighBit);
/*8033AB64 00337964*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804E6320 @ Get_MemoryOffset_LowBit);
/*8033AB68 00337968*/ PPC::Runtime::ASM::blr();
}