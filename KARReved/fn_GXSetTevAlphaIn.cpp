//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetTevAlphaIn(PPC::Runtime::GCContext* context)
{
/*803CEC24 003CBA24*/ PPC::Runtime::ASM::lwz(context->r9, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CEC28 003CBA28*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 2);
/*803CEC2C 003CBA2C*/ PPC::Runtime::ASM::li(context->r0, 0x61);
/*803CEC30 003CBA30*/ PPC::Runtime::ASM::add(context->r8, context->r9, context->r3);
/*803CEC34 003CBA34*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r8));
/*803CEC38 003CBA38*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*803CEC3C 003CBA3C*/ PPC::Runtime::ASM::rlwimi(context->r10, context->r4, 13, 16, 18);
/*803CEC40 003CBA40*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CEC44 003CBA44*/ PPC::Runtime::ASM::addi(context->r4, context->r10, 0x0);
/*803CEC48 003CBA48*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r5, 10, 19, 21);
/*803CEC4C 003CBA4C*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r6, 7, 22, 24);
/*803CEC50 003CBA50*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r7, 4, 25, 27);
/*803CEC54 003CBA54*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CEC58 003CBA58*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CEC5C 003CBA5C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x170, context->r8));
/*803CEC60 003CBA60*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r9));
/*803CEC64 003CBA64*/ PPC::Runtime::ASM::blr();
}