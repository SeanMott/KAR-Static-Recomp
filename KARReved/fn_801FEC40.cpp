//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801FEC40(PPC::Runtime::GCContext* context)
{
/*801FEC40 001FBA40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FEC44 001FBA44*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801FEC48 001FBA48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801FEC4C 001FBA4C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801FEC50 001FBA50*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*801FEC54 001FBA54*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801FEC58 001FBA58*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801FEC5C 001FBA5C*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f0);
/*801FEC60 001FBA60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801FEC64 001FBA64*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f1);
/*801FEC68 001FBA68*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f0);
/*801FEC6C 001FBA6C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E223C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FEC70 001FBA70*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f3, context->f1);
/*801FEC74 001FBA74*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f2, context->f1);
/*801FEC78 001FBA78*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801FEC7C 001FBA7C*/ PPC::Runtime::ASM::ble(.L_801FECCC);
/*801FEC80 001FBA80*/ PPC::Runtime::ASM::frsqrte(context->f2, context->f1);
/*801FEC84 001FBA84*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E2250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FEC88 001FBA88*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E2258 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FEC8C 001FBA8C*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*801FEC90 001FBA90*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*801FEC94 001FBA94*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*801FEC98 001FBA98*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*801FEC9C 001FBA9C*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*801FECA0 001FBAA0*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*801FECA4 001FBAA4*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*801FECA8 001FBAA8*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*801FECAC 001FBAAC*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*801FECB0 001FBAB0*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*801FECB4 001FBAB4*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*801FECB8 001FBAB8*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*801FECBC 001FBABC*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*801FECC0 001FBAC0*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*801FECC4 001FBAC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FECC8 001FBAC8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801FECCC, 0x801FECCC) //this is a jump label
/*801FECCC 001FBACC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FECD0 001FBAD0*/ PPC::Runtime::ASM::blr();
}