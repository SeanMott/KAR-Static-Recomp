//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DA1AC.hpp"
#include "fn_801F61E4.hpp"



void fn_801F813C(PPC::Runtime::GCContext* context)
{
/*801F813C 001F4F3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F8140 001F4F40*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F8144 001F4F44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8148 001F4F48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F814C 001F4F4C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F8150 001F4F50*/ PPC::Runtime::ASM::bl(fn_801DA1AC);
/*801F8154 001F4F54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801F8158 001F4F58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F815C 001F4F5C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E20C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F8160 001F4F60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801F8164 001F4F64*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E20B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F8168 001F4F68*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
/*801F816C 001F4F6C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b50, context->r31));
/*801F8170 001F4F70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F8174 001F4F74*/ PPC::Runtime::ASM::fmul(context->f2, context->f3, context->f2);
/*801F8178 001F4F78*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
/*801F817C 001F4F7C*/ PPC::Runtime::ASM::fdivs(context->f2, context->f4, context->f2);
/*801F8180 001F4F80*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f0);
/*801F8184 001F4F84*/ PPC::Runtime::ASM::bl(fn_801F61E4);
/*801F8188 001F4F88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F818C 001F4F8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8190 001F4F90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F8194 001F4F94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F8198 001F4F98*/ PPC::Runtime::ASM::blr();
}