//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8019A644(PPC::Runtime::GCContext* context)
{
/*8019A644 00197444*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r3));
/*8019A648 00197448*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8019A64C 0019744C*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 4, 27, 27);
/*8019A650 00197450*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8019A654 00197454*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r3));
/*8019A658 00197458*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r3));
/*8019A65C 0019745C*/ PPC::Runtime::ASM::blr();
}