//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8024A32C.hpp"



void fn_802461EC(PPC::Runtime::GCContext* context)
{
/*802461EC 00242FEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802461F0 00242FF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802461F4 00242FF4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802461F8 00242FF8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802461FC 00242FFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80246200 00243000*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80246204 00243004*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*80246208 00243008*/ PPC::Runtime::ASM::li(context->r8, 0xa);
/*8024620C 0024300C*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*80246210 00243010*/ PPC::Runtime::ASM::bl(fn_8024A32C);
/*80246214 00243014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80246218 00243018*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024621C 0024301C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80246220 00243020*/ PPC::Runtime::ASM::blr();
}