//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_DemoOverlay_SceneCreated_TakeNoParam(PPC::Runtime::GCContext* context)
{
/*8039D1E0 00399FE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039D1E4 00399FE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039D1E8 00399FE8*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8039D1EC 00399FEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039D1F0 00399FF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039D1F4 00399FF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r12));
/*8039D1F8 00399FF8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039D1FC 00399FFC*/ PPC::Runtime::ASM::bctrl();
/*8039D200 0039A000*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039D204 0039A004*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039D208 0039A008*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039D20C 0039A00C*/ PPC::Runtime::ASM::blr();
}