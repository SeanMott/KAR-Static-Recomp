//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800DDFEC(PPC::Runtime::GCContext* context)
{
/*800DDFEC 000DADEC*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x140);
/*800DDFF0 000DADF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*800DDFF4 000DADF4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x138);
/*800DDFF8 000DADF8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800DDFFC 000DADFC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*800DE000 000DAE00*/ PPC::Runtime::ASM::blr();
}