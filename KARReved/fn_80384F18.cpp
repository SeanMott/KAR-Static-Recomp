//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80384F18(PPC::Runtime::GCContext* context)
{
/*80384F18 00381D18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4DC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80384F1C 00381D1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80384F20 00381D20*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80384F24 00381D24*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80384F28 00381D28*/ PPC::Runtime::ASM::bnelr();
/*80384F2C 00381D2C*/ PPC::Runtime::ASM::li(context->r0, 0xc);
/*80384F30 00381D30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4DC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80384F34 00381D34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80384F38 00381D38*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80384F3C 00381D3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80384F40 00381D40*/ PPC::Runtime::ASM::blr();
}