//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8024A32C.hpp"



void fn_8024617C(PPC::Runtime::GCContext* context)
{
/*8024617C 00242F7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80246180 00242F80*/ PPC::Runtime::ASM::mflr(context->r0);
/*80246184 00242F84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80246188 00242F88*/ PPC::Runtime::ASM::li(context->r5, 0x1e7);
/*8024618C 00242F8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80246190 00242F90*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80246194 00242F94*/ PPC::Runtime::ASM::li(context->r7, 0x2f);
/*80246198 00242F98*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8024619C 00242F9C*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*802461A0 00242FA0*/ PPC::Runtime::ASM::bl(fn_8024A32C);
/*802461A4 00242FA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802461A8 00242FA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802461AC 00242FAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802461B0 00242FB0*/ PPC::Runtime::ASM::blr();
}