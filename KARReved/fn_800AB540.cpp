//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800AB540(PPC::Runtime::GCContext* context)
{
/*800AB540 000A8340*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r3));
/*800AB544 000A8344*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*800AB548 000A8348*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r5, 30);
/*800AB54C 000A834C*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r0, 0, 30, 31);
/*800AB550 000A8350*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r3));
/*800AB554 000A8354*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800AB558 000A8358*/ PPC::Runtime::ASM::blr();
}