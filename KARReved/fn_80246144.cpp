//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8024A32C.hpp"



void fn_80246144(PPC::Runtime::GCContext* context)
{
/*80246144 00242F44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80246148 00242F48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024614C 00242F4C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80246150 00242F50*/ PPC::Runtime::ASM::li(context->r5, 0x1e7);
/*80246154 00242F54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80246158 00242F58*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8024615C 00242F5C*/ PPC::Runtime::ASM::li(context->r7, 0x2f);
/*80246160 00242F60*/ PPC::Runtime::ASM::li(context->r8, 0xa);
/*80246164 00242F64*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*80246168 00242F68*/ PPC::Runtime::ASM::bl(fn_8024A32C);
/*8024616C 00242F6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80246170 00242F70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80246174 00242F74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80246178 00242F78*/ PPC::Runtime::ASM::blr();
}